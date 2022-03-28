package main

import "fmt"

func area(length int, width int)int{
    Ar := length* width
    return Ar

}

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

	var b int = area(a.X,area(a.Y,a.Z))

}
