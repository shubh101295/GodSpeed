package main

import "fmt"

func swap(a *int,b *int) {
	*a += *b
	*b = *a -*b
	*a -= *b
}

func main() {
	var a ,b   [5]*int
	var c ,d   [5] int

	for i:=0;i<5;i++{
		a[i] = &c[i]
		b[i] = &d[i]
		scanf("%d %d",a[i],b[i])
		swap(a[i],b[i])
	}
	for i:=0;i<5;i++ {
		printf("%d %d\n",c[i],d[i])
	}

}
