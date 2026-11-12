#include <stdio.h>



int main() {

  /* Rozpatrzmy jeszcze problem przeliczania stopni Fahrenheita na stopnie
   * Celsjusza i z powrotem, gdy wszystkie te liczby są wyrażone w liczbach
   * zmiennoprzecinkowych. */

  double tempCelsFloat = 0.0;
  double tempFahrFloat = 0.0;
  double dolnaGranicaFloat = 0.0;
  double gornaGranicaFloat = 300.0;
  double tempKrokFloat = 20.0;
  double tempFahrWyliczoneFloat = 0.0;


  while (tempFahrFloat <= gornaGranicaFloat) {
    tempCelsFloat = 5.0 * (tempFahrFloat - 32.0) / 9.0;
    tempFahrWyliczoneFloat = 9.0 * tempCelsFloat / 5.0 + 32.0;

    printf("%.2f F => %.2f C => %.2f F.\n", tempFahrFloat, tempCelsFloat,
	   tempFahrWyliczoneFloat);



    tempFahrFloat += tempKrokFloat;
  }

  /* Widzą Państwo, że obliczenia na liczbach zmiennoprzecinkowych są dużo
   * dokładniejsze. Czemu więc na początku użyliśmy intów? Bo inty w wielu
   * wypadkach są niezwykle użyteczne, ten zaś przykład ilustruje, problemy
   * na jakie możemy używając ich natrafić. */





  return 0;
}
