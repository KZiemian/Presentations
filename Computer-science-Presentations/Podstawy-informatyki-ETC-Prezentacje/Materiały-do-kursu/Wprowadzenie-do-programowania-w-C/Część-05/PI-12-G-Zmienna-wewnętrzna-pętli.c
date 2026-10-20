#include <stdio.h>
/* Jest częstym przypadkiem, że zmienna „i” nie ma żadnej innej roli, poza
 * zliczaniem liczby obiegów pętli. Dlatego też w języku C wprowadzono
 * w pewnym momencie pojęcie zmiennej wewnętrznej pętli for, która jest
 * tworzona w nawiasie na początku pętli i istnieje tylko w niej. */

int main() {
  /* printf("i == %d.\n", i); */
  /* Zmienna „i” JESZCZE nie istnieje, więc odkomentowanie tej linii
   * spowoduje błąd kompilatora. */

  /* Zmienną wewnętrzną pętli definiujemy w pierwszej części nawiasu
   * okrągłego następującego po słowie „for”. Definicja ta ma standardową
   * postać: najpierw typ zmiennej, potem jej nazwa. Z tym związane są pewne
   * subtelności, o których może powiemy później. */
  for (int i = 0; i < 3; i++) {
    printf("Hello, World! %d time.\n", i + 1);
    /* Zmienna „i” istnieje wewnątrz ciała pętli. */
  }

  /* printf("i == %d.\n", i); */
  /* Zmienna „i” JUŻ nie istnieje, więc odkomentowanie powyższej linii wywoła
   * błąd kompilatora. */





  return 0;
}
