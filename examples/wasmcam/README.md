# WASMcam

![../../images/wasmcam.png](../../images/wasmcam.png)

Example that reads frames from a connected webcam, and processes them using a WASM guest module using a call to host via the wasmCV interface to perform a GaussianBlur, then displays the ascii version of the image on the terminal.

## Compile the guest module

```shell
$ cd modules/processor
$ tinygo build -o ../processor.wasm -target=wasm-unknown .
$ cd ../..
```

## Run the host application

```shell
$ go run .
Defining host function...
Start reading device id : 0
```

It will then capture each frame, display some stats, and them perform a gaussian blur on the source image.

```shell
Read frame 1
Cols: 640 Rows: 480 Type: 16
Performed GaussianBlur on image
Frame complete
```
