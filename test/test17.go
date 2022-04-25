package main

import "fmt"

func plsm_print(a int ,b int ,c int ,d int ,e int ,f int ,g int ,h int ,i int ,j int ,k int ,l int ,m int ,n int ,o int) {
	printf("Here are your numbers: %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n);
}

func main() {
	a := 1
	b := 4
	c := 6
	d := -7
	e:=6
	f:=7
	g:=-8
	h:=-9
	i:=10
	j:=-11
	k:=12
	l:=13
	m:=-292
	n:=23
	o:=292

	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o);
	printf("Here are your numbers: %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n);
	for x:=0;x<3;x++{
		plsm_print(a,b,c,d,e,f,g,h,i,j,k,l,m,n,o)
	}
	
	// printf("Here are your numbers: %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,i,j,k,l,m,n,o);
}

/*
Expected Output

Here are your numbers: 1 4 6 -7 6 7 -8 -9 10 -11 12 13 -292 23 292
*/