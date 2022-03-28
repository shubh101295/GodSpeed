package main

import "fmt"

func area(length, width int) int {

	Ar := length * width
	return Ar
}

// Main function
func main() {
	var a, b int
	a = 1
	b = 2
	area(1, 2)
	// fmt.Printf("Area of rectangle is : %d", area(12, 10))
}
