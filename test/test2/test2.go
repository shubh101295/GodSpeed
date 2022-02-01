package main

import (
	"crypto/sha256"
	"strconv"
	"fmt"
	"bytes"
)

func main(){
	var a string = "abc"

	var nonce = 0

	var b string
	b = a + strconv.Itoa(nonce)

	var hash  [32]byte
	for i:=0; i<32; i++ {
		hash[i] = 255
	}

	var target [32]byte

	for i:=1; i<32; i++ {
		target[i] = 255
	}

	for ( bytes.Compare(target,hash) == 1) {
		b = a + strconv.Itoa(nonce)
		hash:= sha256.Sum256([]byte(b))
		nonce += 1
	}

	fmt.Println("Target Hash: ", target)
	fmt.Println("calculated Hash: ", hash)
	fmt.Println("Nonce Value: ", nonce)

}