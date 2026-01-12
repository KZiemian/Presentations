#include <stdio.h>

int main() {
  int arrayInt1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  /* Ponieważ tablica w C ma ustaloną długość, więc w natrualny sposób
   * łączy się ona z pętlą for.
   *
   * Niestety, bo czemu życie miałoby być proste, długość tablicy w języku
   * C to złożona sprawa, do której wrócimy po omówieniu podstaw. */

  printf("Przeglądanie zawartości tablicy za pomocą pętli for.\n");

  for (int i = 0; i < 10; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  printf("\n\nZmiana zawartości tablicy za pomocą pętli for.\n");

  for (int i = 0; i < 10; i++) {
    arrayInt1[i] = i * i;
  }

  printf("\nZawartość tablicy, po wykonaniu pętli for, modyfikującej "
	 "jej elementy.\n");

  for (int i = 0; i < 10; i++) {
    printf("arrayInt1[%i] == %d.\n", i, arrayInt1[i]);
  }





  return 0;
}
