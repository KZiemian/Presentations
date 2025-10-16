#include <stdio.h>

int main() {
  /* Człowiek często określa jednym słowem kilka różnych rzeczy i prawie nigdy
   * nie prowadzi to do problemów.
   * „Trzeba naoliwić zamek.”
   * „Na pobliskim wzgórzu stał stary zamek.”
   * Z łatwością odgadujemy co słowo „zamek” oznacza w tych zdaniach. Jednak
   * komputer to tępa maszyna, której trzeba wyjaśnić dokładnie co się
   * dzieje, bo inaczej zgłupieje. */

  /* Natrafiamy na ten sam problem, gdy chcemy przenieść naszą notację
   * matematyczną do komputera. Wówczas orientujemy się, że symbolu „=”
   * używamy w dwóch znaczeniach.
   * 1) Przypisania wartości. Zapis „x = 3.0” oznacza, że za „x” mamy wszędzie
   * podstawić liczbę 3.0.
   * 2) Porównania. Zapis „0 = x + 2.0”, oznacza, że porównujemy
   * prawą stronę z wartością 0.0 i szukamy takiej wartości zmiennej x,
   * żeby to było prawdą.
   *
   * Jeśli to wydaje się zawiłe, to mam nadzieję, że poniższe przykłady to
   * lepiej wyjaśnią. */

  int intVar1 = 2;
  /* To jest PRZYPISANIE. Od teraz zmienna intVar1 zawiera liczbę 2. */

  printf("Wartość zmiennej intVar1 to %d.\n", intVar1);

  /* Pytanie, jak sprawdzić, czy zmienna intVar1 zawiera liczbę 3?
   * NIE możemy napisać
   * intVar1 = 3
   * gdyż to by oznaczało, że PRZYPISUJEMY zmiennej intVar1 wartość 3
   * (zmieniamy wartość tej zmiennej). Komputer nie jest na tyle subtelny,
   * żeby samemu zrozumieć różnicę między porównaniem, a przypisaniem,
   * potrzebuje być o tym jawnie poinformowany. W języku C by porównać
   * dwie wartości używamy symbolu „==”:
   * intVar1 == 3
   * Powyższa linia sprawdza, czy wartość przechowywana przez zmienną
   * intVar1 jest równa 3. Jeśli jest to prawdą, to porównanie zwraca
   * wartość 1. Jeśli jest to fałszem, to zwraca 0. Dlaczego obowiązują takie
   * głupie zasady, o tym powiemy później. Bo czemu życie miałoby być
   * proste? */
  printf("intVar1 == 3: %d.\n\n", intVar1 == 3);

  intVar1 = 3;
  printf("Wartość zmiennej intVar1 to %d.\n", intVar1);

  printf("intVar1 == 3: %d.\n", intVar1 == 3);





  return 0;
}
