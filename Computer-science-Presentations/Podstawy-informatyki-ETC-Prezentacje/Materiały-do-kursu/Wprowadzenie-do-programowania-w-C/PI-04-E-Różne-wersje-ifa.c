#include <stdio.h>

int main() {
  /* Instrukcja sterująca if może występować w wielu wariantach. Oto kilka
   * z nich. */
  int intVar1 = 0;

  printf("Pierwsza wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  /* Proszę pamiętać jak niebezpieczna jest funkcja scanf()! */
  scanf("%d", &intVar1);

  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba większa niż 10.\n", intVar1);
  }

  printf("Koniec pierwszej instrukcji warunkowej if.\n\n");



  printf("Druga wersja instrukcji warunkowej if.\n");

  printf("Podaj liczbę: ");
  scanf("%d", &intVar1);

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

  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 10.\n", intVar1);
  } else if (intVar1 < 20) {
    printf("intVar1 == %d, jest to liczba mniejsza od 20, ale większa bądź"
	   "równa 10.\n", intVar1);
  } else {
    printf("intVar1 == %d, jest to liczba większa bądź równa 20.\n", intVar1);
  }

  printf("Koniec trzeciej instrukcji warunkowej if.\n\n");



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
    printf("intVar1 == %d, jest to liczba większa bądź równa 30.\n", intVar1);
  }

  printf("Koniec czwartej instrukcji warunkowej if.\n");

  /* Jeśli od nadmiaru różnych wersji instrukcji if boli Państwa głowa,
   * to proszę się tym nie martwić. Człowiek szybko do tego przywyka. */





  return 0;
}
