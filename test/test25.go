package main

import "fmt"

func main() {
	a := 2
	b := &a
	c := &b
	d := &c
	e := &d
	*(*(*(*e))) += 5
	printf("%d \n", a)
}
