#include <stdio.h>

int main() {
  /* Liczby zmiennoprzecinkowe to w zasadzie liczby, które posiadają część
   * dziesiętną. Temat jest niewiarygodnie wręcz skomplikowany, ale na razie
   * wystarczy nam, że są to liczby, na których jak liczymy, to w
   * przybliżeniu wynik jest taki jak trzeba. Co do reszty, jest cały
   * przedmiot metod numerycznych, który zajmuje się takimi rzeczami. */

  printf("Wypisz liczbę zmiennoprzecinkową: %f.\n", 0.5);
  /* %f pochodzi od „floating-point number”, „liczba zmiennoprzecinkowa”. */
  printf("Wypisz liczbę zmiennoprzecinkową: %.1f.\n", 0.5);
  /* %.1f oznacza: wypisz tylko pierwszą cyfrę po przecinku.
   * Analogicznie aby wpisać dwie cyfry po przecinku używamy %.2f,
   * dla trzech cyfry mamy %.3f, etc. */

  /* Wszystko wydaje się działać dobrze. */
  printf("%.2f + %.2f == %.2f.\n", 2.0, 3.0, 2.0 + 3.0);
  printf("%.2f - %.2f == %.2f.\n", 2.0, 5.0, 2.0 - 5.0);
  printf("%.2f * %.2f == %.2f.\n", 2.0, 6.0, 2.0 * 6.0);
  printf("%.2f / %.2f == %.2f.\n\n", 6.0, 2.0, 6.0 / 2.0);

  printf("%.2f + %.2f == %.2f.\n", 0.4, 0.35, 0.4 + 0.35);
  printf("%.2f - %.2f == %.2f.\n", 0.5, 0.37, 0.5 - 0.37);
  printf("%.2f * %.2f == %.2f.\n", 3.0, 0.25, 3.0 * 0.25);
  printf("%.2f / %.2f == %.2f.\n", 6.0, 2.0, 6.0 / 2.0);
  printf("%.2f / %.2f == %.2f.\n\n", 5.0, 2.0, 5.0 / 2.0);

  /* WAŻNE. Dla C symbol „2” oznacza liczbę całkowitą o wartości
   * dwa, a „2.0” liczbę ZMIENNOPRZECINKOWĄ o wartości dwa. To nie są tylko
   * słowa, bo jak zapomnimy o tym to będzie boleć, patrz niżej.
   *
   * Bo komputer to durna maszyna. */

  printf("Co w C może pójść nie tak? W przybliżeniu, wszystko.\n");
  printf("%d / %d == %d.\n", 5, 2, 5 / 2);
  printf("%.2f / %.2f == %.2f.\n\n", 5.0, 2.0, 5.0 / 2.0);

  printf("Dzielenie przez zero to nie jest nigdy dobry pomysł.\n");
  /* printf("1 / 0 == %d.\n", 1 / 0); */

  /* printf("1.0 / 0.0 == %.2f.\n", 1.0 / 0.0); */
  printf("Jak dzielenie pójdzie źle to można się spodziewać dziwnych "
	 "rezultatów jak:\n");
  printf("inf - infinity, nieskończoność;\n");
  printf("NaN - Not a Number, to co wyszło nie jest liczbą.\n");





  return 0;
}
