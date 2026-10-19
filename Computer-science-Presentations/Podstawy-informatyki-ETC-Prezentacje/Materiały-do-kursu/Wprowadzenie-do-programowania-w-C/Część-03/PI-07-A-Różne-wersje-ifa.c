#include <stdio.h>

int main() {
  /* Instrukcja sterująca if może występować w wielu wariantach. Oto kilka
   * z nich. */

  int intVar1 = 0;

  printf("Pierwsza wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");

  /* Proszę pamiętać jak niebezpieczna jest funkcja scanf()! */

  scanf("%d", &intVar1);

  /* Ta instrukcja warunkowa if sprawdza, czy (intVar1 < 10) jest prawdą.
   * Jeśli tak, to wykonuje instrukcje w nawiasach wąsatych.
   * Jeśli (intVar1 < 10) nie jest prawdą, to nic nie robi. */

  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba większa niż 10.\n", intVar1);
  }

  printf("Koniec pierwszej instrukcji warunkowej if.\n\n");





  printf("Druga wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);

  /* Ta instrukcja if jest już nam znana. Jeśli (intVar1 < 10) jest prawdą,
   * to wykonywana jest instrukcja w pierwszej parze nawiasów wąsatych.
   * Jeśli (intVar1 < 10) nie jest prawdą, to wykonywane są instrukcje
   * w drugiej parze nawiasów wąsatych, po słowie „else”.
   * Angielskie „else” na polski można przetrłumaczyć jako
   * „w przeciwnym wypadku”. */

  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 10.\n", intVar1);
  } else {
    printf("intVar1 == %d, jest to liczba równa lub większa od 10.\n",
	   intVar1);
  }

  printf("Koniec drugiej instrukcji warunkowej if.\n\n");





  printf("Trzecia wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);

  /* Ten if jest bardziej rozbudowany. Jeśli (intVar1 < 10), to wykonywana
   * są instrukcje w pierwszej parze nawiasów wąsatych, którą oznaczyliśmy
   * jako gałąź A.
   * Jeśli (intVar1 < 10) nie jest prawdą, to przechodzimy do nowego ifa,
   * i sprawdzamy, czy prawdą jest (intVar1 < 20). Jeśli tak, to wykonujemy
   * kod w parze nawiasów wąsatych, oznaczony jako gałąź B.
   * Jeśli teraz (intVar1 < 20) nie jest prawdą, to
   *
   * Działanie tego ifa można podsumować w następujacy sposób.
   * Warunek (intVar1 < 10) jest prawdziwy, wykonujemy gałąź A.
   * Warunki (intVar1 >= 10) i (intVar1 < 20) są jednocześnie prawdziwe,
   * wykonujemy gałąź B.
   * Jeśli (intVar1 < 10) i (intVar1 < 20) są jednocześnie fałszywe,
   * to wykonujemy gałąź C. */

  if (intVar1 < 10) {
    /* Gałąź A */
    printf("intVar1 == %d, jest to liczba mniejsza niż 10.\n", intVar1);
  } else if (intVar1 < 20) {
    /* Gałąź B. */
    printf("intVar1 == %d, jest to liczba mniejsza od 20, ale większa bądź"
	   "równa 10.\n", intVar1);
  } else {
    /* Gałąź C. */
    printf("intVar1 == %d, jest to liczba większa bądź równa 20.\n",
	   intVar1);
  }

  printf("Koniec trzeciej instrukcji warunkowej if.\n\n");





  /* Ta instrukcja działa analogicznie jak poprzednia, jest tylko bardziej
   * rozbudowana, przez dodanie jednej gałęzi. */

  printf("Czwarta wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);

  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 10.\n", intVar1);
  } else if (intVar1 < 20) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 20, ale większa bądź "
	   "równa 10.\n", intVar1);
  } else if (intVar1 < 30) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 30, ale większa bądź "
	   "równa 20.\n", intVar1);
  } else {
    printf("intVar1 == %d, jest to liczba większa bądź równa 30.\n",
	   intVar1);
  }

  printf("Koniec czwartej instrukcji warunkowej if.\n");



  /* Ta instrukcja if służy tylko pokazaniu, że zawsze możemy opuścić
   * ostatnie słowo „else” i następującą po nim gałąź.
   *
   * Przy czym NIE można usunąć słówka „else” i pozostawić jego gałęzi,
   * czyli nawiasów wąsatych wraz z zawartością, gdyż program będzie się
   * wtedy zachowywał w skomplikowany sposób, a to utrudni nam życie. */

  printf("Piąta wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);

  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 10.\n", intVar1);
  } else if (intVar1 < 20) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 20, ale większa bądź "
	   "równa 10.\n", intVar1);
  } else if (intVar1 < 30) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 30, ale większa bądź "
	   "równa 20.\n", intVar1);
  }

  printf("Koniec piątej instrukcji warunkowej if.\n");


  /* Jeśli od nadmiaru różnych wersji instrukcji if boli Państwa głowa,
   * to proszę się tym nie martwić. Człowiek szybko do tego przywyka. */

  /* Czy któryś element programu wymaga dodatkowych wyjaśnień? */





  return 0;
}
