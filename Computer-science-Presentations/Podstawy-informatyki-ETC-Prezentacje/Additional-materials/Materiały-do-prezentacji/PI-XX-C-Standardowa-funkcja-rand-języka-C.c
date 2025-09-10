#include <stdio.h>

/* W tym przykładzie będziemy korzystali z funkcji rand() języka C.
   By móc ją wywołać potrzebujemy dołączyć do pliką tą linię poniżej. */
#include <stdlib.h>

int main() {
  for (int i = 0; i < 10; i++) {
    printf("rand() == %d.\n", rand());
  }

  printf("\nWszystko pięknie, tylko nie ma tu żadnej losowości.\n"
	 "Proszę wywołać kilkakrotnie ./prog.out, by się o tym przekonać.\n");





  return 0;
}
