#include <stdio.h>

/* Obok pętli for język C posiada jeszcze pętle while. Fakt, że posiada on
   te dwie pętle, to w dużej mierze zaszłość historyczna. Jednocześnie
   przyjęło się używać pętli for i while w innych sytuacjach. */

int main() {
  int i = 0;

  /* Zaczniemy od przepisania poznanej już pętli, jako pętli while. */

  /* Pętla while posiada tylko jeden warunek i wykonuje ona swoje ciało,
     dopóki jest on prawdziwy. */
  while (i < 5) {
    printf("Hello, World! %d time.\n", i + 1);

    i++;
  }

  printf("Pętla while zakończyła działanie.\n");

  /* Przeanalizujmy wykonanie tej pętli.
     1) Przed wejściem do pętli zmienna i ma wartość 0.
     2) Wchodzimy do pętli i sprawdzamy warunek i < 5 == 0 < 5. Jest
     to prawda, więc przystępujemy do wykonania ciała pętli.
     3) Wykonujemy ciało pętli. Wypisujemy na ekranie odpowiedni tekst
     oraz zwiększamy wartość zmiennej i z 0 na 1.
     4) Sprawdzamy warunek i < 5 == 1 < 5. Jest to prawda, więc ponownie
     wykonujemy ciało pętli.
     5) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
     i z 1 na 2.
     6) Sprawdzamy warunek i < 5 == 2 < 5. Jest to prawda, więc ponownie
     wykonujemy ciało pętli.
     7) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
     i z 2 na 3.
     8) Sprawdzamy warunek i < 5 == 3 < 5. Jest to prawda, więc ponownie
     wykonujemy ciało pętli.
     9) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
     i z 3 na 4.
     10) Sprawdzamy warunek i < 5 == 4 < 5. Jest to prawda, więc ponownie
     wykonujemy ciało pętli.
     11) Wypisujemy odpowedni tekst na ekranie i zwiększamy wartość zmiennej
     i z 4 na 5.
     12) Sprawdzamy warunek i < 5 == 5 < 5. Jest to fałsz, więc kończymy
     wykonywanie pętli while i przechodzimy do instrukcji podanych niżej
     w programie. */





  return 0;
}
