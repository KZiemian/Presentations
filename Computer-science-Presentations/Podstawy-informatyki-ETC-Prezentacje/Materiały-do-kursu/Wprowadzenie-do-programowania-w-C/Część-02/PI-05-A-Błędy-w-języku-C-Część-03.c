#include <stdio.h>

int main() {
  /* Napiszemy teraz elementarny program, który jednak zawiera błąd.
   * Program ma wziąć zmienną, dodać do niej 1 i wypisać wynik. Jest on
   * w zasadzie bezużyteczny, ale prosty w zrozumieniu. */

  int liczbaCalkowita1;

  printf("Ten program zawiera błąd!!!\n");
  printf("liczbaCalkowita + 1 == %d.\n", liczbaCalkowita1 + 1);

  /* Ten program może zwrócić dowolny wynik!!! Jest tak dlatego, że jeśli
   * w C napiszemy
   * int liczbaCalkowita1 = 0;
   * to zmienna liczbaCalkowita1 ma wartość 0. Ale jeśli napiszemy
   * int liczbaCalkowita;
   * nie podając początkowej wartości, to język C ma prawo wstawić do niej
   * COKOLWIEK! Co gorsza, często mija sporo czasu, zanim zorientujemy się,
   * że nasz program pracuje na wartości wziętej z sufitu i tracimy kilka
   * godzin czasu, na odkryciu, czemu zachowuje się on dziwnie. Aby więc nie
   * komplikować sobie życia, proszę zawsze nadawać wartość zmiennej zaraz
   * po jej utworzeniu.
   *
   * Trzeba tutaj dodać, że to nie jest jakieś przeoczenie języka C. Język
   * C ma PRAWO do takiej zmiennej wstawić wszystko co chce. Dlaczego tak
   * jest, może powiem sobie w przyszłości. */





  return 0;
}
