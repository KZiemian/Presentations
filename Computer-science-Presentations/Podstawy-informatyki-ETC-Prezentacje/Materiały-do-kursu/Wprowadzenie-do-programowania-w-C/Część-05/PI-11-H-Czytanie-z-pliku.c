#include <stdio.h>



int main() {
  /* Z tego samego pliku możemy czytać tak liczby całkowite, jak
   * i zmiennoprzecinkowe. A także inne typy danych, ale na razie
   * ograniczmy się do tych. */

  int liczbaCalkowita1 = 0;
  double float64Var1 = 0.0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-11-I-Plik-z-danymi.dat", "r");



  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Pierwsza liczba całkowita z pliku: %d.\n", liczbaCalkowita1);



  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Druga liczba całkowita z pliku: %d.\n", liczbaCalkowita1);



  fscanf(wskaznikDoPlikuZDanymi, "%lf", &float64Var1);

  printf("Pierwsz liczba zmiennoprzecinkowa z pliku: %.2f.\n",
	 float64Var1);



  fscanf(wskaznikDoPlikuZDanymi, "%lf", &float64Var1);

  printf("Druga liczba zmiennoprzecinkowa z pliku: %.2f.\n",
	 float64Var1);



  fclose(wskaznikDoPlikuZDanymi);





  return 0;
}
