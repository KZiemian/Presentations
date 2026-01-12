#include <stdio.h>

/* Widzieliśmy, że w języku Python, gdy mamy LISTĘ, to możemy łatwo znaleźć
 * jej długość pisząc len(nazwaListy). Nazwa funkcji „len” pochodzi
 * oczywiście od and. „length”, czyli „długość”.. W języku C tablice też
 * mają ustaloną długość, ale otrzymanie jej od programu jest trudne.
 *
 * Dlaczego tak jest, to wyjaśnimy, gdy poznamy jeszcze kilka pojęć. Bo czemu
 * życie miałoby być proste? */

int main() {
  /* Poniżej definiujemy tablicę o długości 10. */
  int arrayInt1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  /* Choć tablica ta POSIADA ustaloną długość, to niestety często to
   * użytkownik musi odpowiadać za pamiętanie ile ona wynosi. Tak choćby
   * jest w poniższej pętli for. */

  for (int i = 0; i < 10; i++) {
    printf("arrayInt1[%] == %d.\n", i, arrayInt1[i]);
  }

  /* Problem ten jest niestety dość złożony i potrzebujemy poświęcimy mu
   * trochę czasu. */





  return 0;
}
