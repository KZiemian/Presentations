#include <stdio.h>

/* By zilustrować użycie funkcji w kodzie, przepiszemy program szukający
 * miejsca zerowego funkcji
 * funkcjaMatematyczna(x) = cos(x) - x,
 * za pomocą funkcji z języka C. Trzeba przyznać, program ten nie robi się
 * od tego ciekawszy. */

#include <math.h>

double funkcjaMatematyczna(double x) {
  return cos(x) - x;
}





int main() {

  /* Na razie proszę przymknąć oko na to, że pewne oznaczenia pojawiają się
   * w dwóch różnych miejscach programu. To będzie działało poprawnie,
   * potem powiem o tym zagadnieniu więcej. */

  double x = 0.0;
  double krokMetody = 0.01;


  while (x <= 1.57) {
    if (funkcjaMatematyczna(x) <= 0.0) {
      break;
    }

    x += krokMetody;
  }

  printf("x = %.3f.\n", x);
  printf("funkcjaMatematyczna(%.2f) = %.3f.\n", x, funkcjaMatematyczna(x));

  /* Program ten warto porównać z poprzednią wersją i zobaczyć, co zmieniło
   * użycie funkcji. */





  return 0;
}
