#include <stdio.h>

/* Wypisywanie zawartości funkcji na ekranie bezpośrednio za pomocą funkcji
 * printf() w C jest dość żmudne, dlatego warto napisać funkcję, która
 * robi to za nas. */

void showArrayInt(int arrayInt[], int length) {
  printf("{%d, ", arrayInt[0]);

  for (int i = 1; i < length - 1; i++) {
    printf("%d, ", arrayInt[i]);
  }

  printf("%d}.\n", arrayInt[length - 1]);
}

int main() {
  int arrayInt1[3] = {1, 2, 3};
  int arrayInt2[3] = {-10, -5, -1};
  int arrayInt3[5] = {1, 2, 3, 4, 5};

  printf("Tablica arrayInt1: ");
  showArrayInt(arrayInt1, 3);
  printf("Tablica arrayInt2: ");
  showArrayInt(arrayInt2, 3);
  printf("Tablica arrayInt3: ");
  showArrayInt(arrayInt3, 5);

  /* Funkcje takie jak showArrayInt() są bardzo użyteczne, gdy pracujemy
   * z tablicami liczb całkowitych, jednak ciągłe przeklejanie ich do plików
   * jest żmudne i niewygodne. Dlatego też uprościmy swobie trochę życie
   * umieszczając naszą funkcję w pliku nagłówkowym o nazwie
   * „PI-16-C-showArrayInt.h”. */




  return 0;
}
