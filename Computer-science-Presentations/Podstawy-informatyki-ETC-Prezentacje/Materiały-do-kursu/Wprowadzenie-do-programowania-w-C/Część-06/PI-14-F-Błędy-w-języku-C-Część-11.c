#include <stdio.h>

/* Zaczniemy od przypomnienia czym się różni orzeczenie (ang. statement)
 * od wyrażenie (ang. expression). Orzeczenie coś robi, a wyrażenie coś robi
 * i coś zwraca. */

int main() {
  int liczbaCalkowita1 = 1;
  int liczbaCalkowita2 = 2;

  printf("liczbaCalkowita1 == %d.\n\n", liczbaCalkowita1);

  liczbaCalkowita1 = liczbaCalkowita2 = 7;
  /* Ta linia jest poprawna, bo
   * liczbaCalkowita2 = 7;
   * jest wyrażeniem, czyli coś zwraca. Co zwraca? Liczbę 7 lub inną
   * wartość, którą nadajemy zmiennej. Wobec tego, możemy ten kod przepisać
   * jako
   * liczbaCalkowita2 = 7;
   * liczbaCalkowita1 = liczbaCalkowita2; */
  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("liczbaCalkowita2 == %d.\n\n", liczbaCalkowita2);

  /* To jednak prowadzi, do częstego błędu w języku C. Powiedzmy, że chcemy
   * sprawdzić, czy zmienna liczbaCalkowita1 zawiera liczbę 5 i zamiast
   * liczbaCalkowita1 == 5
   * napiszemy
   * liczbaCalkowita1 = 5
   * I wszystko się wali. */

  printf("Przed instrukcja if.\n");
  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);

  if (liczbaCalkowita1 = 5) {
    printf("liczbaCalkowita1 == %d, zawiera liczbę 5.\n", liczbaCalkowita1);
  } else {
    printf("liczbaCalkowita1 == %d, nie zawiera liczby 5.\n",
	   liczbaCalkowita1);
  }

  /* Dlaczego? Bo
   * liczbaCalkowita1 = 5
   * jest wyrażeniem, które zwraca liczbę 5. Wobec tego warunek
   * (liczbaCalkowita1 = 5)
   * jest równoważny warunkowi
   * (5)
   * Liczba 5 jest liczbą całkowitą różna od 0, więc dla języka C reprezentuje
   * ona prawdę, więc wykonywana jest pierwsza gałąź ifa. Bo czemu życie
   * miałoby być proste? */





  return 0;
}
