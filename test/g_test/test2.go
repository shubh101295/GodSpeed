package main

import (
	"fmt"
)

func main(){
	var n,c,b,a int

	switch  {
		case 0:
			c = a | b
			c=a
			fallthrough
		case 1:
			c = b % a

		case 2:
			c = a ^ b
		case 4:
			c = a * b
		case 5:
			c = a << 2
			fallthrough
		case 6:
			c = b >> 2
		case 7:
			c = b+a
			fallthrough
			// fallthrough
			// c=a
		case 10:
			c = a-a+2*7/3
		default:
			c = a+b

	}

	// fmt.Printf("a: %d, b: %d, c: %d\n",a,b,c)

}
