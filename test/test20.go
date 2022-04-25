package main

import "fmt"

var a[2][3][4][5] int

func main() {
	for i:=0;i<2;i++{
		for j:=0;j<3;j++ {
			for k:=0;k<4;k++{
				for i2:=0;i2<5;i2++{
					a[i][j][k][i2]=1000*i+100*j+10*k+i2
				}
			}
		}
	}

	for i:=0;i<2;i++{
		for j:=0;j<3;j++ {
			printf("Printing for i=%d,j=%d\n",i,j)
			for k:=0;k<4;k++{
				for i2:=0;i2<5;i2++{
					printf("%d ",a[i][j][k][i2])
				}
				printf("\n")
			}
			printf("\n")
		}
	}



}
