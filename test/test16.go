package main

import "fmt"

func rev(a **int,b **int) {
	*a += *b
	*b = *a -*b
	*a -= *b
	// a = b
}

func p ()

func main() {
	a := 1
	b := 2
	c := &a
	d := &b
	e := &c
	f := &d

	var a [5]int
	for i:=0;i<5;i++{
		a[i] = i
	}

	rev(e,f)
	printf("%d,%d\n",*c,*d)
}
