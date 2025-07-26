#include <stdio.h>

int main() {
  /* Narzędzia do programownia, które poznaliźmy do tej pory, są dość
     ograniczone i nie pozwalają na wiele. Potrzebujemy więc poznać ich
     więcej.

     Nie tylko w C, ale ogólniej w programowaniu, istnieją instrukcje
     sterujące (ang. control statements). Czemu nazywają się „instrukcjami”,
     to kiedyś sobie powiemy. */

  /* To co chcemy umieć, to sterować programem. Konkretniej, chcemy by program
     sprawdził, czy warunek „condition” jest prawdziwy, jeśli tak to zrób A.
     Jeśli „condition” jest fałszywy, to zrób B.

     By to zademonstrować użyjemy nierówności między liczbami, bo jest
     to coś, co jest proste w zrozumieniu. */

  int intVar1 = 1;

  if (intVar1 < 5) {
    /* Jeśli (intVar1 < 5) jest prawdą, to zostanie zrobione to. */
    printf("intVar1 = %d, jest to mniej niż 5.\n", intVar1);
  } else {
    /* Jeśli (intVar1 < 5) nie jest prawdziwe, to zostanie zrobione to. */
    printf("intVar1 = %d, jest to liczba równa lub większa od 5.\n",
	   intVar1);
  }





  return 0;
}
