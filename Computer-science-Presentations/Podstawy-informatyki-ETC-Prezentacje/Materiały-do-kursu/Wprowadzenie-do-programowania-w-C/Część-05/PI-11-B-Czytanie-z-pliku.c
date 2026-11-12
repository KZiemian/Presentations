#include <stdio.h>



int main() {

  /* Za pomocą jednej funkcji fscanf() możemy odczytać kilka wartości,
   * na raz. */

  int liczbaCalkowita1 = 0;
  int liczbaCalkowita2 = 0;
  int liczbaCalkowita3 = 0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-11-C-Plik-z-danymi.dat", "r");



  fscanf(wskaznikDoPlikuZDanymi, "%d %d %d",
	 &liczbaCalkowita1, &liczbaCalkowita2, &liczbaCalkowita3);

  printf("Pierwsze trzy liczby z pliku: %d, %d, %d.\n",
	 liczbaCalkowita1, liczbaCalkowita2, liczbaCalkowita3);

  fclose(wskaznikDoPlikuZDanymi);





  return 0;
}
