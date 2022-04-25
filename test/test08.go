package main

import "fmt"

func main() {
	n:=5
	var a [5]int;
	for i:=0;i<n;i++ {
		a[i]=2*i
	}
	for j:=0;j<5;j++ {
		printf("%d %d\n",a[j],j)
	}
}
