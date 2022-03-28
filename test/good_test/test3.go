package main

import "fmt"

func merge(arr [1000]int, l int, r int) [1000]int {

	var m int = l + (r-l)/2
	var i, j, k int
	var x, y int

	x = m - l + 1
	y = r - m
	k = l

	var A [1000]int
	var B [1000]int

	for i = 0; i < x; i++ {
		A[i] = arr[l+i]
	}

	for j = 0; j < y; j++ {
		B[j] = arr[m+1+j]
	}

	i = 0
	j = 0

	for i < x && j < y {
		if A[i] <= B[j] {
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
	return arr
}

func mergesort(arr [1000]int, l int) [1000]int {
	if l < r {
		var m int = l + (r-l)/2
		arr = mergesort(arr, l, m)
		arr = mergesort(arr, m+1, r)
		arr = merge(arr, l, r)
	}
	return arr
}

func main() {
	var n int
	fmt.Scanln(&n)
	var A [1000]int
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &A[i])
	}

	A = mergesort(A, 0, n-1)

	for i := 0; i < n; i++ {
		fmt.Printf("%d ", A[i])
	}
	// return arr
}
