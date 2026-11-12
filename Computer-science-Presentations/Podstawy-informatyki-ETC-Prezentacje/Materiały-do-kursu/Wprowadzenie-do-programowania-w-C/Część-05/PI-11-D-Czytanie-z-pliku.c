#include <stdio.h>



int main() {
  /* Jak konkretnie dane są rozłożone w poszczególny liniach pliku, nie jest
   * wielkim problemem. */

  int liczbaCalkowita1 = 0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-11-E-Plik-z-danymi.dat", "r");



  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Pierwsza liczba z pliku: %d.\n", liczbaCalkowita1);



  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Druga liczba z pliku: %d.\n", liczbaCalkowita1);



  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Trzecia liczba z pliku: %d.\n", liczbaCalkowita1);



  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Czwarte liczba z pliku: %d.\n", liczbaCalkowita1);



  fclose(wskaznikDoPlikuZDanymi);

  /* Już czytanie czterech liczb z pliku jest zadaniem żmudnym, a wyobraźmy
   * sobie, że mamy polik z tyciącami, czy millionami liczb!!! Wówczas
   * praca z takim plikiem za pomocą poznanych do tej pory narzędzi staje się
   * niemożliwa.
   *
   * Problem pracy z takimi dużymi plikami rozwiązują pętle, jednak zanim
   * o nich powiemy, to omówimy jeszcze trochę czytanie z plików. */







  return 0;
}
