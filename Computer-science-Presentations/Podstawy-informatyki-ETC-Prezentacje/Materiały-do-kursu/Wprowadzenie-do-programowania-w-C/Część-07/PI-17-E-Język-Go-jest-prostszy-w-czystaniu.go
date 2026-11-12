package main

import "fmt"

// Jak państwo widzą w języku Go najpierw jest „func” od „function”,
// potem nazwa funkcji, potem w nawiasach nazwa argumentu, typ argumentu,
// następnie zaś typ zwracany przez funkcję.
func dodajTrzy(x int) int {
  return x + 3
}

func main() {
	// Definiowanie zmiennych w Go również jest prostsze w czytaniu.
	// Najpierw „var” od „variable”, potem nazwa zmiennej, potem jej
	// typ, a na końcu wartość.
	var liczbaCalkowita int = 10;

	// Nie mamy jednak czasu, by mówić o języku Go i jego własnościach.

	// Nazwa „Printf” pochodzi wprost z C. To pokazuje też wpływ C
	// na informatykę.
	fmt.Printf("liczbaCalkowita == %v.\n", liczbaCalkowita)
	fmt.Printf("dodajTrzy(%v) == %v.\n", 0, dodajTrzy(0))
}
