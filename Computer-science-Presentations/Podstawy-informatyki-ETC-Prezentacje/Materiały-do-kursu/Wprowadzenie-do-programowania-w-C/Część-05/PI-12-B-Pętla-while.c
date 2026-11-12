#include <stdio.h>

#include <unistd.h>



int main() {

  /* Zasadę działania pętli while najlepiej wyjaśnić na przykładzie. Mówiąc
   * dość ogólnikowo, pętle posiadają warunek i ciało pętli. Dopóki warunek
   * jest spełniony, wykonywany jest cały kod zawarty w ciele tej pętli.
   * Aby pokazać to, że ciało pętli wykonuje się raz za razem, skorzystamy
   * z funkcji sleep(). */

  int numberOfLoops = 1;

  printf("Zaczynamy wykonywać pętlę.\n");



  while (numberOfLoops <= 5) {
    sleep(1);

    printf("Wykonujemy ciało pętli po raz %d.\n", numberOfLoops);

    numberOfLoops++;
  }

  printf("Koniec pętli while.\n");

  /* W pętli while warunek występuje zaraz po słowie „while”, ang. „dopóki”.
   * W tym wypadku jest to (numberOfLoops <= 5), czyli pętla wykona się
   * dopóki zmienna numberOfLoops nie przekroczy wartości 5. Jak można się
   * domyślić na podstawie nazwy tej zmiennej wskazuje, ciało tej pętli
   * wykona się 5 razy.
   *
   * Ciało pętli to cały kod zawarty wewnątrz nawiasów wąsatych. Składa się
   * z funkcji sleep(1), każącej programowi czekać 1 sekundę, instrukcji
   * wypisania na ekranie informacji o tym, który obieg pętli jest wykonywany
   * i instrukcji inkrementacji zmiennej numberOfLoops. */





  return 0;
}
