#include <stdio.h>

/* Za K&R problem ten rozwiążemy w pierwszym kroku poprzez przepisanie
 * wzoru jako
 * 5 * (tempFahr - 32) / 9;
 * Dlaczego to może pomóc? Ten wzór można zapisać jawniej jako
 * (5 * (tempFahr - 32)) / 9;
 * Jeśli więc liczba 5 * (tempFahr - 32) jest odpowiednio większa od 9,
 * utrata części dziesiętnej przy dzieleniu nie powinna TAK BARDZO zmienić
 * wyniku. */

int main() {
  int tempCels = 0;
  int tempFahr = 0;
  int dolnaGranica = 0;
  int gornaGranica = 300;
  int tempKrok = 20;



  tempFahr = dolnaGranica;

  while (tempFahr <= gornaGranica) {
    tempCels = 5 * (tempFahr - 32) / 9;
    printf("%d F => %d C.\n", tempFahr, tempCels);

    tempFahr += tempKrok;
  }





  return 0;
}
