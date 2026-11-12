#include <stdio.h>

/* Ten problem pochodzi z klasycznej książki o języku C autorstwa Kernighana
 * i Ritchiego „Język ANSI C” (K&R), co usprawiedliwia zajęciem się nim
 * tutaj. Stanowi dobrą ilustracji tego, jak podstępne potrafi być
 * programowanie. */

int main() {

  /* Program ten przelicza temperaturę w stopniach Fahrenheita na temperaturę
   * w skali Celsjusza według wzoru
   * tempCels = (5/9) * (tempFahr - 32)
   * Temperatura w skali Fahrenheita będzie przebiegać zakres 0, 20, 40, ...,
   * 300.
   *
   * Za książką K&R obliczenia przeprowadzimy najpierw za pomocą intów. */

  int tempCels = 0;
  int tempFahr = 0;
  int dolnaGranica = 0;
  int gornaGranica = 300;
  int tempKrok = 20;



  tempFahr = dolnaGranica;

  while (tempFahr <= gornaGranica) {
    tempCels = (5/9) * (tempFahr - 32);

    printf("%d F => %d C.\n", tempFahr, tempCels);

    tempFahr += tempKrok;
  }

  printf("\n" "Coś ewidentnie poszło nie tak.\n");

  /* Problem wynika z użytego przez nas wzoru
   * tempCels = (5/9) * (tempFahr - 32);
   * Ponieważ 5 i 9 to są inty, więc 5/9 == 0. Bo czemu życie miałoby być
   * proste? */





  return 0;
}
