package main

import "fmt"

func f(a int, b int) bool {
	// a=4
	printf("NOPE %d %d\n",a,b)
	return true;
}

func main(){
	x:=2
	if(f(2,1)) {
		printf("HELLO\n")
	}
	y:=3
	z:=f(y,1);
	// printf("%d %d\n",y,z)
}
