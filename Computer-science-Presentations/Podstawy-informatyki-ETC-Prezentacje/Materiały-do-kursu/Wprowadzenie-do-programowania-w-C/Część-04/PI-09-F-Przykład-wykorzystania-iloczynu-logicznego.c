#include <stdio.h>

int main() {
  int liczbaOdUzytkownika = 0;

  printf("Podaj liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  if ((liczbaOdUzytkownika < 3) && (-5 < liczbaOdUzytkownika)) {
    printf("Wartość zmiennej liczbaOdUzytkownika zawiera się "
	   "w pożądanych zakresie.\n");
  } else {
    printf("Wartość zmiennej liczbaOdUzytkownika znajduje się poza "
	   "pożądany zakres.\n");
  }





  return 0;
}
