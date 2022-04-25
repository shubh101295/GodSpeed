package main

import "fmt"

<<<<<<< HEAD
func rev(a int, b int) {
	// *a += *b
	// *b = *a -*b
	// *a -= *b
	a = b
	printf("%d %d", a, b)
}

func main() {
	a, b:= 1, 2
	// c, d := &a, &b
	rev(b,a)
	printf("%d,  %d\n", a, b)
=======
func main() {
	// x:=5
	// y:=4
	// if (x<y) {
	// 	printf("%d %d \n",x,y)
	// }
	var a [5]*int
	var b [5]int
	printf("Enter 5 elements : ")

	for i:=0;i<5;i++ {
		// b[i]=2-i
		a[i] = &b[i]
		scanf("%d",a[i]);
		// *a[i] += i;
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

		for k:=0;k<5;k++ {
			printf("%d ",b[k])
		}
		printf("\n")
	}

	for i:=0;i<5;i++ {
		printf("%d ",b[i])
	}
	printf("\n")
	// printf("%d\n",*a[0]*(*a[1])*(*a[2]))
>>>>>>> 91a83965741f8060cf4da68ad2d171f42285edc6
}
