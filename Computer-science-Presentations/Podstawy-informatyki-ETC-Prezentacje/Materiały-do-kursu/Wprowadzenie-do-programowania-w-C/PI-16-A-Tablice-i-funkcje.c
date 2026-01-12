#include <stdio.h>

/* Bezpośrednia praca na tablica potrafi być niezwykle żmudna, dlatego
 * potrzebujemy teraz nauczyć się, jak pisać funkcje, które pobierając
 * tablice jako swój argument. Zaczniemy od napisania funkcji, która
 * sumuje wszystkie elementy tablicy liczb całkowitych. */

int sumArrayInt(int arrayInt[], int length) {
  int sum = 0;

  for (int i = 0; i < length; i++) {
    sum += arrayInt[i];
  }

  return sum;
}

/* Przyjżyjmy się sygnaturze tej funkcji
 * int sumArrayInt(int arrayInt[], int length)
 * Jak w każdej funkcji na początku jest typ elementu zwracanego,
 * nastepnie nazwa funkcji, potem argumenty jakie przyjmuje w nawiasach
 * okrągłych. Musimy tutaj zwrócić uwagę na to, jak informujemy język C,
 * że dany parametr jest tablicą
 * int arrayInt[]
 * Kluczowe są nawiasy kwadratowe „[]” po nazwie zmiennej, bo to one
 * przekazują informację, że to nie jest zmienna typu całkowitego, lecz
 * tablica liczb całkowitych. Nawiasy te są PUSTE. Wynika to z tego o czym
 * już mówiliśmy, że w C nie ma prostego sposobu, by znaleźć długość danej
 * tablicy. Gdy więc funkcja otrzymuje jako swój argument tablicę, to wie
 * tylko, że jest to tablica, nie potrafi z wyciągnąć z tego argumentu
 * informacji o jego długości.
 *
 * Powtórzmy to jeszcze raz. Parametr
 * int arrayInt[]
 * przekazuje językowi C informację, że to jest tablica i nic więcej.
 * Nie przekazuje i w zasadzie nie może, przekazać informacji o długości
 * tej tablicy. Stąd pusty nawias kwadratowy „[]”.
 *
 * Jak już się pewnie Państwo domyślili, drugi argument int length, służy
 * właśnie przekazaniu do funkcji informacji o długości tej tablicy.
 */

int main() {
  int arrayInt1[3] = {1, 2, 3};
  int arrayInt2[3] = {-10, -5, -1};
  int arrayInt3[5] = {1, 2, 3, 4, 5};


  printf("Zawartość tablicy arrayInt1: {%d, %d, %d}.\n", arrayInt1[0],
	 arrayInt1[1], arrayInt1[2]);
  printf("Suma elementów tablicy arrayInt1: %d.\n",
	 sumArrayInt(arrayInt1, 3));
  printf("Instrukcja wywołania funkcji ma postać: "
	 "sumArrayInt(arrayInt1, 3).\n\n");

  /* Przyjżyjmy się instrukcji wywołania naszej funkcji.
   * sumArrayInt(arrayInt1, 3)
   * Piszemy tu „arrayInt1”, gdyż to jest nazwa CAŁEJ tablicy. Nie możemy
   * napisać arrayInt1[0], bo to byłby tylko pierwszy element tej tablicy.
   * Język C przyjął też, że w tym miejscu nie można napisać arrayInt1[],
   * pewnie dlatego, żeby mniej pisać. Czy to dobry wybór, pozostawiamy
   * do oceny Państwu. */

  printf("Zawartość tablicy arrayInt2: {%d, %d, %d}.\n", arrayInt2[0],
	 arrayInt2[1], arrayInt2[2]);
  printf("Suma elementów tablicy arrayInt1: %d.\n",
	 sumArrayInt(arrayInt2, 3));
  printf("Instrukcja wywołania funkcji ma postać: "
	 "sumArrayInt(arrayInt2, 3).\n\n");



  printf("Zawartość tablicy arrayInt3: {%d, %d, %d, %d, %d}.\n", arrayInt3[0],
	 arrayInt3[1], arrayInt3[2], arrayInt3[3], arrayInt3[4]);
  printf("Suma elementów tablicy arrayInt1: %d.\n",
	 sumArrayInt(arrayInt3, 5));
  printf("Instrukcja wywołania funkcji ma postać: "
	 "sumArrayInt(arrayInt3, 5).\n");





  return 0;
}
