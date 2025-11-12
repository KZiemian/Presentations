#include <stdio.h>

/* ZRÓB LEPSZE KOMENTARZE. */
/* Dzięku pętlą czytanie danych z pliku potrafi być dużo prostsze. Poniższy
 * przykład ilustruje, jak można za pomocą pętli for odczytać zadaną liczbę
 * lini z danego pliku. Przykład ten można napisać w znacznie mądrzejszy
 * sposób, ale na nasze potrzeby jest on wystarczający. */

int main() {
  int numberOfLinesToRead = 41;
  double x = 0.0;
  double y = 0.0;
  double uncertanity = 0.0;

  FILE *fileWithDataPtr = fopen("PI-09-G-Dane-do-odczytu.dat", "r");

  for (int i = 0; i < numberOfLinesToRead; i++) {
    fscanf(fileWithDataPtr, "%lf %lf %lf", &x, &y, &uncertanity);

    printf("x == %.2f, y == %.4f, uncertanity == %.2f.\n", x, y, uncertanity);
  }

  /* Proszę pamiętać, żeby po zakończeniu korzystania z pliku, zamknąć go. */
  fclose(fileWithDataPtr);





  return 0;
}
