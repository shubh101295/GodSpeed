package main

import "fmt"

func main() {

	var a, c *int
	var b, d int = 3
	*a = b
	*a, *c = b, d
}
