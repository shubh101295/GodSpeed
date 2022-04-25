package main

import "fmt"

func fun(a int ,b int ,c int ,d int) (int,int) {
	x:= a+b+c+d
	y:= a-b+c-d 
	printf("Sum=%d, Alternating sum=%d\n",x,y)
	return x,y
}

func main() {
	a:= 1
	b:= 2
	c:= 3
	d:= 4

	x,y:=fun(a,b,c,d)
	printf("FROM main Sum=%d, Alternating sum=%d\n",x,y)
}

/*
Expected Output


*/