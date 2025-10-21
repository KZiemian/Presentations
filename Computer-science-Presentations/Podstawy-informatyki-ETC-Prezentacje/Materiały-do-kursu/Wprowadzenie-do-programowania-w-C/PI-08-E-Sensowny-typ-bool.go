package main

import "fmt"

func main() {
	// W przeciwieństwie do C, język Go dysponuje już w pełni
	// funkcjonalnym typem boolowskim.
	var boolVar1 bool = false

	fmt.Printf("boolVar1 == %v.\n", boolVar1)

	boolVar1 = true

	fmt.Printf("boolVar1 == %v.\n", boolVar1)

	// Język GO domyślnie NIE przekształca typu boolowskiego w int,
	// więc poniższy kod nie działa. I tak powinno być.

	// boolVar1 = 7 * true - 3 * false
	// fmt.Printf("7 * true - 3 * false == %v.\n", boolVar1)
}
