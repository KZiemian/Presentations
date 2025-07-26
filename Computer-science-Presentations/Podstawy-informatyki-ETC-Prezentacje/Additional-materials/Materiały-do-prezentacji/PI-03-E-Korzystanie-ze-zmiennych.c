#include <stdio.h>

int main() {
  /* Przykład korzystania ze zmiennych w C. W dużej mierze, korzystamy
   z nich tak, jak korzystamy z nich na papierze. */
  int intVar1 = 0;
  int intVar2 = 1;

  printf("intVar1 = %d.\n", intVar1);
  printf("intVar2 = %d.\n", intVar2);

  intVar1 = 3;
  intVar2 = 5;

  printf("intVar1 = %d.\n", intVar1);
  printf("intVar2 = %d.\n", intVar2);

  intVar1 = intVar2;

  printf("intVar1 = %d.\n", intVar1);
  printf("intVar2 = %d.\n", intVar2);

  intVar1 = -1;
  intVar2 = -3;

  printf("intVar1 = %d.\n", intVar1);
  printf("intVar2 = %d.\n", intVar2);





  return 0;
}
