#include <stdio.h>

/* W starszych wersja języka C nie było możliwe tworzenie zmiennych
 * wewnętrznych pętli for, więc zmienną taką trzeba było definiować
 * jak każdą inną. Poniższy program demonstruje jak to wyglądało. */

int main() {
  int i = 0;

  printf("i == %d.\n", i);

  i = 7;

  printf("i == %d.\n", i);

  /* Tutaj nie TWORZYMY zmienne i. Instrukcja
   * i = 0;
   * tylko nadaje jej wartość 0. Proszę pamiętać, że aby utworzyć zmienną
   * w języku C, trzeba poprzedzić nazwę tej zmiennej nazwą jej typu. */
  for (i = 0; i < 5; i++) {
    printf("Hello, World! %d time.\n", i);
  }





  return 0;
}
