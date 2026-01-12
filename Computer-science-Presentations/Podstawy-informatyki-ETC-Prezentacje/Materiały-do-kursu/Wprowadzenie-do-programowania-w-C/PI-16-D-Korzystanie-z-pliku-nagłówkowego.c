#include <stdio.h>

/* Po pierwsze, musimy się upewnić, że plik PI-16-C-showArrayInt.h jest
 * w tym samym katalogu, co ten plik. Wówczas poniższa dyrektywa preprocesora
 * wstawi do tego pliku zawartość pliku PI-16-C-showArrayInt.h. */
#include "PI-16-C-showArrayInt.h"

int main() {
  int arrayInt1[3] = {1, 2, 3};
  int arrayInt2[3] = {-10, -5, -1};
  int arrayInt3[5] = {1, 2, 3, 4, 5};

  printf("Funkcję showArrayInt() dostarsza nam plik nagłówkowy "
	 "PI-16-C-showArrayInt.\n");

  printf("Tablica arrayInt1: ");
  showArrayInt(arrayInt1, 3);
  printf("Tablica arrayInt2: ");
  showArrayInt(arrayInt2, 3);
  printf("Tablica arrayInt3: ");
  showArrayInt(arrayInt3, 5);





  return 0;
}
