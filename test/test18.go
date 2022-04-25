package main

import "fmt"

func rev(a int, b int) {
	// *a += *b
	// *b = *a -*b
	// *a -= *b
	a = b
	printf("%d %d", a, b)
}

func main() {
	a, b:= 1, 2
	// c, d := &a, &b
	rev(b,a)
	printf("%d,  %d\n", a, b)
}
