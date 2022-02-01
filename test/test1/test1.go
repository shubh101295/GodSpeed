package main

import (
	"fmt"
)

type Input struct {
	TransactionId string
	Index         int
	Signature     string
}

type Output struct {
	Recipient string
	Amount    int
}

type Transaction struct {
	Id      string
	Inputs  [1]Input
	Outputs [1]Output
}


func main()  {
	var in Input
	in.TransactionId = "13457"
	in.Index = 0
	in.Signature = "abcd"

	var out Output
	out.Recipient = "XYZ"
	out.Amount = 1000

	var txn Transaction
	txn.Id = "68102"
	txn.Inputs[0] = in
	txn.Outputs[0] = out

	fmt.Println("Transaction ID: ",txn.Id)
	fmt.Println("InputID: ",txn.Inputs[0].TransactionId)
	fmt.Println("Recipient: ",txn.Outputs[0].Recipient)
}
