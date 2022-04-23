package main

import "fmt"

func main() {	
	for i:=2;;i++ {
		if i>5 {
			break
		}
		for j:=4;;j-- {

			if( i>j ) {
				printf("(i=%d) > (j=%d)\n",i,j)
			} else if(i==j) {
				printf("(i=%d) == (j=%d)\n",i,j)
			} else {
				printf("(i=%d) < (j=%d)\n",i,j)
			}
			if(j>2){
				continue
			} else {
				break
			}
		}
	}
}
