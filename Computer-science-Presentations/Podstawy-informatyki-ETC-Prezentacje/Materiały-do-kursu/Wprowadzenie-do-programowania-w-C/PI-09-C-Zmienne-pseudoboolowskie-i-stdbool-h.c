#include <stdio.h>

/* Czy Państwo już mniej więcej rozumieją czym są typy zmiennych, czy należy
 * to jeszcze raz omówić? */

/* W pewnym momencie do języka C wprowadzono pewną protezę typu boolowskiego,
 * która jest trochę bardziej funkcjonalna, niż liczby całkowite. By z niej
 * korzystać musimy dołączyć do naszego pliku linię
 * #include <stdbool.h>
 * Nie chcemy się zbytnio zagłębiać w to co ona oznacza, powiemy o tym
 * w przyszłości. */

#include <stdbool.h>

int main() {
  bool boolVar1 = false;
  bool boolVar2 = true;

  printf("Ilustracja działania zmiennych pseudoboolowskich typu bool.\n");
  printf("boolVar1 == %d.\n", boolVar1);
  printf("boolVar2 == %d.\n", boolVar2);





  return 0;
}

/* Dlaczego C nie ma prawdziwego typu boolowskiego, tylko korzysta z 0 i 1?
 * Wynika to z tego, że C został stworzony dawno temu, lata 70-te XX wieku,
 * gdy oczekiwania wobec języków programowania były inne niż dzisiaj.
 * Skutkiem tego, nie uważano, iż dodatnie typu boolowskiego było potrzebne,
 * skoro wysztkie te operacje można załatwić za pomocą liczb całkowitych.
 * Może w latach 70-tych to miało sens, jednak dziś takie postępowanie
 * byłoby nie do przyjęcia. */
