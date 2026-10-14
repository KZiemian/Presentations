#include <stdio.h>
/* Wyrażenie (ang. expression) coś robi i zwraca wartość. Orzeczenie (
   ang. statement) tylko coś robi. */

int main() {
  int intVar1 = 0;

  /* Typowym przykładem wyrażeń, są wyrażenia arytmetyczne. Wyrażenie
   * 1 + 2
   * wykonuje operację dodawania i zwraca jej wynik. */
  printf("Wyrażenie dodawania.\n");
  printf("1 + 2 == %d.\n\n", 1 + 2);

  /* Ponieważ wyrażenie zwraca wartość, może ono stać po prawej stronie
   * instrukcji przypisania. Do zmiennej zostanie przypisana wartość,
   * zwrócona przez to wyrażenie. */
  intVar1 = 1 + 2;

  printf("Wyrażenie może stać po prawej stronie instrukcji przypisania.\n");
  printf("intVar1 = 1 + 2;\n");
  printf("intVar1 == %d.\n", intVar1);

  /* Instrukcja sterująca if jest orzeczeniem (ang. if statement), więc ona
   * coś robi, ale nic nie zwraca. Z tego powodu kod poniżej sprawi, że język
   * C zwariuje. */

  /* intVar1 = if (1 < 2) { */
  /*   printf("W oczywisty sposób, prawda.\n"); */
  /* } */





  return 0;
}
