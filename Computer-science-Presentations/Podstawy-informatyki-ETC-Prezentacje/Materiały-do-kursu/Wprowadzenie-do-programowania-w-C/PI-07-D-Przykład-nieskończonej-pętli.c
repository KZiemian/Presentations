#include <stdio.h>

/* Gdy piszemy pętle, musimy uważać, by nie stworzyć wbrew naszym
 * intencjom nieskończonej pętli. Czyli pętla zmiast wykonać się powiedzmy
 * pięć razy, wykonuje się nieskończenie wiele razy. Program więc nigdy nie
 * zakończy działania.
 *
 * Jeśli przypadkowo napisaliśmy program zawierający nieskończoną pętle
 * i uruchomiliśmy go w powłoce, to możemy go przerwać wciskająć JEDEN
 * RAZ kombinacje klawiszy Ctrl-c. Kilkukrotne wciśnięcie Ctrl-c
 * zakończy pracę CAŁEJ powłoki. */


int main() {
  /* Poniżej mamy prosty przykład pętli, która w skutek naszego błędu,
   * zamiast wykonać się pięć razy, będzie się wykonywała bez końca. */

  for (int i = 0; i < 5; i) {
    printf("Hello, World! %d time.\n", i + 1);
  }

  /* Problem nieskończonej pętli ma duże znaczenie w informatyce teoretycznej
   * i okazuje się być pod wieloma względami niebanalny. My jednak nie
   * będziemy się w niego zagłębiać, chyba że Państwo tego chcą. */





  return 0;
}
