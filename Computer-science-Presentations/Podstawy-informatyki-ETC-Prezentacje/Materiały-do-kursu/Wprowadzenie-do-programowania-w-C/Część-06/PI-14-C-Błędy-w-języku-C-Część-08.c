#include <stdio.h>

/* Zobaczmy co by się stało, gdybyśmy pracując tylko na intach, przeliczyli
 * najpierw stopnie z skali Fahrenheita na Celsjusza, a potem z Celsjusza
 * ponownie na Fahrenheita.
 *
 * Z wzoru
 * tempCels = 5 * (tempFahr - 32) / 9;
 * otrzymujemy wzór przeliczający temperaturę w stopniach Celsjusza
 * na temperaturę w stopniach Fahrenheita:
 * tempFahr = 9 * tempCels / 5 + 32;
 */

int main() {
  int tempCels = 0;
  int tempFahr = 0;
  int dolnaGranica = 0;
  int gornaGranica = 300;
  int tempKrok = 20;
  int tempFahrWyliczone = 0;



  tempFahr = dolnaGranica;

  while (tempFahr <= gornaGranica) {
    tempCels = 5 * (tempFahr - 32) / 9;
    tempFahrWyliczone = 9 * tempCels / 5 + 32;

    printf("%d F => %d C => %d F.\n", tempFahr, tempCels, tempFahrWyliczone);


    tempFahr += tempKrok;
  }



  printf("\n" "Jak Państwo widzą wynik staje się niedokładny, ze względu "
	 "na to, że gubimy część dziesiętną liczb przy dzieleniu.\n");





  return 0;
}
