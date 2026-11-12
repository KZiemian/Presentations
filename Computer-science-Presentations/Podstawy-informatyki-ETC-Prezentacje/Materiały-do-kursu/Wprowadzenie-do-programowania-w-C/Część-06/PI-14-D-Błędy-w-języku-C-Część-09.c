#include <stdio.h>



int main() {
  printf("\n" "Porównajmy wynik powstały z przeliczania stopnia Fahrenheita "
	 "na Celsjusza, z tą samą operacją, wykonaną za pomocą liczb "
	 "zmiennoprzecinkowych, który to wynik powinien być praktycznie "
	 "równy dokładnej wartości.\n\n");

  int tempCelsInt = 0;
  int tempFahrInt = 0;
  int dolnaGranicaInt = 0;
  int gornaGranicaInt = 300;
  int tempKrokInt = 20;

  double tempCelsFloat = 0.0;
  double tempFahrFloat = 0.0;
  double tempKrokFloat = 20.0;



  tempFahrInt = dolnaGranicaInt;
  tempFahrFloat = 0.0;

  while (tempFahrInt <= gornaGranicaInt) {
    tempCelsInt = 5 * (tempFahrInt - 32) / 9;
    tempCelsFloat = 5.0 * (tempFahrFloat - 32.0) / 9.0;

    /* Tutaj równie dobrze można napisać
     * tempCelsFloat = (5.0 / 9.0) * (tempFahrFloat - 32.0);
     * Bo dzielenie w liczba zmiennoprzecinkowych 5.0 / 9.0 daje dobry
     * wynik, a nie 0.0. */

    printf("Int: %d F => %d C.\n" "Float: %.2f F => %.2f C.\n",
	   tempFahrInt, tempCelsInt, tempFahrFloat, tempCelsFloat);

    tempFahrInt += tempKrokInt;
    tempFahrFloat += tempKrokFloat;
  }

  /* printf("Wyniki bardzo dobrze zgadzają się ze sobą.\n"); */


  /* Te zmienne będą za chwilę potrzebne. */

  /* double tempCelsFloat64 = 0.0; */
  /* double tempFahrFloat64 = 0.0; */
  /* double lowerBoundFloat64 = 0.0; */
  /* double upperBoundFloat64 = 300.0; */
  /* double tempStepFloat64 = 20.0; */

  return 0;
}
