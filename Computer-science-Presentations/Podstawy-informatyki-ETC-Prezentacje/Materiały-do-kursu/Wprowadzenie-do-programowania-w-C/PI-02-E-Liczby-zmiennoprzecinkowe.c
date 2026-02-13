#include <stdio.h>

int main() {
  /* Liczby zmiennoprzecinkowe to w zasadzie liczby, które posiadają część
   * dziesiętną. Temat jest niewiarygodnie wręcz skomplikowany, ale na razie
   * wystarczy nam, że są to liczby, na których jak liczymy, to
   * w przybliżeniu wynik jest taki jak trzeba. Co do reszty, jest cały
   * przedmiot metod numerycznych, który zajmuje się takimi rzeczami. */

  printf("Wypiszmy liczbę zmiennoprzecinkową: %f.\n", 0.5);
  /* Symbol „%f” pochodzi od ang. „floating-point number”, „liczba
   * zmiennoprzecinkowa”. */
  printf("Wypiszmy liczbę zmiennoprzecinkową z dwoma cyframi "
	 "po kropce dziesiętnej: %.2f.\n", 0.5);
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
   * słowa, bo jak zapomnimy o tym to będzie boleć, patrz niżej.
   *
   * Bo czemu życie miałoby być proste? */

  printf("Co w C może pójść nie tak? W przybliżeniu, wszystko.\n");
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





  return 0;
}
