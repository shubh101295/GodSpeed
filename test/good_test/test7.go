package main
import "fmt"

func area(length, width int)int{
	
	Ar := length* width
	return Ar
}

// Main function
func main() {
	var a,b int
	a= 1
	b= 2
	// continue
	// break
	for i := 0; i < 4; i++{
		a+=1
		b+=1
		if a==1{
			break
		} else {
			continue
		}
	// statements
	}
	// area(1,2)
	// fmt.Printf("Area of rectangle is : %d", area(12, 10))
}
