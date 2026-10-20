#include <stdio.h>

/* Ten program jest równie nieciekawy jak poprzedni. Sprawdza tylko, czy
 * podaliśmy liczbę równą 9. */

int main() {
  int liczbaOdUzytkownika = 0;

  printf("Podaj liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  if (liczbaOdUzytkownika = 9) {
    printf("Użytkownik podał liczbę 9.\n");
  } else {
    printf("Użytkownik nie podał liczby 9, tylko liczbę %d.",
	   liczbaOdUzytkownika);
  }

  printf("\nNiezależnie co podamy, program napisze, że podaliśmy 9!!!\n");

  /* Jest tak dlatego, że w C fałsz to 0, ale prawdą jest KAŻDA liczba
   * całkowita różna od 0. Więc błędny kod
   * if (liczbaOdUzytkownika = 9) {
   * zwraca wartość 9 do ifa, a że 9 jest różne od 0, if uznaje, że warunek
   * jest prawdziwy i wykona swoją pierwszą gałąż.
   *
   * Przyjęło się powszechnie, że gdy programista ma zwrócić prawdę zwraca
   * liczbę 1. Tym co zwracają bez powodu jako prawdę liczbę 2, grożą kary
   * cielesne ze strony ludzi, którzy muszą pracować z ich kodem. O tym,
   * że inne liczby też oznaczają prawdę nie wspomnieliśmy, bo chcieliśmy
   * choć trochę uprościć całe zagadnienie.
   *
   * O tym co jeszcze C uzna za prawdę, może powiem sobie później. */





  return 0;
}
