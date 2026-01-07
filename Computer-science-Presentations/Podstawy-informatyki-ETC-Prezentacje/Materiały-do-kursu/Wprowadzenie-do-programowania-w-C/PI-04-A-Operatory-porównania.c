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
  int intVar1 = 1;
  int intVar2 = 2;

  printf("Warto przypomnieć operator porównania „==”.\n");
  printf("(1 == 1) == %d.\n", 1 == 1);
  printf("(1 == 2) == %d.\n\n", 1 == 2);

  printf("Operator „!=” sprawdza, czy obie strony mają RÓŻNE wartości.\n");
  printf("(1 != 1) == %d.\n", 1 != 1);
  printf("(1 != 2) == %d.\n\n", 1 != 2);

  printf("Operatory „<” sprawdza, czy po jego lewej stronie stoi liczba "
	 "mniejsza, niż po jego prawej stronie.\n");
  printf("(1 < 1) == %d.\n", 1 < 1);
  printf("(1 < 2) == %d.\n", 1 < 2);
  printf("(2 < 1) == %d.\n\n", 2 < 1);

  printf("Operator „<=” to operator „mniejsze bądź równe”. Zwraca "
	 "prawdę, jeśli liczba po jego lewej stronie jest mniejsza bądź "
	 "równa liczbie po jego prawej stronie.\n");
  printf("(1 <= 1) == %d.\n", 1 <= 1);
  printf("(1 <= 2) == %d.\n", 1 <= 2);
  printf("(2 <= 1) == %d.\n\n", 2 <= 1);

  printf("Operatory „>” sprawdza, czy po jego lewej stronie stoi liczba "
	 "większa, niż po jego prawej stronie.\n");
  printf("(1 > 1) == %d.\n", 1 > 1);
  printf("(1 > 2) == %d.\n", 1 > 2);
  printf("(2 > 1) == %d.\n\n", 2 > 1);

  printf("Operator „>=” to operator „większe bądź równe”. Zwraca "
	 "prawdę, jeśli liczba po jego lewej stronie jest większa bądź "
	 "równa liczbie po jego prawej stronie.\n");
  printf("(1 >= 1) == %d.\n", 1 >= 1);
  printf("(1 >= 2) == %d.\n", 1 >= 2);
  printf("(2 >= 1) == %d.\n\n", 2 >= 1);

  /* Jak widzimy, jeśli prawdą jest, że spełniony jest zadany warunek,
     to język C zwraca wartość 1. Jeśli dany warunek jest fałszywy, to
     język C zwraca wartość 0. */

  /* Operatory porównania można stosować między liczbami, między liczbami
   * i zmiennymi oraz między dwoma zmiennymi. Przykłady te powinny wyjaśnić
   * tą kwestię. */

  printf("Operatory porównania w sposób naturalny działają również "
	 "ze zmiennymi.\n");

  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  printf("(1 == intVar1) == %d.\n", 1 == intVar1);
  printf("(1 == intVar2) == %d.\n\n", 1 == intVar2);

  printf("(2 != intVar1) == %d.\n", 1 == intVar1);
  printf("(2 != intVar2) == %d.\n\n", 1 != intVar2);

  printf("(intVar1 == intVar2) == %d.\n", intVar1 == intVar2);
  printf("(intVar1 != intVar2) == %d.\n\n", intVar1 != intVar2);

  printf("(intVar1 < intVar2) == %d.\n", intVar1 < intVar2);
  printf("(intVar1 <= intVar2) == %d.\n", intVar1 <= intVar2);
  printf("(intVar1 > intVar2) == %d.\n", intVar1 > intVar2);
  printf("(intVar1 >= intVar2) == %d.\n", intVar1 >= intVar2);





  return 0;
}
