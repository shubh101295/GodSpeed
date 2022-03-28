package main

import "fmt"

func area(length int, width int)int{
    Ar := length* width
    return Ar

}

func main() {

	type Point struct{
		X[1] int
		Y int
		Z int
	}

	var a Point
	a.X[0] = 5
	a.Y = 4
	a.Z = 3

	var b int = area(a.X[0],area(a.Y,a.Z))

}
