#include <stdio.h>

int main() {
  /* Poznaliśmy już operatory porównywania „==”, „!=”, „<”, „>”. Poza
   * tym mamy jeszcze operatory „<=” (mniejsze bądź równe) i „>=” (większe
   * bądź równe). Ich działanie nie wymaga większego tłumaczenia. */

  if ((1 + 1) <= 2) {
    printf("(1 + 1) <= 2: prawda.\n\n");
  } else {
    printf("(1 + 1) <= 2: fałsz.\n\n");
  }

  if (1 <= 0) {
    printf("1 <= 0: prawda.\n\n");
  } else {
    printf("1 <= 0: fałsz.\n\n");
  }

  if ((1 + 2) >= 3) {
    printf("(1 + 2) >= 3: prawda.\n\n");
  } else {
    printf("(1 + 2) >= 3: fałsz.\n\n");
  }

  if (2 >= 3) {
    printf("2 >= 3: prawda.\n");
  } else {
    printf("2 >= 3: fałsz.\n");
  }





  return 0;
}
