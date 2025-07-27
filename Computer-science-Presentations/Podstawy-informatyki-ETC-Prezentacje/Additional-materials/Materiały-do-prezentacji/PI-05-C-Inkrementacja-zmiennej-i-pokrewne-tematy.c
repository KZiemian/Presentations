#include <stdio.h>

/* W programowaniu często napotykamy problem, że potrzebujemy zwiększyć
   wartość przechowywaną przez zmienną o zadaną wartość. By to zrobić
   w poprzednim przykładzie użyliśmy składni
   sumaLiczb = sumaLiczb + liczbaOdUżytkownika;
   Jednak ze względu na to jak często ten problem występuje, język C
   dysponuje operatorem „+=”, który zastosowanie prezentujemy poniżej. */

int main() {
  int intVar1 = 0;


  printf("intVar1 == %d.\n\n", intVar1);

  printf("Linia 'intVar1 += 3' jest równoważna 'intVar1 = intVar1 + 3'.\n");

  intVar1 += 3;

  printf("intVar1 == %d.\n\n", intVar1);


  printf("Linia 'intVar1 -= 1' jest równoważna 'intVar1 = intVar1 - 1'.\n");

  intVar1 -= 1;

  printf("intVar1 == %d.\n\n", intVar1);


  printf("Linia 'intVar1 *= 6' jest równoważna 'intVar1 = 6 * intVar1'.\n");

  intVar1 *= 6;

  printf("intVar1 == %d.\n\n", intVar1);


  printf("Linia 'intVar1 /= 3' jest równoważna 'intVar1 = intVar1 / 3'.\n");

  intVar1 /= 3;

  printf("intVar1 == %d.\n", intVar1);





  return 0;
}
