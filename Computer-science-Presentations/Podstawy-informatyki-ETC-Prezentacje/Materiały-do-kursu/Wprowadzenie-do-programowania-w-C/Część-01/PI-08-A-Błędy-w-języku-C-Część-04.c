#include <stdio.h>

int main() {
  /* Powiedzmy, że chcemy napisać program, który sprawdza, czy użytkownik
   * podał liczbę 0 czy nie. Program taki jest dość bezużyteczny,
   * ale ilustruje pewien problem.
   *
   * Piszemy więc następujący kod. */

  int liczbaOdUzytkownika = 0;

  printf("Podaj liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  if (liczbaOdUzytkownika = 0) {
    printf("Użytkownik podał liczbę 10.\n");
  } else {
    printf("Użytkownik podał liczbę różną od 10. Liczbą tą jest: %d.\n",
	   liczbaOdUzytkownika);
  }

  printf("\nNawet jak podamy 0, program powiem, że podaliśmy liczbę "
	 "różną od 0!!!\n");

  /* Dlaczego tak jest? Otóż popełniliśmy błąd. W linii
   * if (liczbaOdUzytkownika = 0) {
   * mamy PRZYPISANIE do zmiennej liczbaOdUzytkownika liczby 0, a nie
   * PORÓWNANIE zmiennej liczbaOdUzytkownika ze zmienną 0. Czemu życie
   * musi być takie skomplikowane?
   *
   * Poprawna wersja kodu to
   * if (liczbaOdUzytkownika == 0) {
   * Tak, cała różnica sprowadza się do tego, czy jest jeden znak „=”,
   * czy „==”. Czemu życie musi być takie skomplikowane?
   *
   * Problem bierze się stąd, że instrukcja (liczbaOdUzytkownika == 0)
   * sprawdza czy zmienna liczbaOdUzytkownika jest równa 0, czy nie.
   * Jeśli zmienna ta zawiera liczbę zero to porównanie  prawdę (w języku C,
   * jest nią liczba 1) i wykonuje się pierwsza gałąź ifa. Jeśli zmienna
   * nie zawiera liczby 0, to zwracany jest fałsz (w języku C, jest nim
   * liczba 0) i wykonuje się gałąź else tej instrukcji.
   *
   * Ale porównanie to nie przypisanie. Instrukcja przypisania
   * liczbaOdUzytkownika = 0
   * nadaje zmiennej liczbaOdUzytkownika wartość 0, następnie zwraca wartość
   * 0 ifowi, który wobec tego, że 0 to fałsz, wykonuje gałąź else.
   *
   * Ogólnie, instrukcja przypisania
   * mojaZmienna = 7
   * oprócz tego, że zmiennia wartość zmiennej „mojaZmienna”, to jeszcze
   * zwraca jako rezultat przypisania, w tym wypadku jest nim liczba 7.
   * Co niestety prowadzi do kolejnych błędów w języku C. */





  return 0;
}
