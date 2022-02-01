package main

func BinarySearch(x int, arr []int, len int)bool{
	var l int = 0
	var r int = len

	for l <= r {
		m := l + (r-l)/2

		if ( arr[m]==x ){
			return true
		} else if ( arr[m]<x ){
			l = m+1;
		} else {
			r = m - 1
		}
	}
	return false
}

func main(){
	
}