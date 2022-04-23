package main

import "fmt"

func main() {
	n:=5
	var a [5][5]int
	for i:=0;i<n;i++ {
		for j:=0;j<n;j++ {
			a[i][j]= i+j
		}
	}

	for i:=0;i<n;i++ {
		for j:=0;j<n;j++ {
			printf("%d ",a[i][j])
		}
		printf("\n")
	}




}
