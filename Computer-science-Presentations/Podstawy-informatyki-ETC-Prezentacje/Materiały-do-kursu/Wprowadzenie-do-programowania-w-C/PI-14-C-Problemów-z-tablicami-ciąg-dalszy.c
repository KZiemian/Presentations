#include <stdio.h>

int main() {
  /* Można by próbować rozwiązać problem z przechowywaniem długości tablicy,
   * tworząc zmienną arrayInt1Length, którą będzie ją przechowywała. Nie jest
   * to zły pomysł, ale w języku C życie nie może być zbyt proste. */

  /* Ten PROGRAM nie zadziała. Zaraz wyjaśnimy dlaczego. */

  int arrayInt1Length = 5;
  int arrayInt1[arrayInt1Length] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  for (int i = 0; i < arrayInt1Length; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Ten program nie działa, z powodu linii
   * int arrayInt1[arrayInt1Length] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   * Używamy w niej zmiennej arrayInt1Length, aby zdefiniować długość
   * naszej tablicy. Ale język C przyjął zasadę, że rozmiar każdej tablicy
   * musi być dokładnie znany w czasie tworzenia programu i to tworzy
   * problem. Zmienna arrayInt1Length jest, jak sama nazwa wskazuje,
   * zmienną, może się zmieniać. Tym samy nie mamy gwarancji, że w momencie
   * tworzenia programu jest ona ona znana, więc język C zaprotestuje.
   *
   * Problem jest nawet głębszy, niż może się wydawać. Co prawda nigdzie
   * w tym programie nie zmieniamy wartości arrayInt1Length, ale nie można
   * wykluczyć, że jakiś inny program włączy się do działania, będzie
   * modyfikował wartość tej zmiennej, zanim zostanie utworzona tablica.
   * To jednak osobny temat. */





  return 0;
}
