#include <stdio.h>

/* Czasem zachodzi potrzeba obliczenia wartośći pewnych funkcji
   matematycznych. To słaba motywacja, ale mimo wszystko zapoznamy się
   z tym, jak można to zrobić w języku C. */

/* Najpierw musimy dołączyć tą linię, która sprawi, że zostaną nam
   udostępnione pewne funkcje, zawarte w bibliotece matematycznej. */
#include <math.h>

/* Do tego będziemy musieli zmienić „zaklęcie”, którym kompilujemy nasz
   program na:

   time gcc -ansi --std=c99 -pedantic PI-08-C-Funkcje-matematyczne.c -lm
   -o prog.out

   Tak jak poprzednio to zaklęcie należy wpisać w pojedynczej linii
   powłoki. */



int main() {
  double x = 0.0;

  while (x <= 3.14) {
    printf("sin(%.1f) = %.3f.\n", x, sin(x));

    x += 0.1;
  }





  return 0;
}
