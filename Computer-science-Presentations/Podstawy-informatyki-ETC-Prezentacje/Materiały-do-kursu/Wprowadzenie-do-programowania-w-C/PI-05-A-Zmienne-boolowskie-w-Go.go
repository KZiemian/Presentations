package main

import "fmt"

func main() {
	var boolVar1 bool = true

	fmt.Printf("boolVar1 == %v.\n", boolVar1)

	boolVar1 = false

	fmt.Printf("boolVar1 == %v.\n", boolVar1)

	// Ten kod sprawi, że Go zwariuje.
	// boolVar1 = 7 * true + 3 * false
	// boolVar1 = 7 * (1 < 2) + 3 * (1 < 0)

	// fmt.Printf("boolVar1 == %v.\n", boolVar1)
}
