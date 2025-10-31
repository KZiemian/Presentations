#include <stdio.h>

/* Co może zawierać ciało funkcji? Prawie cały kod jaki do tej pory pisaliśmy
 * można umieścić wewnątrz funkcji. A jeśli się zastanowić to do tej pory
 * większość czasu spędziliśmy pisząc kod wewnątrz funkcji main().
 *
 * Najważniejszy wyjątek o jakim musimy teraz poznać to inne funkcje.
 * Z wnętrza funkcji można wywołać inną funkcję, po to w zasadzie funkcje
 * istnieją, ale nie można wewnątrz jednej funkcji umieścić definicji innej
 * funkcji. */

/* By pokazać, że w ciele funkcji możemy definiować zmienne i używać
 * pętli, a także wiele innych rzeczy, napiszemy teraz funkcję, która
 * wypisuje liczby całkowice od startInt do stopInt i zwraca ich sumę. */
int showAndSumNumbers(int startInt, int stopInt) {
  int sum = 0;

  for (int i =  startInt; i <= stopInt; i++) {
    printf("Obecna liczba: %d.\n", i);

    sum += i;
  }

  return sum;
}





int main() {
  int sumOfNumbers = 0;

  printf("sumOfNumbers = showAndSumNumbers(0, 5);\n");
  sumOfNumbers = showAndSumNumbers(0, 5);
  printf("sumOfNumbers == %d.\n\n", sumOfNumbers);

  printf("sumOfNumbers = showAndSumNumbers(6, 10);\n");
  sumOfNumbers = showAndSumNumbers(6, 10);
  printf("sumOfNumbers == %d.\n\n", sumOfNumbers);

  printf("sumOfNumbers = showAndSumNumbers(3, 8);\n");
  sumOfNumbers = showAndSumNumbers(3, 8);
  printf("sumOfNumbers == %d.\n", sumOfNumbers);




  return 0;
}
