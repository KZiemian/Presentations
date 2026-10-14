#include <stdio.h>

int main() {
  int intVar1 = 0;

  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);

  if ((intVar1 < 3) && (-5 < intVar1)) {
    printf("Wartość zmiennej intVar1 zawiera się "
	   "w pożądanych zakresie.\n");
  } else {
    printf("Wartość zmiennej intVar1 znajduje się poza "
	   "pożądany zakres.\n");
  }





  return 0;
}
