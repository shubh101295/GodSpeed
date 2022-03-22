package main

import "fmt"

func BinarySearch(x int, arr [1000]int, len int) bool {
	var l int = 0
	var r int = len

	for (l<r) {

		m := l + (r-l)/2
		if ( arr[m]==x ){
			return true
		} else if ( arr[m]<x ){
			l = m+1;
		} else {
			r = m-1
		}

	}
	return false
}

func main(){
	var n int
	fmt.Scanln(&n)
	var A[1000] int
	for i:=0;i<n;i++ {
		fmt.Scanf("%d",&A[i][j][k])
	}

	var x int
	fmt.Scanln(&x)

	var ans bool = BinarySearch(x,A,n)
	fmt.Println(ans)

}
