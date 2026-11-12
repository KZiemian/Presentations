#include <stdio.h>

/* Poprzednio definiowaliśmy funkcję dodajTrzy() w następujący sposób.
 *
 * int dodajTrzy(int x) {
 *    int wynik = 0;
 *
 *    wynik = x + 3;
 *
 *    return wynik;
 * }
 *
 * Tylko, że to nie jest jak normalny programista C napisałby tą funkcję.
 * Ta wersja służy tylko celą pedagogicznym. To jak zrobiłby to normalny
 * programista C można zobaczyć poniżej.
 */

int dodajTrzy(int x) {
  return x + 3;
}

/* Ciało tej funkcji składa się z jednej linii. Bierze ono wartość argumentu
 * x, dodaje do niego wartość 3 i od razu zwraca ten wynik obliczeń.
 *
 * Taka funkcja jest zdecydowanie lepiej napisana, ale chyba też mniej
 * czytelna dla początkujących. */

int main() {

  /* Jeśli uruchomimy ten kod, to zobaczymy, że choć ciało funkcji
   * jest napisane inaczej, działa dokładnie tak jak poprzedni. */

  for (int i = 0; i < 10; i++) {
    printf("dodajTrzy(%d) == %d.\n", i, dodajTrzy(i));
  }





  return 0;
}
