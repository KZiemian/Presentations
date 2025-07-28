#include <stdio.h>

/* Korzystając z tego so już wiemy, możemy zmodyfikować trochę poprzedni
   program. Po pierwsz by uprościć zapis, skorzystamy z operatora „+=”.

   Po drugie, będziemy testować, czy suma podanych liczb spełnia dwa warunki.
   1) Jest większa od kwadratu pierwszej podanej liczby.
   2) Jest mniejsza od kwadratu ostatniej podanej liczby.

   Oznacza to, że sumaLiczb musi być większa od progu dolnego i jednocześnie
   mniejsza od progu górnego. Będziemy więc potrzebowali koniunkcji
   logicznej, którą w języku C reprezentuje operator „&&”:
   (progDolny < sumaLiczb) && (sumaLiczb < progGory)

   Program ten pewnie wciąż jest nudny, ale jakieś postępy robimy. */

int main() {
  int liczbaOdUzytkownika = 0;
  int progDolny = 0;
  int progGorny = 0;
  int sumaLiczb = 0;



  printf("Podaj pierwszą liczbę: ");

  scanf("%d", &liczbaOdUzytkownika);

  sumaLiczb += liczbaOdUzytkownika;

  progDolny = liczbaOdUzytkownika * liczbaOdUzytkownika;


  printf("Podaj drugą liczbę: ");

  scanf("%d", &liczbaOdUzytkownika);

  sumaLiczb += liczbaOdUzytkownika;


  printf("Podaj trzecią liczbę: ");

  scanf("%d", &liczbaOdUzytkownika);
  printf("\n");

  sumaLiczb += liczbaOdUzytkownika;

  progGorny = liczbaOdUzytkownika * liczbaOdUzytkownika;


  if ((progDolny < sumaLiczb) && (sumaLiczb < progGorny)) {
    printf("Suma trzech podanych przez ciebie liczb wynosi %d.\n",
	   sumaLiczb);
    printf("Jest ona większa od progu dolnego %d i mniejsza od progu "
	   "górnego %d.\n", progDolny, progGorny);
  } else {
    printf("Suma trzech podanych przez ciebie liczb wychodzi poza zakres, "
	   "określony przez próg dolny i górny.\n");
  }





  return 0;
}
