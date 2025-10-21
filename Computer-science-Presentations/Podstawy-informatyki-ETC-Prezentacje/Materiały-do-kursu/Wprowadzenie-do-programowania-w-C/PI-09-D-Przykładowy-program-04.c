#include <stdio.h>
/* Żeby zilustrować wykorzystanie pętli i instrukcji takich jak break,
 * za ich pomocą poszukamy miejsca zerowego funkcji
 * functionMath(x) = cos(x) - x
 * Ale po co nam wiedza, dla jakiego x jest prawdą, że
 * function(x) = cos(x) - x = 0
 * Dobre pytanie. Wbrew pozorom w wielu praktycznych problemach
 * inżynieryjnych, ważne jest szukanie miejsc zerowych funkcji.
 * Ale i tak nie jest to najlepsza motywacja na kurs „Podstawy
 * informatyki”. */

/* Proszę pamiętać o dołączeniu tej linii. */
#include <math.h>

/* I o zmianie „magicznego zaklęcia” na
 *
 * time gcc -ansi --std=c99 -pedantic PI-08-D-Przykładowy-program-04.c -lm
 * -o prog.out
 *
 * Proszę pamiętać, że to polecenie należy wpisać w JEDNYM wierszu powłoki. */

int main() {
  /* Metoda znalezienia miejsca zerowego funkcji której użyjemy, będzie
   * bardzo naiwna, ale dla nas wystarczająca. Zaczynamy od tego, że
   * function(0.0) = cos(0.0) - 0.0 = 1.0 > 0,
   * function(pi/2.0) = cos(pi/2.0) - pi/2.0 = -pi/2.0 ~ -1.57 < 0.
   * Symbolu „~” używamy w znaczeniu „w przybliżeniu równe”.
   *
   * Pewne twierdzenie matematyczne mówi, że funkcja tego typu, która
   * jest dodatnia w 0.0 i ujemna w 1.57 musi mieć miejsce zerowe między
   * tymi punktami.
   *
   * Nasza naiwna metoda będzie działać w następujący sposób. Po prostu
   * obliczamy wartość naszej funkcji dla x = 0.0, 0.01, 0.02,...
   * i patrzmy kiedy będzie ona mniejsza bądź równa 0.0. Gdy to się stanie,
   * to miejsce zerowe nie powinno być daleko.
   *
   * Po angielsku takie metody noszą nazwę „brute force method”. Po polskiemu
   * „metody przez brutalną siłę”, albo „metoda Nachamowa” ;). */

  double x = 0.0;
  double y = 0.0;
  double step = 0.01;



  while (x <= 1.57) {
    y = cos(x) - x;

    if (y <= 0.0) {
      break;
    }

    x += step;
  }

  printf("x == %.3f.\n", x);
  printf("cos(%.2f) - %.2f == %.3f.\n", x, x, y);





  return 0;
}
