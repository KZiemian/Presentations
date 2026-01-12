#include <stdio.h>

/* Jeden sposób, żeby jakoś obejść problem długości tablicy, można użyć
 * dyrektywy preprocessora #define. Trzeba jednak pamiętać, że preprocesor
 * jest trudny w użyciu i łatwo za jego pomocą stworzyć naprawdę zły kod. */

#define ARRAY_INT_1_LENGTH 5

/* UWAGA. Muszę dopisać materiały o preprocesorze. Na razie proszę przyjąć
 * to co tu piszę na wiarę. */
/* Konwencja mówi, że nazwy makr preprocesora, takich jak ta powyżej, należy
 * pisać z użyciem tylko dużych liter, cyfr i symbolu podkreślenia. Proszę
 * też pamiętać, że na końcu makra prawie nigdy NIE ma stać średnik.
 * Inaczej wywoła to problem z kompilacją programu. */

int main() {
  /* Ten kod działa. */
  int arrayInt1[ARRAY_INT_1_LENGTH] = {1, 2, 3, 4, 5};

  for (int i = 0; i < ARRAY_INT_1_LENGTH; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }





  return 0;
}
