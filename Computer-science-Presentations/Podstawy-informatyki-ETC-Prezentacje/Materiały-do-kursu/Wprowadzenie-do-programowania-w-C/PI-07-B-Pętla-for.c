#include <stdio.h>

/* Obok pętli while język C posiada jeszcze pętle for. Fakt, że język C
 * posiada te dwie konkretne pętle nie jest specjalnie ważny. Brak jednej
 * z nich nie ograniczyłby w żadnym wypadku siły tego języka. Jednocześnie
 * przyjęło się używać pętli for i while w innych sytuacjach. */

int main() {
  /* Zaczniemy od prezentacji działa pętli for. Pętlę tą stosujemy,
   * gdy potrafimy w zawczasu określić ile dokładnie razy mamy powtórzyć
   * daną część kodu. Czyli jeśli wiemy, że ten kod mamy powtórzyć 10 razy,
   * to pętla for jest tym czego potrzebujemy.
   *
   * Poniżej pętla for która wypisuje „Hello, World!” pięć razy. */

  for (int i = 0; i < 5; i++) {
    /* Również dla pętli for, ta część kodu nosi nazwę ciała pętli. */
    printf("Hello, World! %d time.\n", i + 1);
  }

  /* Ze względu na to, jak powszechne są pętle for, w których zmienna „i”
   * zaczyna odliczanie od wartości 0, tutaj również postanowiliśmy jej użyć.
   * Równie dobrze jednak moglibyśmy użyć pętli for zaczynającej się od
   * for (int i = 1; i <= 5; i++)
   */

  printf("\nPętla for zakończyła działanie.\n");

  /* Przyjrzyjmy się nawiasowi (int i = 0; i < 5; i++), który składa się
   * z trzech instrukcji oddzielonych średnikami:
   * A) int i = 0;
   * B) i < 5;
   * C) i++;
   * Ich sens wyjaśnimy, opisując jak ta pętla for działa.
   * SPRAWDŹ KOMENTARZE.
   * 1) Tworzona jest zmienna „i” oraz nadawana jest jej wartość 0
   * (instrukcja A).
   * 2) Wykonywana jest ciało pętli, czyli na ekranie wypisywany jest
   * odpowiedni tekst.
   * 3) Wykonywana jest instrukcja i++ (instrukcja C), w skutek której
   * wartość zmiennej „i” zmienia się z 0 na 1.
   * 4) Sprawdzany jest warunek (i < 5) == (1 < 5) (instrukcja B). Jest to
   * prawda, więc program przejdzie do wykonania ciała pętli.
   * 5) Wykonywana jest ciało pętli.
   * 6) Wykonywane jest i++ (instrukcja C), czyli „i” przechodzi z 1 na 2.
   * 7) Sprawdzamy (i < 5) == (2 < 5) (instrukcja B). Jest to prawda, więc
   * program wykona ciało pętli.
   * 8) Wykonywane jest ciało pętli.
   * 9) Wykonywana jest instrukcja i++ (instrukcja C), czyli „i” przechodzi
   * z 2 na 3.
   * 10) Sprawdzamy (i < 5) == (3 < 5) (instrukcja B). Jest to prawda, więc
   * program przejdzie do wykonania ciała pętli.
   * 11) Wykonywane jest ciało pętli.
   * 12) Wykonywane jest i++ (instrukcja C), czyli „i” przechodzi z 3 na 4.
   * 13) Sprawdzamy (i < 5) == (4 < 5) (instrukcja B). Jest to prawda, więc
   * program przejdzie do wykonania ciała pętli.
   * 14) Wykonywane jest ciało pętli.
   * 15) Wykonywane jest i++ (instrukcja C), czyli „i” przechodzi z 4 na 5.
   * 16) Sprawdzany jest (i < 5) == (5 < 5) (instrukcja B). Jest to fałsz,
   * więc kończymy pętle i przechodzimy do kodu poniżej niej.
   *
   * Jak mogli Państwo zauważyć, zmienna „i” rzeczywiście zlicza ile razy
   * wykonało się ciało pętli. */

  /* Przyjrzyjmy się jeszcze raz naszym trzem warunkom.
   * A) int i = 0;
   * B) i < 5;
   * C) i++;
   * Warunek A wykonywany jest tylko raz, gdy rozpoczynamy pętle, dlatego
   * nazywany jest „warunkiem inicjalizacji pętli”.
   *
   * Warunek numer C wykonywany jest zaraz po każdym wykonaniu ciała pętli
   * (mówimy też: obiegu pętli).
   *
   * Warunek B jest testem, który ustala, czy pętla ma się zakończyć w tym
   * momencie, czy mamy wykonać jeszcze co najmniej jeden obieg pętli. */





  return 0;
}
