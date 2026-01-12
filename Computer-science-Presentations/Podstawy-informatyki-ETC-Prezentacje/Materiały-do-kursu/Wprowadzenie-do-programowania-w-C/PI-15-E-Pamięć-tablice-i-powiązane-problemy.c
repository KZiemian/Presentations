#include <stdio.h>

int main() {
  /* By uniknąć problemów, wynikających z tego, że w tablicy znajdują się
   * śmieci z pamięci, w języku C można wyzerować wszystkie elementy tablicy
   * w następujący sposób. */
  int arrayInt1[10] = {0};

  printf("Zawartość tablicy arrayInt1.\n");

  for (int i = 0; i < 10; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Wyboraźmy sobie, że nasz program przetwarza liczbę śrub wykonanych
   * w fabryce danego dnia pewnego tygodnia. Tworzymy więc tablicę
   * int liczbaWyprodukowanychSrub[5] = {0};
   * Następnie zaś piszemy ile śrub wykonano w poniedziałek, wtorek, etc.
   * Jeśli zapomnieliśmy wpisać liczbę śrub którą wyprodukowano w piątek, to
   * w tablicy będzie pod indeksem 4, będzie obecna liczba 0. Stwierdzenie,
   * że popełniliśmy błąd nie podając liczby wyprodukowanych śrub, jest
   * wtedy znacznie łatwiejsze, niż gdy program w sposób losowy podstawi
   * tam liczbę 7200, która na pierwszy rzut oka nie wzbudza podejrzeń.
   *
   * Mówiąc krótko, należy bronić się przed używaniem tablic, których
   * zawartość nie jest nam znana. */





  return 0;
}
