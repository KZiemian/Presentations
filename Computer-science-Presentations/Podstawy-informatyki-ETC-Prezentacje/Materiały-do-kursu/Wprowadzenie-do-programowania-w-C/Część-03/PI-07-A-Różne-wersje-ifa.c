#include <stdio.h>

int main() {
  /* Instrukcja sterująca if może występować w wielu wariantach. Oto kilka
   * z nich. */

  int liczbaOdUzytkownika = 0;

  printf("Pierwsza wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");

  /* Proszę pamiętać jak niebezpieczna jest funkcja scanf()! */

  scanf("%d", &liczbaOdUzytkownika);

  /* Ta instrukcja warunkowa if sprawdza, czy (liczbaOdUzytkownika < 10)
   * jest prawdą. Jeśli tak, to wykonuje instrukcje w nawiasach wąsatych.
   * Jeśli (liczbaOdUzytkownika < 10) nie jest prawdą, to nic nie robi. */

  if (liczbaOdUzytkownika < 10) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 10.\n",
	   liczbaOdUzytkownika);
  }

  printf("Koniec pierwszej instrukcji warunkowej if.\n\n");





  printf("Druga wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  /* Ta instrukcja if jest już nam znana. Jeśli warunek
   * (liczbaOdUzytkownika < 10) jest prawdą,
   * to wykonywana jest instrukcja w pierwszej parze nawiasów wąsatych.
   * Jeśli (liczbaOdUzytkownika < 10) nie jest prawdą, to wykonywane są
   * instrukcje w drugiej parze nawiasów wąsatych, po słowie „else”.
   * Angielskie „else” na polski można przetrłumaczyć jako
   * „w przeciwnym wypadku”. */

  if (liczbaOdUzytkownika < 10) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 10.\n",
	   liczbaOdUzytkownika);
  } else {
    printf("liczbaOdUzytkownika == %d, jest to liczba równa lub większa "
	   "od 10.\n", liczbaOdUzytkownika);
  }

  printf("Koniec drugiej instrukcji warunkowej if.\n\n");





  printf("Trzecia wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  /* Ten if jest bardziej rozbudowany. Jeśli (liczbaOdUzytkownika < 10),
   * to wykonywana są instrukcje w pierwszej parze nawiasów wąsatych, którą
   * oznaczyliśmy jako gałąź A.
   *
   * Jeśli (liczbaOdUztykownika < 10) nie jest prawdą, to przechodzimy do
   * nowego ifa, i sprawdzamy, czy prawdą jest (liczbaOdUztykownika < 20).
   * Jeśli tak, to wykonujemy kod w parze nawiasów wąsatych, oznaczony jako
   * gałąź B. Jeśli teraz (liczbaOdUzytkownika < 20) nie jest prawdą, to
   *
   * Działanie tego ifa można podsumować w następujacy sposób.
   * Warunek (liczbaOdUzytkownika < 10) jest prawdziwy, wykonujemy gałąź A.
   * Warunki (liczbaOdUzytkownika >= 10) i (liczbaOdUzytkownika < 20) są
   * jednocześnie prawdziwe, wykonujemy gałąź B.
   *
   * Jeśli (liczbaOdUzytkownika < 10) i (liczbaOdUzytkownika < 20) są
   * jednocześnie fałszywe, to wykonujemy gałąź C. */

  if (liczbaOdUzytkownika < 10) {
    /* Gałąź A */
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 10.\n",
	   liczbaOdUzytkownika);
  } else if (liczbaOdUzytkownika < 20) {
    /* Gałąź B. */
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza od 20, "
	   "ale większa bądź równa 10.\n", liczbaOdUzytkownika);
  } else {
    /* Gałąź C. */
    printf("liczbaOdUzytkownika == %d, jest to liczba większa bądź "
	   "równa 20.\n", liczbaOdUzytkownika);
  }

  printf("Koniec trzeciej instrukcji warunkowej if.\n\n");





  /* Ta instrukcja działa analogicznie jak poprzednia, jest tylko bardziej
   * rozbudowana, przez dodanie jednej gałęzi. */

  printf("Czwarta wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  if (liczbaOdUzytkownika < 10) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 10.\n",
	   liczbaOdUzytkownika);
  } else if (liczbaOdUzytkownika < 20) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 20, "
	   "ale większa bądź równa 10.\n", liczbaOdUzytkownika);
  } else if (liczbaOdUzytkownika < 30) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 30, "
	   "ale większa bądź równa 20.\n", liczbaOdUzytkownika);
  } else {
    printf("liczbaOdUzytkownika == %d, jest to liczba większa bądź "
	   "równa 30.\n", liczbaOdUzytkownika);
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
  scanf("%d", &liczbaOdUzytkownika);

  if (liczbaOdUzytkownika < 10) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 10.\n",
	   liczbaOdUzytkownika);
  } else if (liczbaOdUzytkownika < 20) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 20, "
	   "ale większa bądź równa 10.\n", liczbaOdUzytkownika);
  } else if (liczbaOdUzytkownika < 30) {
    printf("liczbaOdUzytkownika == %d, jest to liczba mniejsza niż 30, "
	   "ale większa bądź równa 20.\n", liczbaOdUzytkownika);
  }

  printf("Koniec piątej instrukcji warunkowej if.\n");


  /* Jeśli od nadmiaru różnych wersji instrukcji if boli Państwa głowa,
   * to proszę się tym nie martwić. Człowiek szybko do tego przywyka. */

  /* Czy któryś element programu wymaga dodatkowych wyjaśnień? */





  return 0;
}
