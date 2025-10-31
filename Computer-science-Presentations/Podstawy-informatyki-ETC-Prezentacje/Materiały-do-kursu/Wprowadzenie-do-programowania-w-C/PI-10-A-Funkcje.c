#include <stdio.h>
/* Funkcje w języku C możemy rozumieć na dwa sposoby.
 * 1) Coś co pobiera argumenty i zwraca pewną wartość.
 * 2) Fragment kodu przeznaczony do wielokrotnego używania.
 *
 * Funkcje występując w wielu językach programowania i są niewiarygodnie
 * użyteczne. Należy też dodać, że funkcje w różnych językach różnią się
 * między sobą, tym jak działają i na co nam pozwalają. Naturę funkcji
 * z języka C postaramy się wyjaśnić na przykładach. */

/* Najpierw zdefiniujmy własną funkcję, która przedstawia funkcję liniową
 * znaną z matematyki. */

double linearFunction(double x) {
  return 2.0 * x + 1.0;
}





int main() {
  /* Od razu przećwiczymy użycie pętli while. Dlaczego while, a nie for?
   * Powiemy sobie o tym w swoim czasie. */

  double x = 0.0;

  while (x <= 10.0) {
    printf("linearFunction(%.2f) = %.3f.\n", x, linearFunction(x));

    x += 1.0;
  }

  /* Wszystko działa jak powinno. Ten przykład może być początkowo trudny
   * do zrozumienia, więc omówimy go teraz bardziej szczegółowo. */





  return 0;
}
