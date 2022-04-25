package main

import "fmt"

func main() {
	var a [5]**int
	var b [5]*int
	var c [5]int
	for i:=0;i<5;i++ {
		a[i] = &b[i]
		b[i] = &c[i]
		scanf("%d",*a[i]);
		// *(*a[i]) += i
		// *b[i]  += i
	}
	for i:=0;i<5;i++ {
		printf("%d - %d %d %d\n",i,c[i],*b[i],*(*a[i]))
	}
	printf("%d\n",*b[0]*(*(*a[1]))*(c[2]))

}
