#include <stdio.h>

/* Funkcje w języku C możemy rozumieć na dwa sposoby.
 * 1) Coś co pobiera argumenty i zwraca pewną wartość.
 * 2) Fragment kodu przeznaczony do wielokrotnego używania.
 *
 * Funkcje występując w wielu językach programowania i są niewiarygodnie
 * użyteczne. Należy też dodać, że funkcje w różnych językach różnią się
 * między sobą, tym jak działają i na co nam pozwalają. Naturę funkcji
 * z języka C postaramy się wyjaśnić na przykładach.
 *
 * Do tej pory poznaliśmy co najmniej dwie funkcje: printf() i sleep().
 * Jednak na początek omówimy prostsze przykłady, bo funkcje te są
 * dość skomplikowane. */

/* Najpierw zdefiniujmy własną funkcję, która jest szalenie prosta:
 * pobiera jedną liczbę i zwraca tą liczbę plus 3. Ta funkcja jest
 * w zasadzie bezużyteczna, ale tak prosta, że można spędzic nad nią
 * chwilę czasu.
 *
 * Również kod tej funkcji nie jest dobry, ale mamy nadzieję, że nadrabia
 * czytelnością. */

int dodajTrzy(int x) {
  int wynik = 0;

  wynik = x + 3;

  return wynik;
}





int main() {

  /* Od razu przećwiczymy użycie pętli for. */

  for (int i = 0; i < 10; i++) {
    printf("dodajTrzy(%d) == %d.\n", i, dodajTrzy(i));
  }

  /* Wszystko działa jak powinno. Ten przykład może być początkowo trudny
   * do zrozumienia, więc omówimy go teraz bardziej szczegółowo. */





  return 0;
}
