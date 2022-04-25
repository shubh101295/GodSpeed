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
	var a[5],b[5] *int
	var c[5],d[5] int

	for i:=0;i<5;i++{
		a[i] = &c[i]
		b[i] 
		scanf("%d %d".a[i],b[i])
	}

	rev(e,f)
	printf("%d,%d\n",*c,*d)
}
