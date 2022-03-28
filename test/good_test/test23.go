package main

import "fmt"

func main() {

	type Point struct{
		X int
		Y int
		Z int
	}

	var a Point
	a.X = 5
	a.Y = 4
	a.Z = 3

	var b int = a.X

}
