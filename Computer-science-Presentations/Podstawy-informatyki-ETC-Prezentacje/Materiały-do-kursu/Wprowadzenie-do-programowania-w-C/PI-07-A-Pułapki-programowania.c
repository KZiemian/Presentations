#include <stdio.h>

/* Ten problem pochodzi z klasycznej książki o języku C autorstwa
   Kernighana i Ritchiego „Język ANSI C” (K&R), co usprawiedliwia zajęciem się
   nim tutaj. Stanowi dobrą ilustracji tego, jak programowanie może być
   podstępne. */

int main() {
  /* Program ten przelicza temperaturę w stopniach Fahrenheita na temperaturę
     w skali Celsjusza według wzoru
     tempCels = (5/9) * (tempFahr - 32)
     Temperatura w skali Fahrenheita będzie przebiegać zakres 0, 20, 40, ...,
     300. */

  /* Za książką K&R obliczenia przeprowadzimy najpierw za pomocą intów. */
  int tempCels = 0;
  int tempFahr = 0;
  int lowerBound = 0;
  int upperBound = 300;
  int tempStep = 20;

  /* Te zmienne będą potrzebne za chwilę. */
  double tempCelsFloat = 0.0;
  double tempFahrFloat = 0.0;
  double lowerBoundFloat = 0.0;
  double upperBoundFloat = 300.0;
  double tempStepFloat = 20.0;



  tempFahr = lowerBound;

  while (tempFahr <= upperBound) {
    tempCels = (5/9) * (tempFahr - 32);

    printf("%d F => %d C.\n", tempFahr, tempCels);

    tempFahr += tempStep;
  }

  /* Coś ewidentnie poszło nie tak. */

  /* Problem wynika z użytego przez nas wzoru
     tempCels = (5/9) * (tempFahr - 32);
     Ponieważ 5 i 9 to są inty, więc 5/9 == 0. Bo czemu życie miałoby być
     proste?

     Za K&R problem ten rozwiąrzemy w pierwszym kroku poprzez przepisanie
     wzoru jako
     5 * (tempFahr - 32) / 9;
     Dlaczego to może pomóc? Ten wzór można zapisać jawniej jako
     (5 * (tempFahr - 32)) / 9;
     Jeśli więc liczba 5 * (tempFahr - 32) jest odpowiednio większa od 9,
     utrata części dziesiętnej przy dzieleniu nie powinna TAK BARDZO zmienić
     wyniku. */

  printf("\nDrugie podejście.\n");

  tempFahr = lowerBound;

  while (tempFahr <= upperBound) {
    tempCels = 5 * (tempFahr - 32) / 9;
    printf("%d F => %d C.\n", tempFahr, tempCels);

    tempFahr += tempStep;
  }



  printf("\nPorównajmy otrzymany wynik, z tym wyliczonym za pomocą liczb "
	 "zmiennoprzecinkowych, który powinien być bardzo bliski "
	 "dokładnej wartości.\n");

  tempFahrFloat = lowerBoundFloat;

  while (tempFahrFloat <= upperBoundFloat) {
    tempCelsFloat = 5.0 * (tempFahrFloat - 32.0) / 9.0;
    printf("%.2f F => %.2f C.\n", tempFahrFloat, tempCelsFloat);

    tempFahrFloat += tempStepFloat;
  }

  printf("Wyniki bardzo dobrze zgadzają się ze sobą.\n");





  return 0;
}
