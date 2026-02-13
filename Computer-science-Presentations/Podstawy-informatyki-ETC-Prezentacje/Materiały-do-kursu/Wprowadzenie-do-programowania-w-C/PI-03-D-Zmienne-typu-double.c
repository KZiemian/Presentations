#include <stdio.h>

int main() {
  double float64Var1 = 0.5;
  /* Typ liczb zmiennoprzecinkowych, jakiego będziemy używać najczęściej,
   * to „double”, czytaj „dabl”. Dlaczego ten typ posiada w C tak dziwną
   * nazwę, wyjaśnimy trochę później.
   *
   * Nazwa naszej zmiennej „float64Var1” to skrót od „floating point number
   * on 64 bit, variable number 1”, czyli „zmienna przechowującą liczbę
   * zmiennoprzecinkową na 64 bitach, numer 1”. Ponieważ zmienna ta służy
   * nam do tego, żeby zobaczyć jak zmienne typu zmiennoprzecinkowego
   * na 64 bitach działają w C, nazwa ta jakoś oddaje jej sens. Ponownie,
   * dajemy jej numer 1, bo często będziemy potrzebować kilku zmiennych tego
   * konkretnego typu.
   *
   * W nazwie zmiennej zaznaczyliśmy, że liczba ta zajmuje w pamięci
   * 64 (2^6) bity, czyli 8 bajtów. Jest to ważne, gdy potrzebujemy
   * wiedzieć, z jaką dokładnością będą wykonywane obliczenia używające
   * konkretnej zmiennej. Dokładność obliczeń to jednak temat przekraczający
   * tematykę naszych spotkań, więc nie będziemy go dokładniej omawiać.
   * W nazwach zmiennych będziemy jednak przypominać o tym z jakim liczbami
   * zmiennoprzecinkowymi pracujemy. */

  printf("float64Var1 == %.2f.\n", float64Var1);

  /* Tak jak w przypadku intów, w języku polskim przyjęło się określać
   * liczby zmiennoprzecinkowe jako „floaty” lub „dable”.
   *
   * Oczywiście, życie nie może być proste i „float” jest nazwą bardziej
   * ogólną, a „dable” bardziej konkretną. Na tych zajęciach nie będziemy
   * nikogo karać za używanie ich jako synonimów. */





  return 0;
}
