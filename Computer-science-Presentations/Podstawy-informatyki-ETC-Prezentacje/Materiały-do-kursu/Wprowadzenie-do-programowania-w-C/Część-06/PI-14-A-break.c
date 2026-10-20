#include <stdio.h>

/* Widzieliśmy, że pętle w C przestają się wykonywać, gdy odpowiedni warunek
 * przestaje być prawdziwy. Jednak w takiej sytuacji, zawsze wykonanywana jest
 * całkowita liczba obiegów ciała pętli.
 *
 * Co jednak, jeśli chcemy by pętla została przerwana w połowie swojego ciała?
 * W takiej sytuacji należy użyć instrukcji break. */

int main() {
  int count = 0;

  for (int i = 0; i < 10; i++) {
    printf("Rozpoczynamy ciało pętli for.\n");

    if (i == 5) {
      printf("break\n");

      /* Po napotkaniu instrukcji break, wykonywanie pętli zostanie
       * natychmiast przerwane i program przejdzie do wykonywania kodu
       * poniżej niej. */
      break;
    }

    printf("i == %d.\n", i);
  }

  printf("Kod po zakończeniu pętli for.\n\n");



  printf("Pętla while.\n");

  while (count < 10) {
    printf("Rozpoczynamy ciało pętli while.\n");

    if (count == 3) {
      printf("break\n");

      /* Instrukcja break działa tak samo w pętli for i while */
      break;
    }

    printf("count == %d.\n", count);


    count++;
  }

  printf("Kod po zakończeniu pętli while.\n");





  return 0;
}
