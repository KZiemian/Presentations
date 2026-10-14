#include <stdio.h>

/* Poznaliśmy już instrukcję sterującą if, która pozwala programowi podjąć
 * decyzję, na podstawie wartości pewnego warunku. Kolejna rzeczą jakiej
 * potrzebujemy, to możliwość powtarzania danej części kodu odpowiednią liczbę
 * razy. Do tego celu w języku C używamy pętli. */

int main() {
  int i = 0;

  /* Zaczniemy od prezentacji koncepcyjnie najprostszej pętli while.
   * Pętla ta posiada warunek i wykonuje ona swoje ciało, dopóki jest on
   * prawdziwy. */
  while (i < 5) {
    /* Kod między nawiasami wąsatymi pętli while, nazywamy „ciałem pętli”
     * (ang. loop body). */
    printf("Hello, World! %d time.\n", i + 1);

    /* Trzeba zawsze sprawdzić, czy nasza pętla się zatrzyma. */
    i++;
  }

  /* W języku C każda prawie każda pętla for musi posiadać zmienną,
   * która zlicza ile razy pętla ta się już wykonała. W większości przypadków
   * zmienna ta nazywa się „i” od ang. „iteration”, „iterować”, „powtarzać”.
   * Słowo „iterować” można uważać za synonim „powtarzać”. */

  /* Istnieją sytuacje w których nawiasy wąsate w pętli while możemy opuścić,
   * ale programowanie w C jest już wystarczająco skomplikowane by jeszcze
   * męczyć się tego typu rzeczami. */



  printf("Pętla while zakończyła działanie.\n");

  /* Przeanalizujmy wykonanie tej pętli.
   * 1) Przed wejściem do pętli zmienna „i” ma wartość 0.
   * 2) Wchodzimy do pętli i sprawdzamy warunek (i < 5) == (0 < 5). Jest
   * to prawda, więc przystępujemy do wykonania ciała pętli.
   * 3) Wykonujemy ciało pętli, czyli wypisujemy na ekranie odpowiedni tekst
   * oraz zwiększamy wartość zmiennej „i” z 0 na 1.
   * 4) Sprawdzamy warunek (i < 5) == (1 < 5). Jest to prawda, więc ponownie
   * wykonujemy ciało pętli.
   * 5) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
   * „i” z 1 na 2.
   * 6) Sprawdzamy warunek (i < 5) == (2 < 5). Jest to prawda, więc ponownie
   * wykonujemy ciało pętli.
   * 7) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
   * „i” z 2 na 3.
   * 8) Sprawdzamy warunek (i < 5) == (3 < 5). Jest to prawda, więc ponownie
   * wykonujemy ciało pętli.
   * 9) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
   * „i” z 3 na 4.
   * 10) Sprawdzamy warunek (i < 5) == (4 < 5). Jest to prawda, więc ponownie
   * wykonujemy ciało pętli.
   * 11) Wypisujemy odpowiedni tekst na ekranie i zwiększamy wartość zmiennej
   * „i” z 4 na 5.
   * 12) Sprawdzamy warunek (i < 5) == (5 < 5). Jest to fałsz, więc kończymy
   * wykonywanie pętli while i przechodzimy do instrukcji podanych niżej
   * w programie. */

  /* Pętla w kółko powtarza te same czynności, dlatego właśnie nazywa się
   * ona pętlą. Praca pętli wydaje się dość nudna i dlatego my ludzie, lubimy
   * powierzać powtarzalne zadania programom komputerowym. */



  return 0;
}
