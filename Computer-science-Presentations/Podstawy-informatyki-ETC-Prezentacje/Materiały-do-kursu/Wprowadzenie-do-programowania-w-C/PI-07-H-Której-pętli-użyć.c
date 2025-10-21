#include <stdio.h>

/* Przyjęło się, że pętli for używamy, jeśli potrafimy podać przed jej
 * wykonaniem ile razy ma się wykonać. Jeśli nie potrafimy odpowiednio
 * wcześnie powiedzieć, ile razy pętla ta się wykona, to używamy pętli while.
 *
 * Pętli while używamy też często przy obliczeniach z liczbami
 * zmiennoprzecinkowymi, by uniknąć problemów wynikający z ich dokładności.
 * Później podamy przykład o co nam dokładnie chodzi. */

int main() {
  /* Prosty przykład użycia pętli while: prosimy użytkownika o podawanie
   * liczb całkowitych, dopóki suma podanych liczb nie przekroczy 20.
   * Ponieważ nie wiem jakie liczby użytkownik poda, więc nie wiemy
   * ile obiegów pętli będziemy potrzebować, stąd naturalne jest użycie
   * pętli while. */

  int liczbaOdUzytkownika = 0;
  int sumaLiczb = 0;

  while (sumaLiczb <= 20) {
    printf("Podaj liczbę całkowitą: ");

    scanf("%d", &liczbaOdUzytkownika);

    sumaLiczb += liczbaOdUzytkownika;
  }

  printf("Suma podanych przez ciebie liczb wynosi: %d.\n", sumaLiczb);





  return 0;
}
