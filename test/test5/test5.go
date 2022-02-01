package main

import (
	"fmt"
)

type Node struct{
	m   map[byte]*Node 
	end bool
}

func in(s string, trie Node, n int){
	var a Node = trie
	var flag bool 
	for i:=0;i<n;i++ {
		a.end = false
		_, flag = a.m[s[i]]

		if(!flag) {
			a.m[s[i]] = new(Node)
			a.m[s[i]].m = make(map[byte]*Node)
		}
		a= *a.m[s[i]]
	}

	a.end = true
}

func check(s string, trie Node, n int) bool {
	var a Node = trie
	var flag bool

	for i:=0;i<n;i++ {
		_, flag = a.m[s[i]]
		if(!flag) {
			return false
		}
		a= *a.m[s[i]]
	}

	return true
}

func main(){
	var trie Node
	trie.m = make(map[byte]*Node)
	var s string
	var m int

	fmt.Scanln(&m)

	for i:=0;i<m;i++{
		fmt.Scanln(&s)
		in(s,trie,len(s))
	}

	fmt.Scanln(&s)
	b := check(s,trie,len(s))

	fmt.Println(b)

}
