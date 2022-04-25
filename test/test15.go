package main

import "fmt"

func fib(n int) int {
	if n == 1 || n == 2 {
		return 1
	}

	return fib(n-1) + fib(n-2)

}
func main() {
	n := 5
	b := &n
	scanf("%d",b)
	printf("%d-th fibonacci number: %d\n", n, fib(n))
}
