#include <stdio.h>

#include "PI-16-C-showArrayInt.h"

/* Pewnie już mają Państwo serdecznie dość serialu „Bo czemu życie miałoby
 * być proste?”. Niestety, dziś jeszcze jeden jego odcinek. */

/* Poniżej mamy dwie funkcje, pierwsza operuje na zmiennej typu int,
 * druga na tablicy liczb typu int (i jej długości). Ten przykład na ma celu
 * zilustrować, że w języku C funkcja NIE może zmienić przesłanej jej
 * wartości całkowitej, ale MOŻE zmienić przesłaną jej tablicę. Bo czemu
 * życie miałoby być proste? Dlaczego tak jest, wyjaśnimy trochę później. */

int functionOnInt(int intVar1) {
  intVar1 = 10;

  return intVar1;
}

void functionOnArrayInt(int arrayInt[], int length) {
  for (int i = 0; i < length; i++) {
    arrayInt[i] += 10;
  }
}



int main() {
  int intVar1 = 0;
  int functionResult = 0;
  int arrayInt1[5] = {1, 2, 3, 4, 5};

  printf("Wartość zmiennej intVar1 przed wywołaniem funkcji "
	 "functionOnInt(): %d.\n", intVar1);

  printf("Instrukcja: functiOnResult = functionOnInt(intVar1);\n");
  functionResult = functionOnInt(intVar1);

  printf("Rezultat zwrócony przez funkcję: %d.\n", functionResult);
  printf("Wartość zmiennej intVar1 po wywołaniu funkcji "
	 "functionOnArray(): %d.\n\n", intVar1);

  printf("Tablica arrayInt1 przed wywołaniem funkcji functionOnArrayInt(): ");
  showArrayInt(arrayInt1, 5);
  printf("Instrukcja: functionOnArrayInt(arrayInt1, 5);\n");
  functionOnArrayInt(arrayInt1, 5);
  printf("Tablica arrayInt1 po wywołaniu funkcji functionOnArrayInt(): ");
  showArrayInt(arrayInt1, 5);





  return 0;
}
