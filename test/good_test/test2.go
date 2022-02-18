package main

import (
	"fmt"
)

func main(){
	var n int;
	fmt.Scanln(&n)

	var a,b,c int
	fmt.Scanf("%d %d",&a,&b);
	c = 0

	switch n%12 {
		case 0:
			c = a | b
		case 1:
			c = a % b
		case 2:
			c = a ^ b
		case 3:
			c = a & b
		case 4:
			c = a * b
		case 5:
			a = a << 2
			fallthrough
		case 6:
			b = b >> 2
		case 7:
			a = b+a
			fallthrough
		case 10:
			b = a-a+2*7/3
		default:
			c = a+b
	}

	fmt.Printf("a: %d, b: %d, c: %d\n",a,b,c)

}
