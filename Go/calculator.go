package main

import "fmt"

func main() {
	var cho string
	var a, b int
	fmt.Println("Enter the first number : ")
	fmt.Scanln(&a)
	fmt.Println("Enter the second number:  ")
	fmt.Scanln(&b)
	fmt.Scanln("Enter the operation You need (+,*,-,/")
	fmt.Scanln(&cho)
	output := 0
	switch cho {
	case "+":
		output = a + b
		break
	case "*":
		output = a * b
		break
	case "-":
		output = a - b
		break
	case "/":
		output = a / b
		break
	default:
		fmt.Println("Invalid Operation")
	}
	fmt.Println(output)
}
