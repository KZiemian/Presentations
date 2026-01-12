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
