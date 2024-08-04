package main

import "fmt"

func menu(){
	fmt.Println("+-----------------------+")
	fmt.Println("|        Commands       |")
	fmt.Println("+-----------------------+")
	
	for key, _ := range CommandMap {
		fmt.Printf("\t%v\n", key)
	}
	fmt.Println("+-----------------------+")
}

