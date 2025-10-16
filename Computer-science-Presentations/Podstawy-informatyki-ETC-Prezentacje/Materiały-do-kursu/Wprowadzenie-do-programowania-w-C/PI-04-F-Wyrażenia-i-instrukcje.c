#include <stdio.h>

/* Wyrażenie coś robi i zwraca wartość. Instrukcja tylko coś robi. */

int main() {
  int intVar1 = 0;

  /* Typowym przykładem wyrażeń, są wyrażenia arytmetyczne. Wyrażenie
   * 1 + 2
   * wykonuje operację dodawania i zwraca jej wynik. */
  printf("1 + 2 == %d.\n", 1 + 2);

  /* Ponieważ wyrażenie zwraca wartość, może ono stać po prawej stronie
   * instrukcji przypisania. Do zmiennej zostanie przypisana wartość,
   * zwrócona przez to wyrażenie. */
  intVar1 = 1 + 2;

  printf("intVar1 == %d.\n", intVar1);

  /* Instrukcja sterująca if jest instrukcją, więc ona coś robi, ale nic
   * nie zwraca. Z tego powodu kod poniżej sprawi, że język C zwariuje. */

  /* intVar1 = if (1 < 2) { */
  /*   printf("W oczywisty sposób, prawda.\n"); */
  /* } */


  return 0;
}
