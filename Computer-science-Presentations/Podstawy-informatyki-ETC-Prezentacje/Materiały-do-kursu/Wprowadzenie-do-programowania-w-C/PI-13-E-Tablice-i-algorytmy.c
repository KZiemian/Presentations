#include <stdio.h>

/* Dzięki informatyce słowo „algorytm” jest dziś w powszechnym użytku, jednak
 * można założyć, że niezbyt wiele osób rozumie, co to słowo w tym kontekście
 * naprawdę oznacza.
 *
 * W pewnym sensie, o algorytmach warto mówić dopiero, gdy mamy dużą liczbę
 * danych do przetworzenia. W języku C, żeby pracować z dużą liczbą danych
 * potrzebujemy tablic, dlatego o algrytmach zaczynamy mówić tak późno.
 *
 * Dlaczego nie warto omawiać algorytmów dla małych zestawów danych? Gdy
 * liczba danych jaką mamy opracować jest niewielka, procedure ich
 * przetworzenia jest na tyle prosta i zajmuje na tyle mało czasu,
 * że prościej ją przeprowadzić, niż opisać w bardzo precyzyjny sposób,
 * właściwy myśleniu algorytmicznemu. Dopiero gdy liczba danych sięga
 * tysięcy i millionów, problem okazuje się na tyle czasochłownny,
 * iż warto poświęcić czas na sformalizowanie algorytmu i wprowadzenie
 * go do komputera.
 */

int main() {
  int arrayInt1[10] = {5, 0, 1, 3, 2, 9, 10, 8, 7, 6};

  /* Zacznijmy od następującego problemu. Dana jest tablica arrayInt1
   * o długości 10, znajdź jej największy element. Przy czym nie interesuje
   * nas miejsce w tablicy w którym się on znajduje. Problem ten raczej
   * nie jest zbyt ciekawy, ale na tyle prosty, że można na jego przykładzie
   * dokładnie prześledzić procedurę rozwiązywania problemu za pomocą
   * algorytmu i kodu, który realizuje ten algorytm.
   *
   * Odruchowo wiemy jak rozwiązać ten problem. Patrzymy się na tablicę
   * i mówimy, że jej największy element to liczba 10. Tylko, że to rodzi
   * dwa problemy.
   * 1) Komputer nie widzi tablicy tak jak my, więc nie jesteśmy w stanie
   *    wyjaśnić mu, jak ma on w ten sposób rozwiązać ten problem.
   * 2) Co jeśli tablica ma nie 10, ale 10 000 elementów? Wtedy nasza metoda
   *    staje się mało praktyczna.
   *
   * Tutaj z pomocą przychodzi nam prosty algorytm. W tym miejscu od
   * ogólnej definicji pojęcia algorytm, lepsze będzie opisanie tego
   * konkrentego przykładu.
   *
   * Nasz algorytm działa tak. Tworzymy znienną maxValue, w której
   * zapisujemy liczbę, która w danej chwili jest największą jaką
   * napotkaliśmy w tablicy. Zaczynamy od przyjęcia
   * maxValue = arrayInt1[0];
   * Jest to logiczne. Jeśli sprawdziliśmy tylko jeden element tablicy,
   * to automatycznie jest on największym elementem tej tablicy jaki
   * widzieliśmy. Jest też najmniejszym elementem tablicy jaki widzieliśmy,
   * ale to nie jest teraz istotne.
   *
   * Następnie sprawdzamy element arrayInt1[1]. Jeśli jest prawdą,
   * że arrayInt1[1] > maxValue, to wykonujemy operację
   * maxValue = arrayInt1[1];
   * To też ma sens. Skoro arrayInt1[1] jest większy od wartości
   * maxValue == arrayInt1[0], to jest on największym elementem tablicy
   * jak do tej pory widzieliśmy i należy go zapisać w zmiennej maxValue.
   *
   * Jeśli arrayInt1[1] <= maxValue, to maxValue jest największym elementem
   * tablicy jaki do tej pory widzieliśmy i nie musimy nic robić. Znowu,
   * jeśli arrayInt1[1] == maxValue, to nie stanowi to problemu, bo wszak
   * szukamy największej liczby zawartej w tablicy i nie jest dla nas ważne,
   * ile razy ta liczba się powtarza.
   *
   * W następnym kroku bierzemy arrayInt1[2] i ponownie sprawdzamy, czy
   * arrayInt1[2] > maxValue. Jeśli jest to prawda, to podstawiamy
   * maxValue == arrayInt1[2];
   * Jeśli zaś zachodzi arrayInt1[2] <= maxValue, to nic nie robimy.
   *
   * Procedurę tą powtarzamy, aż dojedziemy do końca tablicy, czyli
   * do arrayInt1[9]. Nigdy dość przypominania, że jeśli tablica ma długość
   * 10, to ponieważ pierwszy indeks to 0, to jej ostani element ma indeks
   * równy 10 - 1 == 9.
   */

  /* Cały powyższy algorytm możemy zapisać w C za pomocą następującego kodu.
   * Mówiąc bardziej technicznie, ten kod jest implementacją omawianego
   * algorytmu. */

  int maxValue = arrayInt1[0];

  /* Skoro sprawdziliśmy już pierwszy element tablicy, pętlę for zaczniemy
   * od indeksu drugiego elementu, który wynoski 2 - 1 == 1. Jak Państwo
   * pewnie już widzą, nie pomylenie się w rachunkach o 1, wcale nie jest
   * proste. */

  for (int i = 1; i < 10; i++) {
    if (arrayInt1[i] > maxValue) {
      maxValue = arrayInt1[i];
    }
  }

  printf("Maksymalny element tablicy arrayInt1 ma wartość: %d.\n",
	 maxValue);

  /* Zastanówmy się teraz, czy na pewno rozumiemy, dlaczego nasz algorytm
   * poprawnie znajduje maksymalny element w danej tablicy? Dla pewności,
   * przeanalizujmy teraz jego działanie krok po kroku.
   *
   * Na początku bierzemy pierwszy element tablicy arrayInt1[0] i ponieważ
   * jest to największa liczba z tej tablicy jaką widzieliśmy (bo jedyna),
   * zapisujemy ją w zmiennej maxValue. Następnie sprawdzamy, czy wartość
   * elementu arrayInt1[1] jest większa od maxValue, (arrayInt1[1] >
   * maxValue). Jeśli tak, to ten element jest większy, niż największy jaki
   * do tej pory napotkaliśmy, więc to on jest największym, ze wszystkich
   * widzianych przez nas elementów. Jeśli zachodzi arrayInt1[1] <=
   * maxValue, to maxValue wciąż jest największym elementem jaki
   * widzieliśmy, więc nie musimy nic robić.
   *
   * Procedurę tę powtarzamy dla arrayInt1[2], arrayInt1[3],...,
   * aż dojdziemy do końca tablicy. Zmienna maxValue przechowuje największą
   * z widzianych przez nas elementów tablicy. Ponieważ zaś przejrzeliśmy
   * wszystkie elementy tej tablicy, więc maxValue przechowuje największą
   * wartość z nich wszystkich, czyli tą wartość, której poszukiwaliśmy. */





  return 0;
}
