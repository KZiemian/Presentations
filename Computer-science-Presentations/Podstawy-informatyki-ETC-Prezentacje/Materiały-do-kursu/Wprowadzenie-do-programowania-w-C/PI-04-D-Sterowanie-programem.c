#include <stdio.h>

int main() {
  /* Narzędzia języka C które poznaliśmy do tej pory, są dość ograniczone
   * i nie pozwalają na wiele. Potrzebujemy więc poznać ich więcej.
   *
   * Nie tylko w C, ale ogólniej w programowaniu, istnieją instrukcje
   * sterujące (ang. control statements). Czemu nazywają się „instrukcjami”,
   * to kiedyś sobie powiemy. W tym momencie skupimy się na tym, jak pozwalają
   * one sterować działaniem programu.
   *
   * Konkretniej, chcemy by program sprawdził, czy warunek (ang. condition)
   * jest prawdziwy, jeśli tak to ma wykonać zestaw instrukcji A. Jeśli
   * „condition” jest fałszywy, to ma zostać wykonany zestaw instrukcji B.
   *
   * Aby to zademonstrować użyjemy operatora porównania, bo jest to coś, co
   * jest proste w zrozumieniu. */

  int intVar1 = 0;

  /* Proszę pamiętać, że funkcja scanf() jest bardzo niebezpieczna i można
   * jej używać tylko do celów edukacyjnych. */
  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);


  if (intVar1 == 5) {
    /* Jeśli (intVar1 == 5) jest prawdą, to zostanie wykonany ten zestaw
     * instrukcji. */
    printf("intVar1 == %d.\n", intVar1);
  } else {
    /* Jeśli (intVar1 == 5) nie jest prawdą, to zostanie zrobione to. */
    printf("intVar1 == %d, czyli zmienna ta przechowuje wartość inną, "
	   "niż 5.\n", intVar1);
  }

  /* Proszę uruchomić ten program kilka razy, podając różne liczby
   * i sprawdzić, czy program działa jak powinien. */

  /* Mówimy, że w instrukcji if kod się rozgałęzia (ang. branching),
   * bo możemy pójść jedną z gałęzi (ang. branch) tej instrukcji.
   * Mamy nadzieję, że nie trzeba tego bardziej tłumaczyć.
   *
   * Każda z gałęzi instrukcji if może zawierać dowolną liczbę linii kodu. */





  return 0;
}
