#include <stdio.h>

/* Widzieliśmy, że pętle przestają się wykonywać, gdy odpowiedni warunek
   przestaje być prawdziwy, jednak w tej sytuacji, zawsze wykonanywana jest
   całkowita liczba obiegów pętli.

   Co jednak, jeśli chcemy by pętla została przerwana w połowie swojego ciała?
   W takiej sytuacji należy użyć instrukcji break. */

int main() {
  int count = 0;

  for (int i = 0; i < 10; i++) {
    printf("Rozpoczynamy ciało pętli for.\n");

    if (i == 5) {
      printf("break\n");
      break;
    }

    printf("i == %d.\n", i);
  }

  printf("Kod po zakończeniu pętli for.\n");



  printf("\nPętla while.\n");

  while (count < 10) {
    printf("Rozpoczynamy ciało pętli while.\n");

    if (count == 3) {
      printf("break\n");
      break;
    }

    printf("count == %d.\n", count);


    count++;
  }

  printf("Kod po zakończeniu pętli while.\n");





  return 0;
}
