#include <stdio.h>

double linearFunction(double x) {
  return 2.0 * x + 1.0;
}

/* Definiowanie funkcji w języku C jest niestety trochę skomplikowane,
   a same definicje często mało czytelne, więc prześledźmy definicję
   naszej funkcji bardzo dokładnie.

   Nasza funkcja pobiera pewne argumenty i zwraca pewną wartość.
   double linearFunction(double x)
   Ta linia ma zawsze taką samą strukturę. Najpierw jest nazwa typu, która
   określa jaki jest typ wartości zwracanej przez funkcję.

   Innymi słowy jeśli w programie wpiszę
   linearFunction(1.0)
   to program obliczy wartość naszej funkcji dla argumentu 1.0 i ją zwróci,
   zaś zwrócona wartość jest typu double. Dokładniej wartość tej funkcji
   dla x == 1.0 wynosi 2.0 * x + 1.0 == 2.0 * 1.0 + 1.0 == 3.0 i jest ona
   typu double.

   double linearFunction(double x)
   Drugim elementem tej linii jest nazwa funkcji, w tym wypadku jest to
   „linearFunction”. Następnie mamy nawias okrągły, który określa jakie
   argumety pobiera ta funkcja. Dokładniej, w języku C musimy najpierw podać
   jaki jest typ argumentu jaki prześlemy danej funkcji, później jaka jest
   jego nazwa wewnątrz funkcji. W naszym wypadku mamy argument o nazwie „x”
   i typie double.

   Później mamy ciało funkcji (ang. body of function), który zawiera kod,
   który oblicza zwracaną wartość. W naszym wypadku składa się z jednej
   linii kodu
   return 2.0 * x + 1.0;
   Jej sens jest następujący. Angielskie słowo „return” można tłumaczyć
   jako „zwróć”, linia ta zaś ma następujący sens. Weź przesłany do funkcji
   argument, oznaczany jako x, następnie oblicz dla niego wartość
   wyrażenie 2.0 * x + 1.0 i zwróć je jako wartość funkcji o typie double.
   Mówiliśmy już o tym omawiając linię
   linearFunction(1.0)

   Bo czemu życie miałoby być proste? */

int main() {
  printf("linearFunction(%.2f) = %.3f.\n", 1.0, linearFunction(1.0));
  printf("lineraFunction(%.2f) = %.3f.\n", 2.0, linearFunction(2.0));
  printf("lineraFunction(%.2f) = %.3f.\n", 3.0, linearFunction(3.0));

  /* Widzimy, że rzeczywiście, wszędzie gdzie wywołujemy funkcję
     linearFunction z odpowiednim argumentem, zwrócona zostaje odpowiednia
     wartość. */





  return 0;
}
