#include <stdio.h>

int main() {
  /* Krótkie zasady rządzące nazwami zmiennych. Nazwa zmiennej w C składa się
     z dużych i małych liter alfabetu ANGIELSKIEGO (programowanie wymyślili
     głównie Amerykanie), cyfr i znaku „_”. Zasady są takie
     1) Duże i małe litery to różne symbole, więc „intVar1” i „intvar1”
     to dwie RÓŻNE zmienne.
     2) Nazwa zmiennej NIE może zaczynać się od cyfry.
     3) NIE wolno zacząć nazwy zmiennej od symbolu „_”, chyba że wiesz
     co to oznacza i tego chcesz. */
  int intVar1 = 0;
  int intvar1 = 1;

  printf("intVar1 == %d.\n", intVar1);
  printf("intvar1 == %d.\n", intvar1);





  return 0;
}
