#include <stdio.h>

int main() {
  /* Przykłady korzystania ze zmiennych w C. W dużej mierze, korzystamy
   * z nich tak samo jak na kartce papieru. */
  int intVar1 = 0;
  int intVar2 = 1;

  printf("Początkowe wartości zmiennych.\n");
  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  printf("Zmieniamy wartość zmiennych wykonując operacje (intVar1 = 3;) "
	 "i (intVar5 = 5;).\n");
  intVar1 = 3;
  intVar2 = 5;

  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  printf("Dla prostszego zrozumienia co się dzieje, kod operacji w całości "
	 "zapisujemy w nawiasach okrągłych. Proszę zobaczyć w kodzie, "
	 "jak użycie tych operacji dokładnie wygląda.\n\n");

  printf("Za pomocą operacji (intVar1 = intVar2;), zmieniamy wartość "
	 "przechowywaną w zmiennej intVar1, na tą jaką w tym momencie "
	 "przechowuje zmienna intVar2.\n");
  intVar1 = intVar2;

  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  printf("Wartość zmiennych możemy zmieniać dowolną liczbę razy.\n");
  printf("Wykonujemy (intVar1 = -1;) i (intVar2 = -3;).\n");
  intVar1 = -1;
  intVar2 = -3;

  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);





  return 0;
}
