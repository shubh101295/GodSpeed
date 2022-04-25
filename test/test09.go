package main

import "fmt"


func main() {
	// n:=5
	var nCr [5][5]int
	for i:=0;i<5;i++ {
		for j:=0;j<5;j++{
			nCr[i][j] = 0
		}
	}
	nCr[0][0]=1
	for i:=1;i<5;i++ {
		for j:=0;j<=i;j++ {
			if j==0 {
				nCr[i][j] = 1
				continue
			} 
			nCr[i][j]=nCr[i-1][j]+nCr[i-1][j-1]
		}
	}

	for i:=0;i<5;i++ {
		for j:=0;j<5;j++ {
			printf("%d ",nCr[i][j])
		}
		printf("\n")
	}




}
