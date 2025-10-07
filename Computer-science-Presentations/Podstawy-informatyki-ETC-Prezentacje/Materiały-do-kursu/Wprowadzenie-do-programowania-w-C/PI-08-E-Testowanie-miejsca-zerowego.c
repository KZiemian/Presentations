#include <stdio.h>
#include <math.h>

/* Przeprowadzając obliczenia z krokiem 0.01, ustaliliśmy, że miejsce
   zerowe funkcji
   functionMath(x) = cos(x) - x
   wynosi około x ~ 0.74. Była to pierwsza wartość dla której
   functionMath(x) <= 0.0
   Warto więc sprawdzić, jaka jest wartość tej funkcji dla
   x = 0.74 - 0.01 = 0.73, oraz dla x = (0.73 + 0.74) / 2.0 = 0.735. */

int main() {
  double x = 0.74;
  double y = cos(x) - x;

  printf("cos(%.3f) - %.3f = %.3f.\n", x, x, y);


  x = 0.73;
  y = cos(x) - x;

  printf("cos(%.3f) - %.3f = %.3f.\n", x, x, y);


  x = 0.735;
  y = cos(x) - x;

  printf("cos(%.3f) - %.3f = %.3f.\n", x, x, y);

  /* Widzimy więc, że x = 0.74 jest naprawdę dobrym przybliżeniem miejsca
     zerowego badanej funkcji. */





  return 0;
}
