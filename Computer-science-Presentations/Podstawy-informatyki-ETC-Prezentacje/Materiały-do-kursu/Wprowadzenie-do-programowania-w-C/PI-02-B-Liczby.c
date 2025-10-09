/* Słowo „komputer” pochodzi od angielskiego „compute”, czyli „liczyć”.
 * Komputer jest więc maszyną do liczenia i dlatego, stosunkowo szybko musimy
 * zrozumieć, jak za jego pomocą można wykonywać obliczenia. */

#include <stdio.h>

int main() {
  printf("Wypisz liczbę: %d.\n", 3);

  /* Litera „d” w „%d” pochodzi od „decimal” czyli „dziesiętny”. Obecność
   * symbolu „%d” w stringu mówi funkcji printf, że w to miejsce ma wstawić
   * liczbę całkowitą podaną po stringu, używając do tego zapisu
   * dziesiętnego.
   *
   * Może się wydawać dziwne, że zapis dziesiętny służy tylko do wypisywania
   * liczb całkowitych, ale język C posiada wiele tego typu dziwactw. */

  /* Analogicznie możemy wypisać na ekranie więcej liczb. */
  printf("Wypisujemy dwie liczby: %d, %d.\n", 3, 5);

  /* Niestety, już tu zaczynają się schody. Komputer i język C dzielą liczby
   * na znacznie więcej typów niż my, więc siłą rzeczy musimy się nauczyć
   * z nimi pracować. Przykładowo, C zna liczby liczby całkowite 8 bitowe,
   * 16 bitowe, 32 bitowe, 64 bitowe oraz liczby 8 bitowe bez znaku, liczby
   * 16 bitowe bez znaku, liczby 32 bitowe bez znaku,... i tak bez końca.
   *
   * By nie pogubić się w tym co się tu dzieje, zacznijmy od najprostszego
   * typu liczb w komputerze, czyli standardowych liczb całkowitych. */

  printf("%d + %d == %d.\n", 2, 3, 2 + 3);
  printf("%d - %d == %d.\n", 2, 5, 2 - 5);
  printf("%d * %d == %d.\n", 2, 6, 2 * 6);
  printf("%d / %d == %d.\n\n", 6, 2, 6 / 2);
  /* By pozostać w zgodzie z konwencją języka C, jako symbolu oznaczającego,
   * że lewa strona jest równa prawej używamy „==”.
   *
   * Proszę to na ten moment zaakceptować, potem wyjaśnimy skąd ten wybór. */

  /* Już tutaj czeka na nas pułapka! */
  printf("%d / %d == %d.\n", 5, 2, 5 / 2);
  /* 5 / 2 == 2. W C jest tak, gdyż przyjęto, że wynik dzielenia dwóch
   * liczb całkowitych musi być liczbą całkowitą. Dzielenie liczby całkowitych
   * zaprogramowano więc tak, by wynik był taki, jakbyśmy dokładnie
   * obliczyli wynik, a potem odrzucili część ułamkową.
   * Symbolicznie:
   * 5 / 2 -> 2.5 == 2.
   * To zagadnienie jest omówione trochę bardziej szczegółowo w pozostałych
   * materiałach. */

  /* Teraz przedyskutujemy obliczanie reszta z dzielenia. Ze względów
     technicznych, symbol „%” wewnątrz stringu piszemy jako „%%”. Mam
     nadzieję, że na razie nie trzeba głębszego komentarza. */
  printf("5 == 2 * 2 + 1, więc 5 %% 2 == %d.\n", 5 % 2);
  /* „5 % 2 = 1” linię tą często czytamy jako „Pięć modulo dwa równa się
   * jeden.”, a „%” nazywamy operatorem modulo. Tak samo jako „+” nazywamy
   * operatorem dodawania, do tego nazewnictwo wrócimy później. */

  printf("10 == 5 * 2 == 5 * 2 + 0, więc 10 %% 2 == %d.\n", 10 % 2);
  printf("5 == 3 + 2, więc 5 %% 3 == %d.\n", 5 % 3);
  printf("10 == 3 * 3 + 1, wiec 10 %% 3 == %d.\n", 10 % 3);


  printf("\nDla liczb ujemnych, wynik operacji modul staje się mniej "
	 "intuicyjna.\n");

  printf("-5 == (-2) * 2 - 1, więc -5 %% 2 == %d.\n", -5 % 2);
  printf("-10 == (-5) * 2 + 0, więc -10 %% 2 == %d.\n", -10 % 2);
  printf("-5 == (-1) * 3 - 2, więc -5 %% 3 == %d.\n", -5 % 3);
  printf("-10 == (-3) * 3 - 1, więc %d %% %d == %d.\n", -10, 3, -10 % 3);





  return 0;
}
