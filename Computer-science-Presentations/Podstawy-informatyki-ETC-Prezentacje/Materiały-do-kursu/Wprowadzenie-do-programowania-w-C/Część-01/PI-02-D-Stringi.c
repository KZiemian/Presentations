#include <stdio.h>

int main() {
  printf("O stringach słów kilka.\n");

  /* String w C są niestety bardzo skomplikowanymi obiektami i będziemy
   * mogli je omówić, dopiero gdy zapoznamy się z kodowaniem ASCII
   * i tablicami w języku C. Na razie ograniczymy się do kilku podstawowych
   * wiadomości o nich. */

  /* W uproszczeniu, string to tekst, który można wypisać na ekranie.
   * W C string zaczyna się i kończy znakiem ", czyli anglojęzycznym
   * znakiem cudzysłowu. Przykładowy string widzimy w funkcji printf()
   * powyżej. */

  /* Jeśli napiszemy kilka stringów obok siebie, tak że dzielą je tylko
   * białe znaki (ang. whitespace), takie jak spacja, tabulator czy nowa
   * linia, to język C połączy te wszystkie w jeden string. Przykład
   * działania tego mechanizmu można zobaczyć poniżej. */

  printf("Stringi występujące obok siebie, " "język C połączy w całość, "
	 "w jeden string. "    "Liczba białych znaków oddzielające takie "
	 "dwa stringi nie ma znaczenia.\n"

	 "Dzielenie stringów na część jest wygodne, jeśli tekst, który "
	 "chcemy wypisać na ekranie jest długi.\n");

  /* Mamy nadzieję, że taka porcja informacji o stringach jest dla Państwa
   * na ten moment wystarczająca. Jeśli nie, to proszę nas o tym
   * poinformować. */





  return 0;
}
