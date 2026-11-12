#include <stdio.h>



int main() {

  /* Liczby zmiennoprzecinkowe to w zasadzie liczby, które posiadają część
   * dziesiętną. Temat liczb zmiennoprzecinkowych jest skomplikowany
   * w stopniu trudnym wręcz do pojęcia. Jednak to jest kurs podstaw
   * informatyki dlatego nie będziemy tej tematyki poruszać zbyt dogłębnie,
   * a na razie wystarczy nam, że są to liczby, na których jak liczymy, to
   * w przybliżeniu wynik jest taki jak trzeba. */

  printf("Wypiszmy liczbę zmiennoprzecinkową: %f.\n", 0.5);

  /* Symbol „%f” pochodzi od ang. „floating-point number”, pl. „liczba
   * zmiennoprzecinkowa”. */

  printf("Wypiszmy liczbę zmiennoprzecinkową z dwoma cyframi "
	 "po kropce dziesiętnej: %.2f.\n\n", 0.5);

  printf("W informatyce stosuje się Amerykańską notację dla liczb, w której "
	 "zamiast przecinka dziesiętnego jest kropka dziesiętna.\n\n");

  printf("By wypisać liczbę zmiennoprzecinkową z jedną cyfrą po kropce "
	 "dziesiętnej używamy %%.1f. By wypisać taką liczbę z dwiema "
	 "cyframi po kropce używamy %%.2f, dla trzech używamy %%.3f, "
	 "etc.\n\n");

  /* Wszystko wydaje się działać dobrze. */

  printf("Cztery podstawowe działania arytmetyczne na liczbach "
	 "zmiennoprzecinkowych.\n");
  printf("%.2f + %.2f == %.2f.\n", 2.0, 3.0, 2.0 + 3.0);
  printf("%.2f - %.2f == %.2f.\n", 2.0, 5.0, 2.0 - 5.0);
  printf("%.2f * %.2f == %.2f.\n", 2.0, 6.0, 2.0 * 6.0);
  printf("%.2f / %.2f == %.2f.\n\n", 6.0, 2.0, 6.0 / 2.0);

  printf("Zobaczmy jak arytmetyka działa dla następujących "
	 "liczb zmiennoprzecinkowych.\n");
  printf("%.2f + %.2f == %.2f.\n", 0.4, 0.35, 0.4 + 0.35);
  printf("%.2f - %.2f == %.2f.\n", 0.5, 0.37, 0.5 - 0.37);
  printf("%.2f * %.2f == %.2f.\n", 3.0, 0.25, 3.0 * 0.25);
  printf("%.2f * %.2f == %.2f.\n", 2.0, 6.0, 2.0 * 6.0);
  printf("%.2f / %.2f == %.2f.\n", 5.0, 2.0, 5.0 / 2.0);
  printf("%.2f / %.2f == %.2f.\n\n", 3.5, 2.0, 3.5 / 2.0);

  /* WAŻNE. Dla C symbol „2” oznacza liczbę całkowitą o wartości
   * dwa, a „2.0” liczbę ZMIENNOPRZECINKOWĄ o wartości dwa. To nie są tylko
   * słowa, bo jak zapomnimy o tym to będzie boleć, proszę zobaczyć kod
   * poniżej.
   *
   * Bo czemu życie miałoby być proste? */

  printf("Co w języku C może pójść nie tak? W przybliżeniu, wszystko.\n");
  printf("%d / %d == %d.\n", 5, 2, 5 / 2);
  printf("%.2f / %.2f == %.2f.\n\n", 5.0, 2.0, 5.0 / 2.0);

  printf("Dzielenie przez zero to nie jest nigdy dobry pomysł!\n");
  printf("Jak ktoś chce się o tym przekonać, niech odkomentuje poniższy "
	 "kod.\n");
  /* printf("1 / 0 == %d.\n", 1 / 0); */

  printf("\nJak ktoś chce sprawdzić, do czego prowadzi dzielenie "
	 "przez zero będące liczbą zmiennoprzecinkową, niech odkomentuje "
	 "poniższy kod.\n");

  /* printf("1.0 / 0.0 == %.2f.\n", 1.0 / 0.0); */

  printf("\nJeśli dzielenie pójdzie źle, to można się spodziewać dziwnych "
	 "rezultatów jak:\n");
  printf("inf - infinity, nieskończoność;\n");
  printf("NaN - Not a Number, to co wyszło nie jest liczbą.\n");

  /* Powinno być jasne, że dzielenie przez 0 to jest coś czego powinno się
   * za wszelką cenę unikać. Niestety, w programowaniu trudno uniknąć nawet
   * oczywistych błędów. Jak Państwo widzą, dzielenie liczb CAŁKOWITYCH przez
   * CAŁKOWITE zero wywołuje błąd. Gdy chodzi o liczby zmiennoprzecinkowe,
   * to niekoniecznie wywoła to błąd, ale może zwrócić dziwny wynik,
   * jakim jest inf, oznaczający nieskończoną wartość, lub NaN.
   * Akronim „NaN” roziwja się jako „Not a Number”, czyli „wynikiem obliczeń
   * jest coś, co nie jest liczbą”.
   *
   * Dlaczego to jest takie skomplikowane? To sam w sobie jest dość złożony
   * temat, na razie więc zaakceptujmy, że tak jest i wróćmy do poznawania
   * własności języka C. */





  return 0;
}
