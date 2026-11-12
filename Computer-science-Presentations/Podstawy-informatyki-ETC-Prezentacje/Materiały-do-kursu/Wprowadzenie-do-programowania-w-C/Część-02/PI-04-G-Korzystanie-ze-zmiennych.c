#include <stdio.h>

int main() {
  double argument = 0.0;
  double wartosc = 0.0;
  double pewnaZmienna = 0.0;

  printf("Kilka wartości funkcji "
	 "funkcjaKwadratowa(x) == x^2 + 2.0 * x + 1.0.\n");

  wartosc = argument * argument + 2.0 * argument + 1.0;
  /* Operacja przypisania tego typu działa w następujący sposób.
   * Do zmiennej po jej lewej stronie (po lewej stronie znaku „=”) zostaje
   * przypisana wartość powstała przez obliczenie jej prawej strony, czyli
   * argument * argument + 2.0 * argument + 1.0
   * w której podstawiamy za wszystkie zmienne, wartości jakie obecnie
   * posiadają. Czyli w naszym wypadku dostajemy
   * 0.0 * 0.0 + 2.0 * 0.0 + 1.0
   * Następnie wartość tego wyrażenia jest obliczana, wynosi ona 1.0 i ta
   * wartość zostaje przypisana do zmiennej value. Od teraz value == 1.0. */

  printf("f(%.2f) == %.2f.\n", argument, wartosc);

  argument = 1.0;
  wartosc = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) == %.2f.\n", argument, wartosc);

  argument = 1.5;
  wartosc = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) == %.2f.\n", argument, wartosc);

  printf("Później zobaczymy jak napisać ten kod lepiej.\n\n");

  /* Mamy nadzieję, że sens tego kodu jest wystarczająco zrozumiały.
   *
   * Nie jest to najlepszy sposób przeprowadzania tego typu obliczeń w języku
   * C, ale program działa. O bardziej efektywnych metodach napisania
   * takiego programu opowiemy później. */

  printf("Teraz przedstawimy trochę mniej oczywiste operacje na zmienny.\n");

  pewnaZmienna = 5.0;

  printf("pewnaZmienna == %.2f.\n", pewnaZmienna);

  printf("Wykonujemy (pewnaZmienna = pewnaZmienna + 0.5;).\n");
  pewnaZmienna = pewnaZmienna + 4.0;

  printf("pewnaZmienna == %.2f.\n", pewnaZmienna);

  /* Linia
   * pewnaZmienna = pewnaZmienna + 0.5;
   * może być początkowo trudna do zrozumienia, bo zmienna someVariable
   * występuje w niej po obu stronach instrukcji przypisania. Sens jej jest
   * jednak taki sam jak poprzednio. Po lewej stronie tej instrukcji
   * znajduje się zmienna do której przypiszemy wartość zwróconą przez
   * obliczenia obecne na jej prawej stronie. Przy czym za zmienną
   * someVariable po prawej stronie operacji przypisania, zostanie
   * podstawiona jej aktualna wartość, jaką obecnie posiada w programie.
   *
   * Inaczej mówiąc, ponieważ pewnaZmienna == 5.0, więc linia
   * pewnaZmienna = pewnaZmienna + 0.5;
   * zostanie przekształcona do postaci
   * pewnaZmienna = 5.0 + 0.5;
   * Tym samym po tej operacji zmienna pewnaZmienna, będzie miała wartość
   * równą 5.5. */





  return 0;
}
