#include <stdio.h>

/* Czy Państwo już mniej wiecej rozumieją czym są typy zmiennych, czy należy
 * to jeszcze raz omówić? */

/* W pewnym momencie do języka C wprowadzono pewną protezę typu boolowskiego,
 * która jest trochę bardziej funkcjonalna w tym kontekście, niż liczby
 * całkowite. By z niej korzystać musimy dołączyć do naszego pliku linię
 * #include <stdbool.h>
 * Nie chcemy się zbytnio zagłębiać w to co ona oznacza, powiemy o tym
 * w przyszłości. */
#include <stdbool.h>

int main() {
  bool boolVar1 = false;
  bool boolVar2 = true;

  printf("boolVar1 == %d.\n", boolVar1);
  printf("boolVar2 == %d.\n\n", boolVar2);

  printf("true && true == %d.\n", true && true);
  printf("true && false == %d.\n", true && false);
  printf("false && true == %d.\n", false && true);
  printf("false && false == %d.\n", false && false);





  return 0;
}
