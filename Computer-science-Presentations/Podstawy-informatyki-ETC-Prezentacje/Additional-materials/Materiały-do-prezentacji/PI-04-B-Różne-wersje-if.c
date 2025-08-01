#include <stdio.h>

int main() {
  /* Instrukcja sterująca if może występować w wielu wariantach. Oto kilka
     z nich. */
  int intVar1 = 7;

  if (intVar1 > 5) {
    printf("intVar1 == %d, jest to liczba większa niż 5.\n", intVar1);
  }

  printf("Koniec pierwszej instrukcji warunkowej if.\n\n");



  if (intVar1 < 10) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 10.\n", intVar1);
  } else {
    printf("intVar1 == %d, jest to liczba równa lub większa od 10.\n",
	   intVar1);
  }

  printf("Koniec drugiej instrukcji warunkowej if.\n\n");



  if (intVar1 < 7) {
    printf("intVar1 == %d, jest to liczba mniejsza niż 7.\n", intVar1);
  } else if (intVar1 < 11) {
    printf("intVar1 == %d, jest to liczba mniejsza od 11, ale większa bądź"
	   "równa 7.\n", intVar1);
  } else {
    printf("intVar1 == %d, jest to liczba więkzzek od 11.\n", intVar1);
  }

  printf("Koniec trzeciej instrukcj warunkowej if.\n\n");



  if (intVar1 < 13) {
    printf("intVar1 = %d, jest to liczba mniejsza niż 13.\n", intVar1);
  } else if (intVar1 < 17) {
    printf("intVar1 = %d, jest to liczba mniejsza niż 17, ale większa bądź"
	   "równa 13.\n", intVar1);
  }

  printf("Koniec trzeciej instrukcji warunkowej if.\n");

  /* Jeśli od nadmiaru różnych wersji instrukcji if boli Państwa głowa,
     to proszę się tym nie martwić. Człowiek szybko do tego przywyka. */





  return 0;
}
