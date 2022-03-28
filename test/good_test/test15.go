package main

import "fmt"

func area(length int, width int)int{
    Ar := length* width
    return Ar

}

func surface_area(length int, width int, height int )int{
    Ar := area(length,width) + area(length,height) + area(width,height)
	Ar *= 2
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

	// var vol int = area(a.X[0],area(a.Y,a.Z))
	// vol = area(a.X[0],area(a.Y,a.Z))
	// var s int = surface_area(a.X[0],a.Y,a.Z)

}