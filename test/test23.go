package main

import "fmt"

type Input struct {
	Index         int
	Index2        int
	arr           int
	isGood        bool
	val           byte
}


func main() {
	var in Input
	in.Index = 8292
	in.Index+=100
	in.Index2 = 100
	in.arr = 102
	in.isGood = true
	in.val = 'c'
	printf("%d %d %d %d %c\n",in.Index,in.Index2,in.arr,in.isGood,in.val)

}
