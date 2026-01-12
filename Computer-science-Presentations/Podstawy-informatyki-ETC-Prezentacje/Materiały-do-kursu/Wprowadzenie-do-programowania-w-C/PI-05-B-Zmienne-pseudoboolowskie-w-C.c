#include <stdio.h>

int main() {
  /* Język C jest tak stary, że nie ma zmiennych boolowskich z prawdziwego
   * zdarzenia. Ponieważ fałszem w C jest 0, a prawdą 1, więc do
   * przechowywania wartości boolowskich możemy (a niekiedy musimy),
   * używać zmiennych typu int. */
  int boolVar1 = 1;

  printf("Zmienna pseudoboolowska typu int.\n");
  printf("boolVar1 == %d.\n", boolVar1);

  /* Ten kod w języku C jest całkowicie poprawny. Bo czemu życie miałoby być
   * proste? */
  boolVar1 = 7 * (1 < 2) + 3 * (1 < 0);

  printf("Ponieważ dla C fałsz to 0, a prawda to 1, więc ten kod jest "
	 "poprawny.\n");
  printf("boolVar1 = 7 * (1 < 2) + 3 * (1 < 0);\n");
  printf("boolVar1 == %d.\n", boolVar1);
  printf("Bo czemu życie miałoby być proste?\n");





  return 0;
}
