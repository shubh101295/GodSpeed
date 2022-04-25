package main

import "fmt"

func fact(n int) int{
	if n==0 {
		return 1
	} 
	x:= n*fact(n-1)
	printf("Factorial of %d==%d\n",n,x)
	return x
}

func main() {
	n:=6
	x:=fact(6)
	printf("%d %d\n",n,x)
}
