package main

import "fmt"

func main() {
	var a [5]*int
	var b [5]int
	for i:=0;i<5;i++ {
		a[i] = &b[i]
		scanf("%d",a[i]);
	}
	
	printf("%d\n",*a[0]*(*a[1])*(*a[2]))




}
