#include <stdio.h>

/* Jedna z zasad języka C mówi, że jeśli w funkcji zostanie napotkana
 * wyrażenie „return”, to w tym miejscu oczywiście zwracamy dany wynik
 * i OPUSZCZAMY funkcję. Inaczej mówiąc, kod który w funkcji znajduje się
 * pod wyrażeniem „return” jest zupełnie ignorowany przez program.
 *
 * Mam to sens, jeśli pomyślimy o funkcja tak jak w matematyce: jest to
 * obiekt, który pobiera argumenty i zwraca wartości. Skoro wartość już
 * została zwrócona, to rola funkcji się zakończyła i dalszy kod nie ma
 * żadnego znaczenia. */

double linearFunction(double x) {
  return 2.0 * x + 1.0;

  printf("Jestem po wyrażeniu 'return' w linearFunction.\n");
}





int main() {
  double x = 1.0;

  printf("linearFunction(%.2f) = %.3f.\n", x, linearFunction(x));




  return 0;

  printf("Do funkcji main stosuje się ta sama zasada.\n");
  printf("Kod po wyrażeniu 'return' jest ignorowany.\n");

  /* W językach takich jak Java mamy koncepcję kodu nieosiągalnego
   * (ang. unreachable code), jest to kod, który nigdy nie zostanie
   * wykonany (osiągnięty). Języki te traktują występowanie takiego kodu
   * jak błąd, co w naszej opinii jest słusznym podejściem. Typowy przykład
   * kodu nieosiągalnego, to ten po wyrażeniu return w danej funkcji
   * i jak widzimy, język C nie ma z tym problemów.
   *
   * Język C mógłby być bardziej user friendly. */
}
