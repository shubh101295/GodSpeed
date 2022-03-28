package main

import "fmt"

func main() {

	i:=0
	j:=0
	
	goto A

	// A: i++

	for j<=50 {
       j+=1
	   if(j>=20){
			for 1 {
				i+=1
				if(i==5){
					i = 0
				}
			}
		} else if (j <= 15){
			j += 3
		} else {
			continue
		}
		i -= 1;
	}

}

