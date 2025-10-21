#include <stdio.h>
/* Zaczniemy od przypomnienia czym się różni orzeczenie (ang. statement)
 * od wyrażenie (ang. expression). Orzeczenie coś robi, a wyrażenie coś robi
 * i coś zwraca. */

int main() {
  int intVar1 = 0;
  int intVar2 = 1;

  printf("intVar1 == %d.\n\n", intVar1);

  intVar1 = intVar2 = 7;
  /* Ta linia jest poprawna, bo
   * intVar2 = 7;
   * jest wyrażeniem, czyli coś zwraca. Co zwraca? Liczbę 7 lub inną
   * wartość, którą nadajemy zmiennej. Wobec tego, możemy ten kod przepisać
   * jako
   * intVar2 = 7;
   * intVar1 = intVar2; */
  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  /* To jednak prowadzi, do częstego błędu w języku C. Powiedzmy, że chcemy
   * sprawdzić, czy zmienna intVar1 zawiera liczbę 5 i zamiast
   * intVar1 == 5
   * napiszemy
   * intVar1 = 5
   * I wszystko się wali. */

  printf("Przed instrukcja if.\n");
  printf("intVar1 == %d.\n", intVar1);

  if (intVar1 = 5) {
    printf("intVar1 == %d, zawiera liczbę 5.\n", intVar1);
  } else {
    printf("intVar1 == %d, nie zawiera liczby 5.\n", intVar1);
  }

  /* Dlaczego? Bo
   * intVar1 = 5
   * jest wyrażeniem, które zwraca liczbę 5. Wobec tego warunek
   * (intVar1 = 5)
   * jest równoważny warunkowi
   * (5)
   * Liczba 5 jest liczbą całkowitą różna od 0, więc dla języka C reprezentuje
   * ona prawdę, więc wykonywana jest pierwsza gałąź ifa. Bo czemu życie
   * miałoby być proste? */





  return 0;
}
