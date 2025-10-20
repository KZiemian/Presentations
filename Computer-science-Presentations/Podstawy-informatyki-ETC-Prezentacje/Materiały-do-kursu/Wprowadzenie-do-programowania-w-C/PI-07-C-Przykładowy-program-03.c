#include <stdio.h>

/* Użyteczność pętli for zilustrujemy, pisząc nową wersję programu, który już
 * widzieliśmy. W tej wersji pobiera on od użytkownika trzy liczby,
 * a następnie oblicza ich sumę. */

int main() {
  int liczbaOdUzytkownika = 0;
  int sumaLiczb = 0;



  for (int i = 0; i < 3; i++) {
    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &liczbaOdUzytkownika);

    sumaLiczb += liczbaOdUzytkownika;
  }

  printf("Suma podanych przez ciebie liczb wynosi: %d.\n", sumaLiczb);

  /* Proszę zwrócić uwagę, na to, że aby nasz program pobierał od użytkownika
   * nie trzy, ale pięć liczb wystarczy zastąpić
   * for (int i = 0; i < 3; i++)
   * przez
   * for (int i = 0; i < 5; i++)
   * To jest prosty przykład tego, czemu lubimy używać pętli. */





  return 0;
}
