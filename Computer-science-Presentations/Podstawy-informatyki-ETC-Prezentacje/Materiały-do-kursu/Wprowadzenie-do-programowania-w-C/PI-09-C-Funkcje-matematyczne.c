#include <stdio.h>
/* Czasem zachodzi potrzeba obliczenia wartości pewnych funkcji
 * matematycznych. To słaba motywacja, ale mimo wszystko zapoznamy się
 * z tym, jak można to zrobić w języku C.
 *
 * Najpierw musimy dołączyć do programu poniższą linię, która sprawi,
 * że zostaną nam udostępnione pewne funkcje, zawarte w bibliotece
 * matematycznej. O funkcjach w języku C powiemy sobie więcej niedługo. */
#include <math.h>

/* Będziemy musieli zmienić „zaklęcie”, którym kompilujemy nasz program na:
 *
 * time gcc -ansi --std=c99 -pedantic PI-08-C-Funkcje-matematyczne.c -lm
 * -o prog.out
 *
 * Tak jak poprzednio to zaklęcie należy wpisać w POJEDYNCZYM wierszu
 * powłoki. */



int main() {
  /* Używamy tu symbolu x, bo to tradycyjne oznaczenie matematyczne dla
   * takich zmiennych. */
  double x = 0.0;

  while (x <= 3.14) {
    /* Ten kod jest mam nadzieję wystarczająco jasny. Jeśli nie to proszę
     * pytać. */
    printf("sin(%.1f) = %.3f.\n", x, sin(x));

    x += 0.1;
  }





  return 0;
}
