#include <stdio.h>

/* Zobaczy co by się stało, gdybyśmy pracując tylko na intach, przeliczyli
   najpierw stopnie Fahrenheita na Celsjusza, a potem z Celsjusza ponownie
   na Fahrenheita.

   Z wzoru
   tempCels = 5 * (tempFahr - 32) / 9;
   otrzymujemy wzór przeliczający temperaturę w stopniach Celsjusza
   na temperaturę w stopniach Fahrenheita:
   tempFahr = 9 * tempCels / 5 + 32;
*/

int main() {
  int tempCels = 0;
  int tempFahr = 0;
  int lowerBound = 0;
  int upperBound = 300;
  int tempStep = 20;
  int tempFahrComputed = 0;

  /* Te zmienne będą nam potrzebne za chwilę. */

  double tempCelsFloat = 0.0;
  double tempFahrFloat = 0.0;
  double lowerBoundFloat = 0.0;
  double upperBoundFloat = 300.0;
  double tempStepFloat = 20.0;
  double tempFahrComputedFloat = 0.0;



  tempFahr = lowerBound;

  while (tempFahr <= upperBound) {
    tempCels = 5 * (tempFahr - 32) / 9;
    tempFahrComputed = 9 * tempCels / 5 + 32;

    printf("%d F => %d C => %d F.\n", tempFahr, tempCels, tempFahrComputed);


    tempFahr += tempStep;
  }

  printf("\nPorównajmy te wyniki z tymi otrzymanymi za pomocą obliczeń "
	 "na liczba zmiennoprzecinkowych.\n");

  tempFahrFloat = lowerBoundFloat;

  while (tempFahrFloat <= upperBoundFloat) {
    tempCelsFloat = 5.0 * (tempFahrFloat - 32.0) / 9.0;
    tempFahrComputedFloat = 9.0 * tempCelsFloat / 5.0 + 32.0;

    printf("%.2f F => %.2f C => %.2f F.\n", tempFahrFloat, tempCelsFloat,
	   tempFahrComputedFloat);


    tempFahrFloat += tempStepFloat;
  }

  /* Widzą Państwo, że obliczenia na liczbach zmiennoprzecinkowych są dużo
     dokładniejsze. Czemu więc użyliśmy intów? Bo inty w wielu wypadkach
     są lepszed od floatów, ten zaś przykład ilustruje, problemy na jakie
     możemy używając ich natrafić. */





  return 0;
}
