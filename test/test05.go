package main

import "fmt"

func main() {
	var a [12][6][7]int

	// b := a + i
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &a[0][4][3],&a[1][4][3],&a[2][4][3], &a[3][4][3],&a[4][4][3],&a[5][4][3], &a[6][4][3],&a[7][4][3],&a[8][4][3], &a[9][4][3],&a[10][4][3],&a[11][4][3] )
	// for i := 0; i < 12; i++ {
	// 	// a[i][4][3] = i
	// 	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a[i][4][3])
	// }

	for i := 0; i < 12; i++ {
		printf("%d\n", a[i][4][3])
	}

}
