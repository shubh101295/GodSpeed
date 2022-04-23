package main

import "fmt"

var a int 

func f() {
	printf("%d\n",a)
}
func main() {
	a=2
	f()
}
