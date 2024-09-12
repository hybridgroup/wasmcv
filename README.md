# wasmCV

wasmCV provides WebAssembly interface bindings for computer vision applications based on [OpenCV](https://github.com/opencv/opencv).

It includes [WIT](https://github.com/WebAssembly/component-model/blob/main/design/mvp/WIT.md) files defining the interface to be used between a WebAssembly host application and a WASM guest module intended to process  OpenCV `Mat` image frames.

These are then used to generate WASM bindings for TinyGo, Rust, and C. Those bindings can then be used in a WASM guest module to obtain information or perform operations on OpenCV image frames.

## Example wasmCV modules

### TinyGo

This TinyGo module exports a `process()` function to the WASM host application, which passes in the wasmCV image `Mat` to be processed. It then calls functions on that `Mat` which are handled by the host application by calling OpenCV to actually perform the operations.

```go
package main

import (
	"github.com/hybridgroup/mechanoid/convert"
	"github.com/hybridgroup/wasmcv/components/tinygo/wasm/cv/mat"
)

//go:wasmimport hosted println
func println(ptr, size uint32)

//go:export process
func process(image mat.Mat) mat.Mat {
	println(convert.StringToWasmPtr("Cols: " +
		convert.IntToString(int(image.Cols())) +
		" Rows: " +
		convert.IntToString(int(image.Rows())) +
		" Type: " +
		convert.IntToString(int(image.Type()))))

	return image
}

func main() {}
```

You can then compile this module using the TinyGo compiler.

```shell
tinygo build -o processor.wasm -target=wasm-unknown processor.go
```

Note that the `wasm-unknown` target can be used with wasmCV to produce very lightweight guest modules. The example above compiles to around 31k, including debug information.

```shell
-rwxrwxr-x 1 ron ron 31248 sep 11 11:00 processor.wasm
```

See the [basic example application here](./examples/basic) to give it a try.

### Rust

This Rust module does the same thing as the TinyGo wasm module example. It exports a `process()` function to the WASM host application, which then passes in the wasmCV image `Mat` to be processed. The module then calls functions on that `Mat` which are handled by the host application by calling OpenCV to actually perform the operations.

```rust
#![no_std]

extern crate core;
extern crate wee_alloc;
extern crate alloc;

use alloc::string::String;
use alloc::string::ToString;

#[path = "../../../../../components/rust/cv.rs"]
mod cv;

#[no_mangle]
pub extern fn process(mat: cv::Mat) -> cv::Mat {
    println(&["Cols: ", &mat.cols().to_string(), " Rows: ", &mat.rows().to_string()].concat());

    return mat;
}

/// Print a message to the host [`_println`].
fn println(message: &String) {
    unsafe {
        let (ptr, len) = string_to_ptr(message);
        _println(ptr, len);
    }
}

#[link(wasm_import_module = "hosted")]
extern "C" {
    #[link_name = "println"]
    fn _println(ptr: u32, size: u32);
}

unsafe fn string_to_ptr(s: &String) -> (u32, u32) {
    return (s.as_ptr() as u32, s.len() as u32);
}

// Use `wee_alloc` as the global allocator...for now.
#[global_allocator]
static ALLOC: wee_alloc::WeeAlloc = wee_alloc::WeeAlloc::INIT;

#[panic_handler]
fn handle_panic(_: &core::panic::PanicInfo) -> ! {
    core::arch::wasm32::unreachable()
}
```

You can then compile this module using the Rust compiler.

```shell
cargo build --target wasm32-unknown-unknown --release
```

The `wasm32-unknown-unknown` target can be used with wasmCV to produce very lightweight guest modules when combined with `no_std`. The example above compiles to around 14k, including debug information.

```shell
-rwxrwxr-x 1 ron ron 14488 sep 12 14:23 processrs.wasm
```

See the [multi example application here](./examples/multi) to try wasmCV with Rust.

### Other language examples

Coming soon...

## WASM Component Generation

WASM Guest bindings are generated using `wit-bindgen` v0.31 or above

https://github.com/bytecodealliance/wit-bindgen

Go bindings are generated by `wit-bindgen-go`

https://github.com/bytecodealliance/wasm-tools-go

### TinyGo

```shell
wit-bindgen-go generate --out ./components/tinygo -w cv ./wit/
```

### Rust

```shell
wit-bindgen rust --out-dir ./components/rust/ -w cv ./wit/
```

### C

```shell
wit-bindgen c --out-dir ./components/c/ -w cv ./wit/
```

