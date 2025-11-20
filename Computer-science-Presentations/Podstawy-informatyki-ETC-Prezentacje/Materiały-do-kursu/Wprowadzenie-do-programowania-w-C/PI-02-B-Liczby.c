/* Słowo „komputer” pochodzi od angielskiego „compute”, czyli „liczyć”.
 * Komputer jest więc maszyną do liczenia i dlatego, stosunkowo szybko musimy
 * zrozumieć, jak za jego pomocą można wykonywać obliczenia. */

#include <stdio.h>

int main() {
  printf("Wypisujemy liczbę: %d.\n", 3);

  /* Litera „d” w „%d” pochodzi od „decimal” czyli „dziesiętny”. Obecność
   * symbolu „%d” w stringu mówi funkcji printf, że w to miejsce ma wstawić
   * liczbę całkowitą podaną po stringu, używając do tego zapisu
   * dziesiętnego.
   *
   * Może się wydawać dziwne, że zapis dziesiętny służy tylko do wypisywania
   * liczb całkowitych, ale język C posiada wiele tego typu dziwactw. */

  /* Analogicznie możemy wypisać na ekranie więcej liczb. */
  printf("Wypisujemy dwie liczby: %d, %d.\n\n", 3, 5);

  /* Niestety, już tu zaczynają się schody. Komputer i język C dzielą liczby
   * na znacznie więcej typów niż my, więc siłą rzeczy musimy się nauczyć
   * z nimi pracować. Przykładowo, C zna liczby liczby całkowite 8 bitowe,
   * 16 bitowe, 32 bitowe, 64 bitowe oraz liczby 8 bitowe bez znaku, liczby
   * 16 bitowe bez znaku, liczby 32 bitowe bez znaku,... i tak bez końca.
   *
   * By nie pogubić się w tym co się tu dzieje, zacznijmy od najprostszego
   * typu liczb w komputerze, czyli standardowych liczb całkowitych. */

  printf("Cztery podstawowe operacje arytmetyczne.\n");
  printf("%d + %d == %d.\n", 2, 3, 2 + 3);
  printf("%d - %d == %d.\n", 2, 5, 2 - 5);
  printf("%d * %d == %d.\n", 2, 6, 2 * 6);
  printf("%d / %d == %d.\n\n", 6, 2, 6 / 2);
  /* By pozostać w zgodzie z konwencją języka C, jako symbolu oznaczającego,
   * że lewa strona jest równa prawej używamy „==”.
   *
   * Proszę to na ten moment zaakceptować, potem wyjaśnimy skąd ten wybór. */

  printf("Już tutaj czeka na nas pułapka!\n");
  printf("%d / %d == %d.\n", 5, 2, 5 / 2);
  printf("Bo czemu życie miałoby być proste?\n\n");
  /* 5 / 2 == 2. W C jest tak, gdyż przyjęto, że wynik dzielenia dwóch
   * liczb całkowitych musi być liczbą całkowitą. Dzielenie liczby
   * całkowitych zaprogramowano więc tak, by wynik był taki, jakbyśmy
   * dokładnie obliczyli wynik, a potem odrzucili część ułamkową.
   * Symbolicznie:
   * 5 / 2 == (2.5 -> 2).
   * To zagadnienie jest omówione trochę bardziej szczegółowo w pozostałych
   * materiałach. */

  /* Teraz przedyskutujemy obliczanie reszta z dzielenia. Ze względów
   * technicznych, symbol „%” wewnątrz stringu piszemy jako „%%”. Mam
   * nadzieję, że na razie nie trzeba głębszego komentarza. */
  printf("Działanie operatora modulo: %%.\n");
  printf("1 == 0 * 3 + 1, więc 1 %% 3 == %d.\n", 1 % 3);
  /* „1 % 3 == 1” linię tą czytamy jako „Jeden modulo trzy równa się jeden.”,
   * zaś symbol „%” nazywamy operatorem modulo. Tak samo jako „+” nazywamy
   * operatorem dodawania, do tego nazewnictwo wrócimy później. */
  printf("2 == 0 * 3 + 2, więc 2 %% 3 == %d.\n", 2 % 3);
  printf("3 == 1 * 3 + 0, więc 3 %% 3 == %d.\n", 3 % 3);
  printf("4 == 1 * 3 + 1, więc 4 %% 3 == %d.\n", 4 % 3);
  printf("5 == 1 * 3 + 2, więc 5 %% 3 == %d.\n", 5 % 3);
  printf("6 == 2 * 3 + 0, więc 6 %% 3 == %d.\n", 6 % 3);
  printf("7 == 2 * 3 + 1, więc 7 %% 3 == %d.\n", 7 % 3);
  printf("8 == 2 * 3 + 2, więc 8 %% 3 == %d.\n", 8 % 3);
  printf("9 == 3 * 3 + 0, więc 9 %% 3 == %d.\n", 9 % 3);
  printf("10 == 3 * 3 + 1, więc 10 %% 3 == %d.\n\n", 10 % 3);

  printf("Zobaczmy jeszcze kilka innych przykładów, działania "
	 "operatora modulo (%%).\n");
  printf("Modulo 2.\n");
  printf("0 == 0 * 2 + 0, więc 0 %% 2 == %d.\n", 0 % 2);
  printf("1 == 0 * 2 + 1, więc 1 %% 2 == %d.\n", 1 % 2);
  printf("2 == 1 * 2 + 0, więc 2 %% 2 == %d.\n", 2 % 2);
  printf("3 == 1 * 2 + 1, więc 3 %% 2 == %d.\n", 3 % 2);
  printf("4 == 2 * 2 + 0, więc 4 %% 2 == %d.\n", 4 % 2);
  printf("5 == 2 * 2 + 1, więc 5 %% 2 == %d.\n\n", 5 % 2);

  printf("Modulo 3.\n");
  printf("0 == 0 * 4 + 0, wiec 0 %% 4 == %d.\n", 0 % 4);
  printf("1 == 0 * 4 + 1, więc 1 %% 4 == %d.\n", 1 % 4);
  printf("2 == 0 * 4 + 2, więc 2 %% 4 == %d.\n", 2 % 4);
  printf("3 == 0 * 4 + 3, więc 3 %% 4 == %d.\n", 3 % 4);
  printf("4 == 1 * 4 + 0, więc 4 %% 4 == %d.\n", 4 % 4);
  printf("5 == 1 * 4 + 1, więc 5 %% 4 == %d.\n\n", 5 % 4);

  printf("Dla liczb ujemnych, wynik operacji modulo staje się mniej "
	 "intuicyjny.\n");
  printf("Liczby ujemne modulo 2.\n");
  printf("-1 == 0 * 2 - 1, więc -1 %% 2 == %d.\n", -1 % 2);
  printf("-2 == (-1) * 2 + 0, więc -2 %% 2 == %d.\n", -2 % 2);
  printf("-3 == (-1) * 2 - 1, więc -3 %% 2 == %d.\n", -3 % 2);
  printf("-4 == (-2) * 2 + 0, więc -4 %% 2 == %d.\n", -4 % 2);
  printf("-5 == (-2) * 2 - 1, więc -5 %% 2 == %d.\n\n", -5 % 2);

  printf("Liczby ujemne modulo 3.\n");
  printf("-1 == 0 * 3 - 1, więc -1 %% 3 == %d.\n", -1 % 3);
  printf("-2 == 0 * 3 - 2, więc -2 %% 3 == %d.\n", -2 % 3);
  printf("-3 == (-1) * 3 + 0, więc -3 %% 3 == %d.\n", -3 % 3);
  printf("-4 == (-1) * 3 - 1, więc -4 %% 3 == %d.\n", -4 % 3);
  printf("-5 == (-1) * 3 - 2, więc -5 %% 3 == %d.\n", -5 % 3);





  return 0;
}
