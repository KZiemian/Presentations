#include <stdio.h>

/* Słowo „komputer” pochodzi od angielskiego „compute”, czyli „liczyć”.
 * Komputer jest więc maszyną do liczenia i dlatego, stosunkowo szybko musimy
 * zrozumieć, jak za jego pomocą można wykonywać obliczenia. */

/* Ktoś może zapytać, co mają wspólnego liczby z takimi ciekawymi rzeczami
 * jak grafika? Okazuje się, że grafika dwuwymiarowa to w dużej mierze
 * operowanie na wektorach, które mają dwie składowe. Czy takie pojęcie
 * wektora jest Państwu znane? Jeśli nie to proszę się tym na razie nie
 * przejmować, na tym przedmiocie nie będziemy go używać.
 *
 * W grafice dwuwymiarowej do przekształcania wektorów używa się macierzy
 * dwuwymiarowych, które są tablicami zawierającymi cztery liczby.
 * Bo 2 * 2 = 4. Gdy chodzi o grafikę trójwymiarową, to sytuacja jest
 * podobna, tylko operuje się na wektorach o trzech składowych i macierzach
 * trójwymiarowych, które zawierają dziewięć liczb. Bo 3 * 3 = 9.
 *
 * Podobną historię można by opowiedzieć o dźwięku w komputerze, bo jednym
 * ze sposobów przechowywania dźwięku jest rozłożenie fali dzwiękowej,
 * za pomocą matematycznych formuł, na tak zwane szeregi Fouriera. Więć
 * i tutaj matematyki, a tym samym liczb, jest sporo. Można by mówić o tym
 * bardzo długo, ale to temat na inny przedmiot. */

