#include <stdio.h>

/* ZRÓB LEPSZE KOMENTARZE. */
/* Dzięku pętlą czytanie danych z pliku staje się dużo prostsze. Poniższy
 * przykład ilustruje, jak można za pomocą pętli for odczytać zadaną liczbę
 * lini z danego pliku. Przykład ten można napisać w znacznie mądrzejszy
 * sposób, ale na nasze potrzeby jest on wystarczający. */

int main() {
  int liczbaCalkowita1 = 0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-13-B-Plik-z-danymi.dat", "r");


  for (int i = 0; i < 100; i++) {
    fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

    printf("%d\n", liczbaCalkowita1);
  }





  return 0;
}
