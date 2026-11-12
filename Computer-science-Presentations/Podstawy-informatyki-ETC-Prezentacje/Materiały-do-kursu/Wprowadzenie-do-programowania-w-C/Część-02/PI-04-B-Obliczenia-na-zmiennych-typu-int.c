#include <stdio.h>

int main() {
  int liczbaCalkowita1 = 3;
  int liczbaCalkowita2 = 5;
  /* W tym programie, by zilustrować działanie języka C, potrzebujemy dwóch
   * zmiennych typu int. Dlatego nazywamy je
   * liczbaCalkowita1 -- liczba całkowita numer 1,
   * liczbaCalkowita2 -- liczba całkowita numer 2. */

  /* Zmiennych używa się do obliczeń (prawie) tak samo jak na kartce
   * papieru. */

  /* Język C jest zwykle nieczuły na dodatkowe białe znaki, takie jak spacje,
   * tabulatory i nowe linie, czego przykład widać poniżej. */

  printf("Cztery działania arytmetyczne na zmiennych typu int.\n");
  printf("%d + %d == %d.\n", liczbaCalkowita1, liczbaCalkowita2,
	 liczbaCalkowita1 + liczbaCalkowita2);
  printf("%d - %d == %d.\n", liczbaCalkowita1, liczbaCalkowita2,
	 liczbaCalkowita1 - liczbaCalkowita2);
  printf("%d * %d == %d.\n", liczbaCalkowita1, liczbaCalkowita2,
	 liczbaCalkowita1 * liczbaCalkowita2);
  printf("%d / %d == %d.\n\n", liczbaCalkowita1, liczbaCalkowita2,
	 liczbaCalkowita1 / liczbaCalkowita2);

  printf("%d / %d == %d. Bo czemu życie miałoby być proste?\n\n",
	 liczbaCalkowita1, liczbaCalkowita2,
	 liczbaCalkowita1 / liczbaCalkowita2);

  printf("Operatora modulo %% można używać bezpośrednio z liczbami "
	 "typu int, jak i ze zmiennymi typu int.\n");
  printf("%d %% %d == %d.\n", liczbaCalkowita1, liczbaCalkowita2,
	 liczbaCalkowita1 % liczbaCalkowita2);





  return 0;
}
