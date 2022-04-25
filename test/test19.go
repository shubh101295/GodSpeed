package main

import "fmt"

func main() {
	var b [5]int
	for i:=0;i<5;i++ {
		b[i]=2-i
	}
	for i:=0;i<5;i++ {
		printf("%d ",b[i])
	}
	printf("\n")
	for i:=0;i<5;i++ {
		for j:=1;j<5-i;j++{
			printf("Working on i=%d j=%d\n",i,j)
			x:=b[j]
			y:=b[j-1]
			printf("%d %d %d\n",x,y,(x<y))
			if (x<y) {
				printf("Swapping %d and %d ,  b[j-1]=%d and b[j]=%d\n",j,j-1,b[j-1],b[j])
				temp:=b[j-1]
				b[j-1] = b[j]
				b[j]=temp
			}
		}
	}
	for i:=0;i<5;i++ {
		printf("%d ",b[i])
	}
	printf("\n")
}
