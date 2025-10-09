#include <stdio.h>

/* Poznaliśmy już instrukcję sterującą if, która pozwala programowi podjąć
 * decyzję, na podstawie wartości pewnego warunku. Kolejna rzeczą jakiej
 * potrzebujemy, to możliwość powtarzania danej części kodu odpowiednią ilość
 * razy. Do tego celu w języku C mamy pętle. */

int main() {
  /* Zaczniemy od prezentacji najprostszej pętli for. Pętlę tą stosujemy,
   * gdy potrafimy w prosty sposób określić ile dokładnie razy mamy powtórzyć
   * daną część kodu.
   *
   * Poniżej pętla for która wypisuje „Hello, World!” pięć razy. */

  for (int i = 0; i < 5; i++) {
    printf("Hello, World! %d time.\n", i + 1);
  }

  printf("\nPętla for zakończyła działanie.\n");

  /* W języku C każda prawie każda pętla for musi posiadać zmienną,
   * która zlicza ile razy pętla ta się już wykonała. W większośći przypadków
   * zmienna ta nazywa się „i” od ang. „iteration”, „iterować”, „powtarzać”.
   * Słowo „iterować” można uważać za synonim „powtarzać”.
   *
   * Przyjżyjmy się nawiasowi (int i = 0; i < 5; i++), który składa się
   * z trzech instrukcji oddzielonych średnikami:
   * 1) int i = 0;
   * 2) i < 5;
   * 3) i++;
   * Ich sens wyjaśnimy, opisując jak ta pętla for działa.
   * 1) Tworzona jest zmienna i oraz nadawana jest jej wartość 0.
   * 2) Wykonywana jest instrukcja printf.
   * 3) Wykonywana jest instrukcja i++, w skutek której wartość i zmienia się
   * z 0 na 1.
   * 4) Sprawdzany jest warunek i < 5 == 1 < 5. Jest to prawda, więc program
   * przejdzie do wykonania instrukcji printf.
   * 5) Wykonywana jest instrukcja printf.
   * 6) i++, czyli i przechodzi z 1 na 2.
   * 7) i < 5 == 2 < 5. Jest to prawda, więc program wykona instrukcję printf.
   * 8) Wykonywana jest instukcja printf.
   * 9) i++, czyli i przechodzi z 2 na 3.
   * 10) i < 5 == 3 < 5. Jest to prawda, więc program przejdzie do wykonania
   * instrukcji printf.
   * 11) Wykonywana jest instrukcja printf.
   * 12) i++, czyli i przechodzi z 3 na 4.
   * 13) i < 5 == 4 < 5. Jest to prawda, więc program przejdzie do wykonania
   * instrukcji printf.
   * 14) Wykonywana jest instrukcja printf.
   * 15) i++, czyli i przechodzi z 4 na 5.
   * 16) i < 5 == 5 < 5. Jest to fałsz, więc kończymy pętle i przechodzimy
   * do instrukcji podanych niżej w programie. */

  /* Jak mogli Państwo zauważyć, zmienna i rzeczywiście zlicza ile razy
   * już ta pętla się wykonała. Po drugie, pętla w kółko powtarza te same
   * czynności. Logiczne, dlatego nazywa się ona pętlą. W końcu, praca pętli
   * wydaje się dość nudna i dlatego my ludzie, lubimy powierzać powtarzalne
   * zadania programom komputerowym. */

  /* Kod zawarty w nawiasach wąsatych następujących po słowie „for”
   * i nawiasie (...; ...; ...) nazywamy „ciałem pętli”, ang. „body of loop”.
   * Zamiast więc mówić „Wykonywana jest instrukcja printf.”, moglibyśmy
   * powiedzieć „Wykonywane jest ciało pętli.”.
   *
   * Istnieją sytuacje w których nawiasy wąsate możemy opóścić,
   * ale programowanie już bez tej wiedzy, jest już chyba wystarczająco
   * skomplikowane. */

  /* Przyjżyjmy się jeszcze raz naszym trzem warunkom.
   * 1) int i = 0;
   * 2) i < 5;
   * 3) i++;
   * Warunek numer 1 wykonywany jest tylko raz, gdy rozpoczynamy pętle,
   * dlatego nazywamy jest „warunkiem incjalizacji pętli”.
   *
   * Warunek numer 2 wykonywany jest po każdym wykonaniu ciała pętli (mówimy
   * też: obiegu pętli).
   *
   * Warunek 3 jest testem, który ustala, czy pętla ma się zakończyć w tym
   * momencie, czy mamy wykonać jeszcze co najmniej jeden obieg pętli. */





  return 0;
}
