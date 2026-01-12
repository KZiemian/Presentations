#include <stdio.h>

int main() {
  int arrayInt1[10] = {5, 0, 1, 3, 2, 9, 10, 8, 7, 6};

  /* Omówiliśmy już, jak działa prosty algorytm poszukiwania największego
   * elementu w tablicy intów, teraz zobaczymy, czy poniższy kod realizuje
   * go w sposób poprawny. */

  /* Tworzymy zmienną maxValue i od razu nadajemy jej wartość równą
   * pierwszemu elementowi tablicy. Tym samym realizuje pierwszy krok
   * naszego algortymu. */
  int maxValue = arrayInt1[0];

  /* Musimy teraz zastosować pozostałą część algrotymu, dla elementów
   * tablicy arrayInt1[1], arrayInt1[2],..., arrayInt1[9] (pamiętajmy,
   * że ostatni indeks tej tablicy to 10 - 1 == 9), co realizuje poniższa
   * pętla for. */
  for (int i = 1; i < 10; i++) {
    /* W tym kroku mamy sprawdzać, czy spełniony jest warunek
     * arrayInt1[i] > maxValue
     * gdzie i to indeks elementu, którego wartość teraz porownujemy
     * z największą do tej pory znalezioną wartością. Jeśli to jest prawda,
     * zmieniamy wartość zmiennej maxValue na wartość arrayInt1[i]. Jeśli
     * nie to nic nie robimy. To właśnie robi poniższa instrukcja if.
     * Tym samym kod ten poprawnie implementuje (realizuje), omawiany
     * przez nas algorytm. */
    if (arrayInt1[i] > maxValue) {
      maxValue = arrayInt1[i];
    }
  }

  printf("Maksymalny element tablicy arrayInt1 ma wartość: %d.\n",
	 maxValue);

  /* Jak już powiedzieliśmy, by sensownie pracować z algorytmami w C
   * potrzebujemy tablic. Jednak tablice w języku C zastawiają na nas
   * wiele pułapek i zamin będziemy mogli więcej powiedzieć o algrotymach
   * w języku C, najpierw musimy omówić te problematyczne własności
   tablicami. Bo czemu życia miałoby być proste? */





  return 0;
}
