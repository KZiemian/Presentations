#include <stdio.h>

int main() {
  /* Sytuację z tablicami w C można podsumować mniej więcej tak. Tablice
   * posiadają rozmiar, ale program z reguły nie wie jako on jest. By to
   * zilustrować, rozpatrzmy następujący kod. */
  int arrayInt1[3] = {1, 2, 3};

  /* Tablica arrayInt1 ma 3 elementy, ale pętla poniżej odczytuje ich aż 6,
   * czyli o 3 za dużo. */
  for (int i = 0; i < 6; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Program ten można bez problemu uruchomić, ale rezultat jego działania,
   * wcale nie musi być oczywisty. Na komputerze na którym testowaliśmy
   * jego działanie, otrzymaliśmy następujące wyniki
   * $ ./prog.out
   * arrayInt1[0] == 1.
   * arrayInt1[1] == 2.
   * arrayInt1[2] == 3.
   * arrayInt1[3] == -72579584.
   * arrayInt1[4] == -918544640.
   * arrayInt1[5] == 1.
   * Drugie wykonanie TEGO samego programu dało następujący rezultata.
   * $ ./prog.out
   * arrayInt1[0] == 1.
   * arrayInt1[1] == 2.
   * arrayInt1[2] == 3.
   * arrayInt1[3] == -1574328480.
   * arrayInt1[4] == 32945877.
   * arrayInt1[5] == 1.
   *
   * Dlaczego? To niestety wymusza na nas dłuższą dyskusję tego jak
   * działa pamięć, co to jest „segmentation fault” (seg fault) i inne
   * tego typu problemy.
   */





  return 0;
}