int main() {
  printf("Wypisujemy liczbę: %d.\n", 3);

  /* Litera „d” w „%d” pochodzi od „decimal” czyli „dziesiętny”. Obecność
   * symbolu „%d” w stringu mówi funkcji printf(), że w to miejsce ma
   * wstawić liczbę całkowitą podaną po stringu, używając do jej wyświetlenia
   * zapisu dziesiętnego dla liczb.
   *
   * Może się wydawać dziwne, że symbol oznaczający zapis dziesiętny służy
   * tylko do tego, by wypisać liczbę całkowitą, ale język C posiada wiele
   * tego typu dziwactw. */

  /* Analogicznie możemy wypisać na ekranie więcej liczb. */

  printf("Wypisujemy dwie liczby: %d, %d.\n\n", 3, 5);

  /* Niestety, już tu zaczynają się schody. Komputer i język C dzielą liczby
   * na znacznie więcej typów niż my, więc siłą rzeczy musimy się nauczyć
   * z nimi pracować. Przykładowo, C zna liczby liczby całkowite 8 bitowe,
   * 16 bitowe, 32 bitowe, 64 bitowe oraz liczby całkowite 8 bitowe bez
   * znaku, liczby całkowite 16 bitowe bez znaku, liczby całkowite 32 bitowe
   * bez znaku,..., i tak dalej.
   *
   * By nie pogubić się w tym co się tu dzieje, zacznijmy od najprostszego
   * typu liczb w komputerze, czyli standardowych liczb całkowitych. */

  printf("Cztery podstawowe operacje arytmetyczne.\n");
  printf("%d + %d == %d.\n", 2, 3, 2 + 3);
  printf("%d - %d == %d.\n", 2, 5, 2 - 5);
  printf("%d * %d == %d.\n", 2, 6, 2 * 6);
  printf("%d / %d == %d.\n\n", 6, 2, 6 / 2);

  /* By pozostać w zgodzie z konwencją języka C, jako symbolu oznaczającego,
   * że lewa strona jest równa prawej używamy dwóch znaków równości: „==”.
   *
   * Proszę to na ten moment zaakceptować, potem wyjaśnimy dlaczego
   * stosujemy taką konwencję. */

  printf("Już tutaj czeka na nas PUŁAPKA!\n");
  printf("%d / %d == %d.\n", 5, 2, 5 / 2);
  printf("Bo czemu życie miałoby być proste?\n\n\n");

  /* 5 / 2 == 2. W C jest tak, gdyż przyjęto, że wynik dzielenia dwóch
   * liczb całkowitych ma być liczbą całkowitą. Dzielenie liczby
   * całkowitych zaprogramowano więc tak, by wynik był taki, jakbyśmy
   * obliczyli ten wynik dokładnie, a potem odrzucili część ułamkową.
   * Inaczej mówiąc, rachunek przebiega mniej więcej tak:
   * 5 / 2 == (2.5 -> 2).
   * To zagadnienie jest ???? omówione trochę bardziej szczegółowo
   * w innej części tych materiałów. */

  /* Teraz przedyskutujemy obliczanie reszta z dzielenia, którą to operację
   * w języku C oznaczamy symbolem „%”. Operację tę nazywamy też
   * „użyciem operatora modul”, gdzie przez „operator modulo” rozumiemy
   * symbol „%”. Ze względów technicznych, symbol „%” wewnątrz stringu
   * piszemy jako „%%”. Mam nadzieję, że ten fakt nie wymaga na razie
   * głębszego komentarza. */

  printf("Działanie operatora modulo: %%.\n");
  printf("Operator modulo zwracam nam resztę z dzielenia danej liczby "
	 "całkowitej, przez inną liczbę całkowitą.\n");
  printf("1 == (0 * 2) + 1, więc (1 %% 2) == %d.\n", 1 % 2);
  printf("Równanie „1 %% 2 == 1” linię tą czytamy jako "
	 "„Jeden modulo dwa równa się jeden.”, zaś symbol „%%” nazywamy "
	 "operatorem modulo. Tak samo jako „+” nazywamy operatorem "
	 "dodawania, do tego nazewnictwo wrócimy później.\n");
  printf("Nawiasy okrągłe w tych wyrażeniach są tylko po to, by "
	 "zwiększyć czytelność. Równie dobrze możemy napisać:\n"
	 "1 == 0 * 2 + 1, więc 1 %% 2 == %d.\n\n", 1 % 2);

  printf("Ilustracja działania operacji: x %% 2.\n");
  printf("0 == (0 * 2) + 0, więc (0 %% 2) == %d.\n", 0 % 2);
  printf("1 == (0 * 2) + 1, więc (1 %% 2) == %d.\n", 1 % 2);
  printf("2 == (1 * 2) + 0, więc (2 %% 2) == %d.\n", 2 % 2);
  printf("3 == (1 * 2) + 1, więc (3 %% 2) == %d.\n", 3 % 2);
  printf("4 == (2 * 2) + 0, więc (4 %% 2) == %d.\n", 4 % 2);
  printf("5 == (2 * 2) + 1, więc (5 %% 2) == %d.\n", 5 % 2);
  printf("6 == (3 * 2) + 0, więc (6 %% 2) == %d.\n", 6 % 2);
  printf("7 == (3 * 2) + 1, więc (7 %% 2) == %d.\n", 7 % 2);
  printf("8 == (4 * 2) + 0, więc (8 %% 2) == %d.\n", 8 % 2);
  printf("9 == (4 * 2) + 1, więc (9 %% 2) == %d.\n", 9 % 2);
  printf("10 == (5 * 2) + 0, więc (10 %% 2) == %d.\n\n", 10 % 2);



  printf("Zobaczmy jeszcze kilka innych przykładów, działania "
	 "operatora modulo „%%”.\n");
  printf("Operacja: x %% 3.\n");
  printf("0 == (0 * 3) + 0, więc (0 %% 3) == %d.\n", 0 % 3);
  printf("1 == (0 * 3) + 1, więc (1 %% 3) == %d.\n", 1 % 3);
  printf("2 == (0 * 3) + 2, więc (2 %% 3) == %d.\n", 2 % 3);
  printf("3 == (1 * 3) + 0, więc (3 %% 3) == %d.\n", 3 % 3);
  printf("4 == (1 * 3) + 1, więc (4 %% 3) == %d.\n", 4 % 3);
  printf("5 == (1 * 3) + 2, więc (5 %% 3) == %d.\n", 5 % 3);
  printf("6 == (2 * 3) + 0, więc (6 %% 3) == %d.\n", 6 % 3);
  printf("7 == (2 * 3) + 1, więc (7 %% 3) == %d.\n", 7 % 3);
  printf("8 == (2 * 3) + 2, więc (8 %% 3) == %d.\n", 8 % 3);
  printf("9 == (3 * 3) + 0, więc (9 %% 3) == %d.\n", 9 % 3);
  printf("10 == (3 * 3) + 1, więc (10 %% 3) == %d.\n\n", 10 % 3);



  printf("Operacja: x %% 4.\n");
  printf("0 == (0 * 4) + 0, więc (0 %% 4) == %d.\n", 0 % 4);
  printf("1 == (0 * 4) + 1, więc (1 %% 4) == %d.\n", 1 % 4);
  printf("2 == (0 * 4) + 2, więc (2 %% 4) == %d.\n", 2 % 4);
  printf("3 == (0 * 4) + 3, więc (3 %% 4) == %d.\n", 3 % 4);
  printf("4 == (1 * 4) + 0, więc (4 %% 4) == %d.\n", 4 % 4);
  printf("5 == (1 * 4) + 1, więc (5 %% 4) == %d.\n", 5 % 4);
  printf("6 == (1 * 4) + 2, więc (6 %% 4) == %d.\n", 6 % 4);
  printf("7 == (1 * 4) + 3, więc (7 %% 4) == %d.\n", 7 % 4);
  printf("8 == (2 * 4) + 0, więc (8 %% 4) == %d.\n", 8 % 4);
  printf("9 == (2 * 4) + 1, więc (9 %% 4) == %d.\n", 9 % 4);
  printf("10 == (2 * 4) + 2, więc (10 %% 4) == %d.\n\n\n", 10 % 4);





  printf("Dla liczb ujemnych, wynik operacji modulo staje się mniej "
	 "intuicyjny.\n");
  printf("Liczba 0 i liczby ujemne modulo 2.\n");
  printf("0 == (0 * 2) + 0, więc (0 %% 2) == %d.\n", 0 % 2);
  printf("-1 == (0 * 2) - 1, więc (-1 %% 2) == %d.\n", -1 % 2);
  printf("-2 == ((-1) * 2) + 0, więc (-2 %% 2) == %d.\n", -2 % 2);
  printf("-3 == ((-1) * 2) - 1, więc (-3 %% 2) == %d.\n", -3 % 2);
  printf("-4 == ((-2) * 2) + 0, więc (-4 %% 2) == %d.\n", -4 % 2);
  printf("-5 == ((-2) * 2) - 1, więc (-5 %% 2) == %d.\n", -5 % 2);
  printf("-6 == ((-3) * 2) + 0, więc (-6 %% 2) == %d.\n", -6 % 2);
  printf("-7 == ((-3) * 2) - 1, więc (-7 %% 2) == %d.\n", -7 % 2);
  printf("-8 == ((-4) * 2) + 0, więc (-8 %% 2) == %d.\n", -8 % 2);
  printf("-9 == ((-4) * 2) - 1, więc (-9 %% 2) == %d.\n", -9 % 2);
  printf("-10 == ((-5) * 2) + 0, więc (-10 %% 2) == %d.\n\n", -10 % 2);



  printf("Liczby zero i liczby ujemne modulo 3.\n");
  printf("0 == (0 * 3) + 0, więc (0 %% 3) == %d.\n", 0 % 3);
  printf("-1 == (0 * 3) - 1, więc (-1 %% 3) == %d.\n", -1 % 3);
  printf("-2 == (0 * 3) - 2, więc (-2 %% 3) == %d.\n", -2 % 3);
  printf("-3 == ((-1) * 3) + 0, więc (-3 %% 3) == %d.\n", -3 % 3);
  printf("-4 == ((-1) * 3) - 1, więc (-4 %% 3) == %d.\n", -4 % 3);
  printf("-5 == ((-1) * 3) - 2, więc (-5 %% 3) == %d.\n", -5 % 3);
  printf("-6 == ((-2) * 3) + 0, więc (-6 %% 3) == %d.\n", -6 % 3);
  printf("-7 == ((-2) * 3) - 1, więc (-7 %% 3) == %d.\n", -7 % 3);
  printf("-8 == ((-2) * 3) - 2, więc (-8 %% 3) == %d.\n", -8 % 3);
  printf("-9 == ((-3) * 3) + 0, więc (-9 %% 3) == %d.\n", -9 % 3);
  printf("-10 == ((-3) * 3) - 1, więc (-10 %% 3) == %d.\n\n", -10 % 3);


  printf("Liczby zero i liczby ujemne modulo 4.\n");
  printf("0 == (0 * 4) + 0, więc (0 %% 4) == %d.\n", 0 % 4);
  printf("-1 == (0 * 4) - 1, więc (-1 %% 4) == %d.\n", -1 % 4);
  printf("-2 == (0 * 4) - 2, więc (-2 %% 4) == %d.\n", -2 % 4);
  printf("-3 == (0 * 4) - 3, więc (-3 %% 4) == %d.\n", -3 % 4);
  printf("-4 == ((-1) * 4) + 0, więc (-4 %% 4) == %d.\n", -4 % 4);
  printf("-5 == ((-1) * 4) - 1, więc (-5 %% 4) == %d.\n", -5 % 4);
  printf("-6 == ((-1) * 4) - 2, więc (-6 %% 4) == %d.\n", -6 % 4);
  printf("-7 == ((-1) * 4) - 3, więc (-7 %% 4) == %d.\n", -7 % 4);
  printf("-8 == ((-2) * 4) + 0, więc (-8 %% 4) == %d.\n", -8 % 4);
  printf("-9 == ((-2) * 4) - 1, więc (-9 %% 4) == %d.\n", -9 % 4);
  printf("-10 == ((-2) * 4) - 2, więc (-10 %% 4) == %d.\n", -10 % 4);

  /* Na pocieszenie można powiedzieć, że operację modulu używamy
   * w większości przypadków, do liczb dodatnich. Dlatego, na razie
   * nie musimy sobie zaprzątać głowy tym, jak działa ona dla liczb
   * ujemnych. */





  return 0;
}
