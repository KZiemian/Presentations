#include <stdio.h>

int main() {

  /* Przykłady korzystania ze zmiennych w C. W dużej mierze, korzystamy
   * z nich tak samo jak na kartce papieru. */

  int liczbaCalkowita1 = 0;
  int liczbaCalkowita2 = 1;

  printf("Początkowe wartości zmiennych.\n");
  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("liczbaCalkowita2 == %d.\n\n", liczbaCalkowita2);

  printf("Zmieniamy wartość zmiennych wykonując operacje "
	 "(liczbaCalkowita1 = 3;) i (liczbaCalkowita2 = 5;).\n");
  liczbaCalkowita1 = 3;
  liczbaCalkowita2 = 5;

  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("liczbaCalkowita2 == %d.\n\n", liczbaCalkowita2);

  printf("Dla prostszego zrozumienia co się dzieje, gdy wypisujemy kod "
	 "na ekranie, to kod danej operacji w całości zapisujemy "
	 "w nawiasach okrągłych. W kodzie programu możemy używać "
	 "nawiasów lub je pomijać, dla języka C nie robi to różnicy. "
	 "Proszę zobaczyć w kodzie programu, jak użycie tych operacji "
	 "tam wygląda.\n\n");

  printf("Za pomocą operacji (liczbaCalkowita1 = liczbaCalkowita2;), "
	 "zmieniamy wartość przechowywaną w zmiennej liczbaCalkowita1, na tą "
	 "jaką w tym momencie przechowuje zmienna liczbaCalkowita2.\n");

  liczbaCalkowita1 = liczbaCalkowita2;

  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("liczbaCalkowita2 == %d.\n\n", liczbaCalkowita2);

  printf("Wartość zmiennych możemy zmieniać dowolną liczbę razy.\n");
  printf("Wykonujemy (liczbaCalkowita1 = -1;) i (liczbaCalkowita2 = -3;).\n");
  liczbaCalkowita1 = -1;
  liczbaCalkowita2 = -3;

  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("liczbaCalkowita2 == %d.\n\n", liczbaCalkowita2);





  return 0;
}
