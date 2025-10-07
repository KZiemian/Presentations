#include <stdio.h>

/* Z break blisko spokrewniona jest instrukcja continue. Zamiast kończyć
   całą pętlę, kończy wykonywanie jej obecnego ciała i przechodzi
   do testowania warunku pętli i jej kolejnych obiegów. */

int main() {
  int count = 0;

  for (int i = 0; i < 5; i++) {
    printf("i == %d.\n", i);

    if (i % 2 == 0) {
      continue;
    }

    printf("Jest to liczba nieparzysta.\n");
  }

  printf("Kod po zakończeniu pętli for.\n");



  printf("\nPętla while.\n");

  while (count < 6) {
    printf("count == %d.\n", count);

    if (count % 2 == 0) {
      count++;

      continue;
    }

    printf("Jest to liczba nieparzysta.\n");

    count++;
  }

  printf("Kod po zakończeniu pętli while.\n");





  return 0;
}
