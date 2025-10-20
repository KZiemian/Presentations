#include <stdio.h>

int main() {
  /* Dawno temu w języku C, zmienne można było definiować tylko na początku
   * funkcji main() (i w kilku jeszcze innych miejscach, o których sobie
   * kiedyś powiemy). Jeszcze dziś można się spotkać z informacjami,
   * że definiowanie zmiennych w innych miejscach programu to zły pomysł.
   *
   * Na tych zajęciach będziemy się trzymać tej konwencji i definiować zmienne
   * tylko na początku funkcji main() (i w kilku innych miejscach). */

  double argument = 0.0;
  double value = 0.0;
  double someParameter = 0.0;

  printf("Kilka wartości funkcji f(x) == x^2 + 2.0 * x + 1.0.\n");

  value = argument * argument + 2.0 * argument + 1.0;
  /* Instrukcja przypisania tego typu działa w następujący sposób.
   * Do zmiennej po jej lewej stronie (po lewej stronie znaku „=”) zostaje
   * przypisana wartość powstała przez wzięcie jej prawej strony, czyli
   * argument * argument + 2.0 * argument + 1.0
   * w której następnie podstawiamy za wszystkie zmienne, wartości jakie
   * obecnie posiadają. Czyli w naszym wypadku dostajemy
   * 0.0 * 0.0 + 2.0 * 0.0 + 1.0
   * Następnie wartość tego wyrażenia jest obliczana, wynosi ona 1.0 i ta
   * wartość zostaje przypisana do zmiennej value. Od teraz value == 1.0. */

  printf("f(%.2f) == %.2f.\n", argument, value);

  argument = 1.0;
  value = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) == %.2f.\n", argument, value);

  argument = 1.5;
  value = argument * argument + 2.0 * argument + 1.0;

  printf("f(%.2f) == %.2f.\n", argument, value);

  /* Mamy nadzieję, że sens tego kodu jest wystarczająco zrozumiały.
   *
   * Nie jest to najlepszy sposób przeprowadzania tego typu obliczeń w języku
   * C, ale program działa. O bardziej efektywnych metodach napisania
   * takiego programu opowiemy później. */

  /* Teraz pokażemy trochę mniej oczywisty sposób użycia zmiennych. */

  someParameter = 5.0;

  printf("someParameter == %.2f.\n", someParameter);

  someParameter = someParameter + 4.0;

  printf("someParameter == %.2f.\n", someParameter);

  /* Linia
   * someParameter = someParameter + 4.0;
   * może być początkowo trudna do zrozumienia, bo zmienna someParameter
   * występuje w niej po obu stronach instrukcji przypisania. Sens jej jest
   * jednak taki sam  jak poprzednio. Po lewej stronie tej instrukcji
   * znajduje się zmienna do której przypiszemy wartość zwróconą przez
   * obliczenia obecne na jej prawej stronie. Przy czym za zmienną
   * someParameter, zostanie podstawiona jej aktualna wartość, jaką obecnie
   * posiada w programie.
   *
   * Inaczej mówiąc, ponieważ someParameter == 5.0, więc linia
   * someParameter = someParameter + 4.0;
   * zostanie przekształcona do postaci
   * someParameter = 5.0 + 4.0;
   * Tym samym po tej operacji zmienna someParameter, będzie miała wartość
   * równą 9.0. */


  return 0;
}
