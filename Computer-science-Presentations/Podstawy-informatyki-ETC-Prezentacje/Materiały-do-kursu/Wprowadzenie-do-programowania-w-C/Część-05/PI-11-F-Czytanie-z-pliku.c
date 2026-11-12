#include <stdio.h>



int main() {

  /* Funkcja fscanf() nie tylko z nazwy jest podobna do nieszczęsnej
   * funkcji scanf(). Również pewne jej funkcjonalności są podobne.
   * Przykładowo by odczytać liczbę typu double, potrzebujemy podać
   * nie „%f”, lecz „%lf” od „long floating-point number”. */

  double float64Var1 = 0.0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-11-G-Plik-z-danymi.dat", "r");



  fscanf(wskaznikDoPlikuZDanymi, "%lf", &float64Var1);

  printf("Pierwsza liczba z pliku: %.2f.\n", float64Var1);



  fscanf(wskaznikDoPlikuZDanymi, "%lf", &float64Var1);

  printf("Druga liczba z pliku: %.2f.\n", float64Var1);



  fscanf(wskaznikDoPlikuZDanymi, "%lf", &float64Var1);

  printf("Trzecia liczba z pliku: %.2f.\n", float64Var1);



  fclose(wskaznikDoPlikuZDanymi);







  return 0;
}
