#include <stdio.h>

/* Wprowadzimy teraz pewne nazewnictwo dla funkcji. */

/* Poniższy kod nazywamy DEFINICJĄ funkcji. Definicji funkcji określa
   jak się funkcja nazywa, jakie argumenty pobiera, jakie wartości zwraca
   i co robi. */
int simpleFunction(int intVar1, int intVar2) {
  /* Zawartość nawiasów wąsatych funkcji nazywamy CIAŁEM FUNKCJI
     (ang. function body). Określa ono co funkcja robi. */

  return 2.0 * intVar1 + intVar2;
}

/* Zwróćmy uwagę, że intVar1 i intVar2 NIE posiadają, żadnej wartości
   w definicji funkcji. Są one symbolami, które mówią, co funkcja ma zrobić
   z przesłanymi jej argumentami, ale czy możemy na podstawie definicji
   funkcji powiedzieć, jaką mają wartość? Nie.

   Dlatego też, często rozróżnia się PARAMETRY funkcji od jej ARGUMENTÓW.
   Parametrami są obecne w definicji funkcji zmienne takie jak intVar1
   i intVar2. Parametry same w sobie nie posiadają wartości. Są one
   symbolami, które mówią co należy zrobić z wartościami, które zostaną
   przekzane funkcji. */

int main() {
  int intVar1 = 0;

  /* Uruchomienie funkcji z konkretnymi wartościami jej argumentów, nazywamy
     WYWOŁANIEM FUNKCJI (ang. function call). */
  intVar1 = simpleFunction(0, 1);
  /* Jak można wywnioskować z tego co już mówiliśmy, ARGUMENTAMI funkcji
     nazywamy konkretne wartości przekazane jej w wywołaniu.

     W naszym przypadku w definicji funkcji mamy PARAMETRY intVar1 i intVar2,
     zaś w wywołaniu mamy ARGUMENTY 0 i 1. */

  printf("simpleFunction(0, 1) == %d.\n", intVar1);





  return 0;
}

/* Poza definicją funkcji istnieje w języku C też pokrewne pojęcie DEKLARACJI
   funkcji, zwanej niekiedy jej SYGNATURĄ. Dla naszej funkcji deklaracja ma
   postać:
   int simpleFunction(int intVar1, int intVar2);
   Deklaracje jest więc to definicji minus ciało funkcji. Inaczej mówiąc,
   deklaracja mówi jak się funkcja nazywa, jakie argumenty pobiera oraz
   co zwraca, ale nie mówi nam co funkcja robi.

   Ktoś mógłby uznać, że wprowadzanie tego pojęcia, to marnowanie sił
   intelektualnych na nic. Niestety, jest to dziedzictwo wieku języka C
   i pojęcia te są niezwykle ważne, gdy piszemy bardziej zaawansowane
   programy w języku C.

   Do tego tematu, niestety, będziemy musieli wrócić. */
