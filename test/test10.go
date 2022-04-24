package main

import "fmt"

func main() {
	n:=5
	a := &n
	b :=  &a
	// b++
	*(*b) += 1

	printf("%d\n",*(*b))




}
