#include <stdio.h>

int main() {
  int intVar1 = 2;
  int intVar2 = 3;

  /* To wywołanie jest wcześniej, niż kompilator otrzyma informacje
     o funkcji. */
  printf("simpleFunction(%d, %d) == %d.\n", intVar1, intVar2,
	 simpleFunction(intVar1, intVar2));





  return 0;
}

int simpleFunction(int intVar1, int intVar2) {
  return 3 * intVar1 + 5;
}

/* Ten kod nie jest porprawny, choć kompilator może go zaakceptować, jest
   to jednak igranie z ogniem. Reguły języka C mówią bowiem, że kompilator
   musi otrzymać pewne informacje o funkcji, zanim ją po raz pierwszy wywoła.

   To jest znowu zaszłość historyczna. Kod tego typu byłby poprawny w nowszych
   językach takich jak Go, czy Rust, ale C jest naprawdę starym językiem
   i pewnych rzeczy w nim już zwyczajnie nie można zmienić. */
