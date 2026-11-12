#include <stdio.h>

int main() {
  /* Liczenie bezpośrednio na liczbach jest niewygodne, dlatego ludzkość
   * wymyśliła zmienne symboliczne. Oto jak one działają w języku C. */

  int liczbaCalkowita1 = 3;

  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);

  /* W C by używać zmiennej musimy najpierw najpierw ją zdefiniować.
   * Robimy to przez podanie typu, a potem nazwy, następnie możemy przypisać
   * jej wartość.
   *
   * int - typ zmiennej „standard integer”, „standardowa liczba całkowita”.
   * intVar1 - nazwa zmiennej, równie dobrze można napisać „czerwonyKapturek”,
   * ale lepiej by nazwa zmiennej coś nam mówiła.
   *
   * Linia
   * int liczbaCalkowita1 = 3;
   * definiuje nam zmienną o typie „int” („standard integer”), nazwie
   * liczbaCalkowita1 i wartości 3.
   *
   * Mówiąc szczerze, definiowanie zmiennych w C to nie jest nic specjalnie
   * fajnego, szczególnie, gdy typy robią się bardziej złożone. */

  /* Dla wlasnego dobra, w nazwach zmiennych najlepiej jest NIGDY nie używać
   * liter spoza alfabetu angielskiego. Czyli dopuszczone są następujące
   * litery

  /* Nazwa zmiennej „liczbCalkowita1” wzięła się stąd, że jest to zmienna,
   * która służy do tego, aby zilustrować działanie liczb całkowitych w C.
   * Liczbę jeden na końcu nazwy dodaliśmy, bo często będziemy potrzebować
   * kilku zmiennych przechowujących liczby całkowite, dobrze jest więc je
   * ponumerować.
   *
   * Po powiedzeniu tego wszystkiego, widzimy, że nazwa „liczbaCalkowita1”
   * jakoś oddaje sens tej zmiennej.
   *
   * W informatycznym języku polskim zamiast mówić „Zmienna typu
   * liczby całkowitej/całkowitego.”, zwykle mówi się „Zmienna typu int.”.
   * Każdy zrozumie dlaczego. */





  return 0;
}
