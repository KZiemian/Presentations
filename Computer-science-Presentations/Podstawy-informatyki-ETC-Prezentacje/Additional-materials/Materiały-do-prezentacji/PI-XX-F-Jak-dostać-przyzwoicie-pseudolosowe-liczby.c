#include <stdio.h>
#include <stdlib.h>

/* Inne podejście do uzyskanie przyzwoitych liczb pseudolosowych polega
   na ustawieniu ziarna na obecny czas. Jak komputer liczy czas? To jest
   znowu dość obszerny temat, na obecną chwilę wystarczy nam informacja,
   że czas z którego będziemy korzystać, to liczba sekund jakie upłynęły
   od pewnej wybranej daty.

   By móc odczytać czas będziemy potrzebować poniższej linii. */
#include <time.h>

int main() {
  /* Ta linia może wygląda trochę dziwnie, ale wszystko co musimy wiedzieć,
     to to, że wywołanie funkcji time(NULL) zwróci nam obecną wartość
     czasu. */
  int timeValue = time(NULL);

  printf("timeValue == %d.\n\n", timeValue);

  srand(timeValue);

  for (int i = 0; i < 5; i++) {
    printf("rand() == %d.\n", rand());
  }

  /* Również ten program proszę uruchomić kilka razy, wpisując polecenie
     ./prog.out
     i zobaczyć, czy dostajemy odpowiednio pseudolosowe liczby. */





  return 0;
}
