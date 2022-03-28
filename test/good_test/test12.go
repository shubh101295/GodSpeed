package main

import "fmt"

func main() {

	for j:=0;j<=50;j++{
	   if(j>=20){
			for i:=0;i<7;i++ {
				i+=1
				if(i==5){
					i = 0
					break;
				}
			}
		} else if (j <= 15){
			j += 3
		}
	}
	
}

