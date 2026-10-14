#include <stdio.h>

int main() {
  /* Liczenie bezpośrednio na liczbach jest niewygodne, dlatego ludzkość
   * wymyśliła zmienne symboliczne. Oto jak one działają w języku C. */

  int intVar1 = 3;

  printf("intVar1 == %d.\n", intVar1);

  /* W C by używać zmiennej musimy najpierw najpierw ją zdefiniować.
   * Robimy to przez podanie typu, a potem nazwy, następnie możemy przypisać
   * jej wartość.
   *
   * int - typ zmiennej „standard integer”, „standardowa liczba całkowita”.
   * intVar1 - nazwa zmiennej, równie dobrze można napisać „czerwonyKapturek”,
   * ale lepiej by nazwa zmiennej coś nam mówiła.
   *
   * Linia
   * int intVar1 = 3;
   * definiuje nam zmienną o typie „int” („standard integer”), nazwie
   * intVar1 i wartości 3.
   *
   * Mówiąc szczerze, definiowanie zmiennych w C to nie jest nic specjalnie
   * fajnego, szczególnie, gdy typy robią się bardziej złożone. */

  /* „intVar1” to skrót od „integer variable number 1”. Nazwa bierze się stąd,
   * że jest to zmienna, która służy do tego, aby zilustrować działanie
   * liczb całkowitych w C. Liczbę jeden na końcu nazwy dodaliśmy, bo często
   * będziemy potrzebować kilku zmiennych przechowujących liczby całkowite,
   * dobrze jest więc je ponumerować.
   *
   * Po powiedzeniu tego wszystkiego, widzimy, że nazwa intVar1  jakoś
   * oddaje sens tej zmiennej.
   *
   * W informatycznym języku polskim zamiast mówić „Zmienna typu
   * liczby całkowitej/całkowitego.”, zwykle mówi się „Zmienna typu int.”.
   * Każdy zrozumie dlaczego. */





  return 0;
}
