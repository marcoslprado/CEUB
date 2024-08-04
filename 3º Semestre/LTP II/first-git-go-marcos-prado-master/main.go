package main

import (
	"fmt"
	"os"
	"strings"
	"bufio"
)
func main(){
	
	menu()
	reader := bufio.NewReader(os.Stdin)
	fmt.Print("Insert a git command of the list: ")
	input, _ := reader.ReadString('\n')
	input = strings.TrimSpace(input)
	command, ok := CommandMap[Name(input)]
	if !ok {
		fmt.Printf("\nREPROVADO! SR-!!!!! VOCÊ REALMENTE ACHA QUE %v EXISTE? PODE TRANCAR!!!!!!\n", input)
		return
	}
	
	
	fmt.Printf("\n%+v\n\n", command.description)
	
	
}

