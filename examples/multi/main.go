package main

import (
	"context"
	_ "embed"
	"flag"
	"fmt"
	"log"

	"github.com/orsinium-labs/wypes"
	"github.com/tetratelabs/wazero"
	"gocv.io/x/gocv"
)

//go:embed modules/processrs.wasm
var processFrameWasm []byte

var frame gocv.Mat

func main() {
	flag.Parse()

	ctx := context.Background()
	r := wazero.NewRuntime(ctx)
	defer r.Close(ctx)

	println("Defining host function...")
	modules := wypes.Modules{
		"hosted": wypes.Module{
			"println": wypes.H1(hostPrintln),
		},
		"wasm:cv/mat": wypes.Module{
			"[method]mat.cols": wypes.H1(matColsFunc),
			"[method]mat.rows": wypes.H1(matRowsFunc),
			"[method]mat.type": wypes.H1(matTypeFunc),
		},
	}

	err := modules.DefineWazero(r, nil)
	if err != nil {
		fmt.Printf("error define host functions: %v", err)
		return
	}

	mod, err := r.Instantiate(ctx, processFrameWasm)
	if err != nil {
		log.Panicf("failed to instantiate module: %v", err)
	}
	process := mod.ExportedFunction("process")

	// Open the webcam.
	deviceID := "/dev/video0"
	webcam, err := gocv.OpenVideoCapture(deviceID)
	if err != nil {
		fmt.Printf("Error opening video capture device: %v\n", deviceID)
		return
	}
	defer webcam.Close()

	// streaming, capture from webcam
	frame = gocv.NewMat()
	defer frame.Close()

	fmt.Printf("Start reading device: %v\n", deviceID)
	i := 0
	for {
		if ok := webcam.Read(&frame); !ok {
			fmt.Printf("frame error %v\n", deviceID)
			continue
		}
		if frame.Empty() {
			continue
		}

		// clear screen
		fmt.Print("\033[H\033[2J")

		i++
		fmt.Printf("Read frame %d\n", i+1)
		_, err := process.Call(ctx, 0)
		if err != nil {
			fmt.Printf("Error calling process: %v\n", err)
		}
	}
}

func hostPrintln(msg wypes.String) wypes.Void {
	println(msg.Unwrap())
	return wypes.Void{}
}

func matColsFunc(matref wypes.UInt32) wypes.UInt32 {
	return wypes.UInt32(frame.Cols())
}

func matRowsFunc(matref wypes.UInt32) wypes.UInt32 {
	return wypes.UInt32(frame.Rows())
}

func matTypeFunc(matref wypes.UInt32) wypes.UInt32 {
	return wypes.UInt32(frame.Type())
}
