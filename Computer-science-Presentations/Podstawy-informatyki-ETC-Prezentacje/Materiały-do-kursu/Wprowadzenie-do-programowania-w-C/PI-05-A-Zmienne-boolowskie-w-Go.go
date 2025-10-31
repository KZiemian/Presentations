package main

import "fmt"

// Jeśli mamy zainstalowany program do uruchamiania kodu napisanego w Go,
// to plik ten możemy uruchomić z poziomu powłoki poleceniem
// go run PI-05-A-Zmienne-boolowskie-w-Go.go

func main() {
	// Tworzymy zmienną boolowską „boolVar1” i nadajemy jej
	// wartość „false”.
	var boolVar1 bool = true

	fmt.Printf("boolVar1 == %v.\n", boolVar1)

	// Zmieniamy
	boolVar1 = false

	fmt.Printf("boolVar1 == %v.\n", boolVar1)

	// Ten kod sprawi, że Go zwariuje.
	// boolVar1 = 7 * true + 3 * false
	// boolVar1 = 7 * (1 < 2) + 3 * (1 < 0)

	// fmt.Printf("boolVar1 == %v.\n", boolVar1)
}
