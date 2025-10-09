#include <stdio.h>

/* Poznaliśmy już jeden operator porównania „==”, który sprawdza czy
 * wartości po jego obu stronach są równe. Język C dysponuje większą liczbą
 * operatorów porównania, z których należy wymienić następujące.
 * != -- sprawdza, czy lewa strona ma wartość RÓŻNĄ od prawej.
 * < -- sprawdza, czy lewa strona jest mniejsza od prawej.
 * <= -- sprawdza, czy lewa strona jest mniejsza bądź równa prawej.
 * > -- sprawdza, czy lewa strona jest większa od prawej.
 * >= -- sprawdza, czy lewa strona jest większa bądź równa prawej.
 *
 * Ich działanie zademonstrujemy na poniższych przykładach. */

int main() {
  int intVar1 = 0;
  int intVar2 = 1;

  /* Warto przypomnieć operator porównania „==”. */
  printf("(1 == 1) == %d.\n", 1 == 1);
  printf("(1 == 2) == %d.\n\n", 1 == 2);

  printf("(1 != 1) == %d.\n", 1 != 1);
  printf("(1 != 2) == %d.\n\n", 1 != 2);

  printf("(1 < 1) == %d.\n", 1 < 1);
  printf("(1 < 2) == %d.\n", 1 < 2);
  printf("(1 < 0) == %d.\n\n", 1 < 0);

  printf("(1 <= 1) == %d.\n", 1 <= 1);
  printf("(1 <= 2) == %d.\n", 1 <= 2);
  printf("(1 <= 0) == %d.\n\n", 1 <= 0);

  printf("(1 > 1) == %d.\n", 1 > 1);
  printf("(1 > 2) == %d.\n", 1 > 2);
  printf("(1 > 0) == %d.\n\n", 1 > 0);

  printf("(1 >= 1) == %d.\n", 1 >= 1);
  printf("(1 >= 2) == %d.\n", 1 >= 2);
  printf("(1 >= 0) == %d.\n\n", 1 >= 0);

  /* Jak widzimy, jeśli prawdą jest, że spełniony jest zadany warunek,
     to język C zwraca wartość 1. Jeśli dany warunek jest fałszywy, to
     język C zwraca wartość 0. */

  /* Operatory porównania można stosować między liczbami, między liczbami
   * i zmiennymi oraz między dwoma zmiennymi. Przykłady te powinny wyjaśnić
   * tą kwestię. */

  printf("Operatory porównania w działaniu ze zmiennymi.\n");

  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  printf("(0 == intVar1) == %d.\n", 0 == intVar1);
  printf("(0 == intVar2) == %d.\n\n", 0 == intVar2);

  printf("(0 != intVar1) == %d.\n", 0 == intVar1);
  printf("(0 != intVar2) == %d.\n\n", 0 != intVar2);

  printf("(intVar1 == intVar2) == %d.\n", intVar1 == intVar2);
  printf("(intVar1 != intVar2) == %d.\n", intVar1 != intVar2);





  return 0;
}
