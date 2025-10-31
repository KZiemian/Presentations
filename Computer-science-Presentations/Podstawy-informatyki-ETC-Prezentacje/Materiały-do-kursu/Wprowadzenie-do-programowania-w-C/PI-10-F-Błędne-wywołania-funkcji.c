#include <stdio.h>

int function1(int x, int y) {
  return x - 2 * y;
}

int function2(int x, int y, int z) {
  int value = x + 2 * y + 3 * z;

  printf("%d + 2 * %d + 3 * %d == %d.\n", x, y, z, value);

  return value;
}

int function3() {
  return 4;
}





int main() {
  printf("function1(1, 2) == %d.\n", function1(1, 2));

  /* Błędem jest wywołanie funkcji ze zbyt małą liczbą argumentów. */
  /* printf("function1(1) == %d.\n", function1(1)); */

  /* Jak też ze zbyt dużą liczbą argumentów. */
  /* printf("function1(1, 2, 3) == %d.\n", function1(1, 2, 3)); */

  /* Jeśli funkcja nie pobiera żadnych argumentów, to przesłanie do niej
   * argumentu nie jest błędem. Po prostu zostanie zignorowane. */
  printf("function3(1) == %d.\n", function3(1));
  /* To w naszej ocenie jest WADĄ języka C. Jeśli ktoś przesyła argumenty,
   * do funkcji, która ich nie pobiera, to prawie na pewno POMYLIŁ funkcje.
   * Albo robi sobie żarty z tych co będą czytać jego kod. W obu wypadkach,
   * język C powinien zwrócić błąd. */

  /* Pominięcie nawiasów okrągłych, jest jednak bardzo poważnym błędem.
   * Jakby tego nie było dość, to natura tego błędu jest dość zawiła
   * i musimy odłożyć jej omówienie na później. */
  /* printf("function3() == %d.\n", function3); */





  return 0;
}
