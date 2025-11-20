#include <stdio.h>

int main() {
  int intVar1 = 3;
  int intVar2 = 5;

  /* Zmiennych używa się do obliczeń (prawie) tak samo jak na kartce
   * papieru. */

  printf("Cztery działania arytmetyczne na zmiennych typu int.\n");
  printf("%d + %d == %d.\n", intVar1, intVar2, intVar1 + intVar2);
  printf("%d - %d == %d.\n", intVar1, intVar2, intVar1 - intVar2);
  printf("%d * %d == %d.\n", intVar1, intVar2, intVar1 * intVar2);
  printf("%d / %d == %d.\n\n", intVar1, intVar2, intVar1 / intVar2);

  printf("3 / 5 == 0. Bo czemu życie miałoby być proste?\n\n");

  printf("Operatora modulo %% również można używać ze zmiennymi typu int.\n");
  printf("%d %% %d == %d.\n", intVar2, intVar1, intVar2 % intVar1);





  return 0;
}
