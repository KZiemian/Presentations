#include <stdio.h>

/* Operacja
 * intVar1 += 1;
 * jest tak powszechna, że w języku C mamy na nią specjalne skrótowe
 * oznaczenie
 * intVar1++;
*/

int main() {
  int intVar1 = 0;

  printf("intVar1 == %d.\n\n", intVar1);

  printf("intVar1++;\n");
  intVar1++;

  printf("intVar1 == %d.\n\n", intVar1);

  printf("intVar1++;\n");
  intVar1++;

  printf("intVar1 == %d.\n\n", intVar1);

  printf("intVar1++;\n");
  intVar1++;

  printf("intVar1 == %d.\n\n\n\n", intVar1);

  /* Państwo już pewnie wiedzą, że życie nie może być proste, więc obok
   * intVar1++;
   * w języku C jest jeszcze
   * ++intVar1;
   * który też zwiększa wartość zmiennej o 1, ale różni się od poprzedniego
   * kodu, wpływem jak wywiera na populację demonów w naszym świecie i tym
   * podobne rzeczy. Nie chcę Państwa teraz obciążać tego typu obłędnymi
   * szczegółami. */

  /* Jeśli chcemy wartość zmiennej zmniejszyć o 1 to możemy napisać
   * intVar1--;
   * (Albo --intVar1; jeśli chcemy wpłynąć na populację demonów.) */

  printf("intVar1 == %d.\n\n", intVar1);

  printf("intVar1--;\n");
  intVar1--;

  printf("intVar1 == %d.\n\n", intVar1);

  printf("intVar1--;\n");
  intVar1--;

  printf("intVar1 == %d.\n\n", intVar1);

  printf("intVar1--;\n");
  intVar1--;

  printf("intVar1 == %d.\n\n", intVar1);


  /* Używanie 'intVar1++' i 'intVar1--' dla zmiennej typu int nie tworzy
   * problemów. Dla zmiennej typu float, każdy używa tych operatorów na
   * własną odpowiedzialność. */





  return 0;
}
