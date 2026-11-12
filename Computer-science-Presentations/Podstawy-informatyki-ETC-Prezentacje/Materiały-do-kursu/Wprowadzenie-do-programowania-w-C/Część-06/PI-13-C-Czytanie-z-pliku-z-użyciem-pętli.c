#include <stdio.h>



int main() {

  /* Trochę inny przykład czytania z liku. W pliku "PI-13-D-Plik-z-danymi.dat"
   * pierwsza kolumna reprezentuje wartość czasu, dwie następne wartość
   * pierwszego i drugiego sygnału. Dzięki pętli możemy w prosty sposób
   * odczytać te wartości z pliku. */

  int liczbaLiniiDoPrzeczytania = 100;
  double czas = 0.0;
  double sygnal1 = 0.0;
  double sygnal2 = 0.0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-13-E-Plik-z-danymi.dat", "r");

  for (int i = 0; i < liczbaLiniiDoPrzeczytania; i++) {
    fscanf(wskaznikDoPlikuZDanymi, "%lf %lf %lf", &czas, &sygnal1,
	   &sygnal2);

    printf("czas == %.2f, sygnal1 == %.4f, sygnal2 == %.2f.\n",
	   czas, sygnal1, sygnal2);
  }



  /* Proszę pamiętać, żeby po zakończeniu korzystania z pliku, należy go
   * zamknąć. */

  fclose(wskaznikDoPlikuZDanymi);





  return 0;
}
