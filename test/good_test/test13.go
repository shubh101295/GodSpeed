package main

import "fmt"

func main() {

	for j:=0;j<=50;j++{
	   if(j>=20){
			for i:=0;i<7;i++ {
				if(i==5){
					break;
				}
			}
		} else if (j <= 15){
			j += 3
		} else {
			continue
		}
	}
	
}

