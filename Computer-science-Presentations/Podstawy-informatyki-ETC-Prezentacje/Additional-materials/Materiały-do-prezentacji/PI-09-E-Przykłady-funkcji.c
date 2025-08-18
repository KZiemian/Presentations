#include <stdio.h>

/* Funkcja pobierająca dwa argumenty typu int i zwracająca liczbę całkowitą,
   czyli typu int. */
int function1(int x, int y) {
  return x - 2 * y;
}

/* Funkcja pobierająca trzy argumenty typu int i zwracająca liczbę całkowitą,
   czyli typu int. Dodatkowo, funkcja ta opisuje wykonane obliczenia. */

int function2(int x, int y, int z) {
  int value = x + 2 * y + 3 * z;

  printf("%d + 2 * %d + 3 * %d == %d.\n", x, y, z, value);

  return value;
}

/* Przykład funkcji, która nie pobiera żadnych argumentów, zwraca jednak
   liczbę 4. */
int function3() {
  return 4;
}

int main() {
  int intVar1 = 0;

  printf("function1(1, 2) == %d.\n\n", function1(1, 2));

  printf("Wywołanie funkcji function2(1, 2, 3).\n");

  intVar1 = function2(1, 2, 3);
  /* Wartość zwaracaną przez funkcję, możemy przypisać do zmiennej. */

  printf("Po wywołaniu funkcji function2(1, 2, 3).\n");
  printf("intVar1 == %d.\n\n", intVar1);

  printf("function3() == %d.\n", function3());
  /* Widzimy, że funkcje nie pobierające argumentów mają sens w języku C.
     Potrafią się czasem przydać, acz lepiej ich unikać. */





  return 0;
}
