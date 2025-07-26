#include <stdio.h>

int main() {
  /* Dawno temu w języku C, zmienne można było definiować tylko na początku
     funkcji main() (i w kilku jeszcze innych miejscach, o których sobie
     kiedyś powiemy). Jeszcze dziś można się spotkać z informacjami,
     że definiowanie zmiennych, gdzie indziej to zły pomysł. */
  double argument = 0.0;
  double value = 0.0;

  printf("Kilka wartości funkcji f(x) = x^2 + 2.0 * x + 1.0.\n");

  value = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) = %.2f.\n", argument, value);

  argument = 1.0;
  value = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) = %.2f.\n", argument, value);

  argument = 1.5;
  value = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) = %.2f.\n", argument, value);

  /* Nie jest to najlepszy sposób przeprowadzania tego typu obliczeń
     w języku C, ale da się. O bardziej efektywnych metodach zrobienia
     tego powiemy później. */





  return 0;
}
