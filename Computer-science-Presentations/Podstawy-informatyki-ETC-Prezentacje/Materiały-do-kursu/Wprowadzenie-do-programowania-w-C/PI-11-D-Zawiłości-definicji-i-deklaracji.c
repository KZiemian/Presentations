#include <stdio.h>

int main() {
  int intVar1 = 2;

  /* To wywołanie funkcji jest wcześniej w kodzie, niż kompilator otrzyma
   * informacje o tym czym jest ta funkcja. */
  printf("simpleFunction(%d) == %d.\n", intVar1, simpleFunction(intVar1));





  return 0;
}

int simpleFunction(int intVar1) {
  return 3 * intVar1 + 5;
}

/* Ten kod nie jest poprawny, choć kompilator może go zaakceptować. Jest
 * to jednak igranie z ogniem, którego należy unikać za wszelką cenę. Reguły
 * języka C mówią bowiem, że kompilator musi otrzymać pewne informacje
 * o funkcji, zanim ją po raz pierwszy wywoła.
 *
 * To jest znowu zaszłość historyczna. Kod tego typu byłby poprawny w nowszych
 * językach takich jak Go, czy Rust, ale C jest naprawdę starym językiem
 * i pewnych rzeczy w nim już zwyczajnie nie można zmienić. */
