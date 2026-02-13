#include <stdio.h>

int main() {
  int intVar1 = 3;
  int intVar2 = 5;
  /* W tym programie, by zilustrować działanie języka C, potrzebujemy dwóch
   * zmiennych typu int. Dlatego nazywamy je
   * intVar1 -- integer variable number 1,
   * intVar2 -- integer variable number 2. */

  /* Zmiennych używa się do obliczeń (prawie) tak samo jak na kartce
   * papieru. */

  printf("Cztery działania arytmetyczne na zmiennych typu int.\n");
  printf("%d + %d == %d.\n", intVar1, intVar2, intVar1 + intVar2);
  printf("%d - %d == %d.\n", intVar1, intVar2, intVar1 - intVar2);
  printf("%d * %d == %d.\n", intVar1, intVar2, intVar1 * intVar2);
  printf("%d / %d == %d.\n\n", intVar1, intVar2, intVar1 / intVar2);

  printf("%d / %d == %d. Bo czemu życie miałoby być proste?\n\n",
	 intVar1, intVar2, intVar1 / intVar2);

  printf("Operatora modulo %% można używać bezpośrednio z liczbami "
	 "typu int, jak i ze zmiennymi typu int.\n");
  printf("%d %% %d == %d.\n", intVar2, intVar1, intVar2 % intVar1);





  return 0;
}
