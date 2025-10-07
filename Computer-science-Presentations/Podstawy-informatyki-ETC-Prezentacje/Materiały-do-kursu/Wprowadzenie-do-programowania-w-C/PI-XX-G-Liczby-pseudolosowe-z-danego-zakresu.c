#include <stdio.h>
#include <stdlib.h>

int main() {
  int pseudorandomNumber = 0;

  /* Maksymalna liczba pseudolosowa jaką może zwrócić funkcja rand()
     jest określona przez makro RAND_MAX. */
  printf("RAND_MAX = %d.\n", RAND_MAX);
  printf("Proszę zobaczyć, czy nie przypomina ona jakiejś potęgi dwójki, "
	 "lub potęgi dwójki minus jeden.\n\n");

  /* Ten zakres jest dość duży, a często chcielibyśmy mieć liczbę losową
     z mniejszego zakresu, powiedzmy od 1 do 10. W tym miejscu przychodzi
     nam z pomocą operator modulo. Jeśli mamy zmienną numberVar1 to
     wyrażenie
     numberVar1 % 10
     ma zawsze wartość od 0 do 9 (czy to wymaga dodatkowego komentarza?).
     W takim razie wyrażenie
     numberVar1 % 10 + 1
     zawsze daje wartość w przedziale od 1 do 10. Zmieniając nieznacznie ten
     wzór, możemy dostać liczby pseudolosowe z dowolnego przedziału
     [0, RAND_MAX]. */

  srand(getpid());
  /* Jeśli linia powyżej jest niejasna, proszę to powiedzieć. */

  for (int i = 0; i < 10; i++) {
    pseudorandomNumber = rand() % 10 + 1;
    printf("%d liczba pseudolosowa: %d.\n", i, pseudorandomNumber);
  }

  /* Proszę kilkakrotnie wywołać ten program (./prog.out), by zobaczyć,
     że generuje liczby pseudolosowe w zadanym przedziale. */





  return 0;
}

/* Do tej pory zajmowaliśmy się tylko całkowity liczbami pseudolosowymi,
   ale przecież ta tematyka jest znacznie bogatsza. Co jeśli potrzebowalibyśmy
   zmiennoprzecinkowych liczb pseudolosowych z odcinka [0.0, 1.0]?
   Albo [-1.0, 1.0]? Albo takich posiadających rozkład Gaussa? Takie liczby
   oczywiście da się generować w języku C, acz to temat na zupełnie inny
   przedmiot.

   Dlaczego wszystko w czego się nie tkniemy jest tematem na osobny
   przedmiot? */
