/* Słowo „komputer” pochodzi od angielskiego „compute”, czyli liczyć.
   Komputer jest więc maszyną do liczenia i dlatego, dość szybko musimy
   zrozumieć, jak za jego pomocą można liczyć. */

#include <stdio.h>

int main() {
  printf("Wypisz liczbę: %d.\n", 3);

  /* %d pochodzi od „decimal” czyli „dziesiętny”. Oznacza, to, że funkcja
     printf wstawi w miejsce „%d” liczbę całkowitą podaną po przecinku,
     używając do tego zapisu dziesiętnego. */

  /* Analogicznie możemy wypisać na ekranie więcej liczb. */
  printf("Wypisujemy dwie liczby: %d, %d.\n", 3, 5);

  /* Niestety, już tu zaczynaja się schody. Komputer i język C dzielą liczby
     na znacznie więcej typów niż my, my zaś musimy się nauczyć z nich
     korzystać. Przykładowo, C zna liczby liczby całkowite 8 bitowe,
     16 bitowe, 32 bitowe, 64 bitowe oraz liczby 8 bitowe bez znaku, liczby
     16 bitowe bez znaku, liczby 32 bitowe bez znaku,... i tak bez końca.

     By nie pogóbić się w tym co się tu dzieje, zacznijmy od najprostszego
     typu liczb w komputerze, czyli standardowych liczb całkowitych. */

  printf("%d + %d = %d.\n", 2, 3, 2 + 3);
  printf("%d - %d = %d.\n", 2, 5, 2 - 5);
  printf("%d * %d = %d.\n", 2, 6, 2 * 6);
  printf("%d / %d = %d.\n", 6, 2, 6 / 2);

  /* Już tutaj czeka na nas pułapka! */
  printf("%d / %d = %d.\n", 5, 2, 5 / 2);

  /* Reszta z dzielenia.
     Ze względów technicznych, symbol „%” wewnątrz stringu piszemy jako „%%”.
     Mam nadzieję, że na razie nie trzeba głębszego komentarza. */
  printf("%d %% %d = %d.\n", 5, 2, 5 % 2);
  /* 5 % 2 = 1, bo 5 = 2 * 2 + 1.
     „5 % 2 = 1” linię tą często czytamy jako „Pięć modulo dwa równa się
     jeden.”, a „%” nazywamy operatorem modulo. Tak samo jako „+” nazywamy
     operatorem dodawania, to kwestia żargonu. */

  printf("%d %% %d = %d.\n", -10, 3, -10 % 3);
  /* Dla liczb ujemnych to trochę bardziej zawiłe, ale -10 % 3 = -1,
     bo -10 = (-3) * 3 + 1. */





  return 0;
}
