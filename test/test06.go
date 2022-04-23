package main

import "fmt"

func main() {	
	for i:=2;i<=5;i++ {
		for j:=4;j!=2;j-- {
			if( i>j ) {
				printf("(i=%d) > (j=%d)\n",i,j)
			} else if(i==j) {
				printf("(i=%d) == (j=%d)\n",i,j)
			} else {
				printf("(i=%d) < (j=%d)\n",i,j)
			}
		}
	}
}
