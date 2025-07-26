#include <stdio.h>

int main() {
  /* Liczenie bezpośrednio na liczbach jest niewygodne, dlatego ludzkość
     wymyśliła zmienne symboliczne. Oto jak działają one w języku C. */

  int intVar1 = 3;

  printf("intVar1 == %d.\n", intVar1);

  /* W C by używać zmiennej musimy najpierw najpierw ją zdefiniować.
     Robimy to przez podanie typu, a potem nazwy, następnie możemy przypisać
     jej wartość.

     int - typ zmiennej „standard integer”, „standardowa liczba całkowita”.
     intVar1 - nazwa zmiennej, równie dobrze można napisać „smerfMaruda”,
     ale lepiej by nazwa zmiennej coś nam mówiła.

     Linia
     int intVar1 = 3;
     definiuje nam zmienną o typie „int” („standard integer”), nazwie
     intVar1 i wartości 3.

     Mówiąc szczerze, definiowanie zmiennych w C to nie jest nic specjalnie
     fajnego. */

  /* „intVar1” to skrót od „integer variable number 1”.
     Przy czym w informatycznym języku polskim zamiast mówić „Zmienna
     typu liczby całkowitej/całkowitego.”, zwykle mówi się
     „Zmienna typu int.”. Każdy zrozumie dlaczego. */





  return 0;
}
