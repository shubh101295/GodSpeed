package main

import "fmt"

func merge(arr []int, l int , r int ){

	var m int = l + (r-l)/2
	var i,j,k int
	var x,y int

	x = m-l+1
	y = r-m
	k = l

	var A[x] int
	var B[y] int

	for i = 0; i < x; i++ {
		A[i] = arr[l + i]
	}

    for j = 0; j < y; j++ {
        B[j] = arr[m + 1 + j]
	}

	i = 0
	j = 0

	for (i < x && j < y){
		if (A[i] <= B[j]) {
            arr[k] = A[i]
            i++
        } else {
            arr[k] = B[j]
            j++
        }
        k++
	}

	for i < x {
		arr[k] = A[i]
		i++
        k++
	}

	for j < y {
		arr[k] = B[j]
		j++
        k++
	}

}

func mergesort(arr []int, l int, r int){
	if (l < r){
		var m int = l + (r-l)/2
		mergesort(arr,l,m)
		mergesort(arr,m+1,r)
		merge(arr,l,r)
	}
}