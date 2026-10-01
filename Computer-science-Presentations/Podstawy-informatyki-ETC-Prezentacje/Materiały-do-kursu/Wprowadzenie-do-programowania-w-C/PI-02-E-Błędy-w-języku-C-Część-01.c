#include <stdio.h>

/* Język C powstał w latach 70-tych XX wieku i od tego czasu zawojował świat.
 * W 2026 roku, wciąż jest jednym z pięciu (!) najczęściej stosowanych
 * języków na świecie. Niestety, ma też sporo wad i swoich dziwactw.
 *
 * Jeden problem z językiem C polega na tym, że posiada bardzo mało
 * mechanizmów obrony przed użytkownikiem, przez co można w nim popełnić
 * naprawdę dużo błędów. Jak pokazuje praktyka, błędy w programowaniu są
 * nie do uniknięcia, niezależnie jakiego języka używamy. C po prostu daje
 * nam więcej okazji, by je popełnić. */

int main() {
  /* Powiedzmy, że chcielibyśmy wyliczyć resztę z dzielenia liczby 293
   * przez liczbę 7. Po co? Powiedzmy, że tak by przetestować nasz komputer.
   * Piszemy więc poniższy kod. */
  printf("(293 % 7) == %d.\n", 293 % 7);

  /* Niestety kod ten zawier błąd. Napisaliśmy symbol „%”, bo chcielibyśmy
   * by ten symbol był w tym miejscu wyświetlony. Jednak jest z tym problem.
   * Funkcja printf() oczekuje, że po pojedynczym wystąpieniu symbolu „%”
   * pojawi się symbol, taki jak „d”, który powie mu co zrobić.
   * My napisaliśmy pojedynczy symbol „%” i printf() nie wie co z nim zrobić.
   * Funkcja printf() może zrobić to co trzeba lub nie, więc tą linię
   * należy uznać za źle napisany kod.
   *
   * Inaczej mówiąc, symbol „%” dla funkcji printf() oznacza, że ma coś
   * wstawić w to miejsce tekstu i symbole zaraz za „%” powiedzą mu, co
   * dokładnie ma tu wstawić. Przykładowo „%d” oznacza, że ma w to miejsce
   * wstawić liczbę całkowitą.
   *
   * Człowiek obeznajomiony z językiem C, z kontekstu wywnioskuje,
   * że „%” w „293 % 7” oznacza operację oblicznia reszty z dzielenia,
   * a nie informacje, że coś należy w tym miejscu wstawić. Jednak
   * komputery są BARDZO złe w czytaniu kontekstu, więc trzeba im jasno
   * powiedzieć, co chcemy by zrobił. Ponieważ ze względu na swoje znacznie
   * w funkcji printf() symbol „%” nie może oznaczać samego siebie, więc
   * przyjęto, iż w printf() by wypisać symbol procenta piszemy „%%”.
   * Jak się głębiej zastanowić, to ma sens, ale nie wiemy, czy chcą się
   * Państwo zagłębiać w te detale techniczne? */

  /* O tym, że komputery są bardzo złe w wnioskowaniu z kontekstu,
   * przekonają się Państwo jeszcze BARDZO wiele razy. Bo niestety, życie
   * nie jest proste. */





  return 0;
}
