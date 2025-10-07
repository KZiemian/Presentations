#include <stdio.h>

/* Dysponując naszą dotychczasową wiedzą, wciąż nie jesteśmy w stanie napisać
   zbyt ciekawych programów. Pomimo nudy jaką proste programy często niosą,
   spróbujmy zmierzyć się z programem, który pobiera trzy liczby od
   użytkownika, następnie sprawdza, czy ich suma jest większa od kwadratu
   pierwszej z nich. */

int main() {
  int liczbaOdUzytkownika = 0;
  int sumaLiczb = 0;
  int wartoscProgowa = 0;



  printf("Ten program przyjmuje TYLKO liczby całkowite.\n\n");

  printf("Podaj pierwszą liczbę: ");

  scanf("%d", &liczbaOdUzytkownika);

  /* Zwiększamy wartość przechowywaną przez zmienną „sumaLiczb” o wartość
     zmiennej „liczbaOdUzytkownika”. */
  sumaLiczb = sumaLiczb + liczbaOdUzytkownika;

  wartoscProgowa = liczbaOdUzytkownika * liczbaOdUzytkownika;


  printf("Podaj drugą liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);

  sumaLiczb = sumaLiczb + liczbaOdUzytkownika;


  printf("Podaj trzecią liczbę: ");
  scanf("%d", &liczbaOdUzytkownika);
  printf("\n");

  sumaLiczb = sumaLiczb + liczbaOdUzytkownika;

  if (wartoscProgowa < sumaLiczb) {
    printf("Suma trzech podanych przez ciebie liczb wynosi %d.\n",
	   sumaLiczb);
    printf("Jest to liczba większa od wartości progowej, która wynosi %d.\n",
	   wartoscProgowa);
  } else {
    printf("Suma trzech podanych przez ciebie liczb jest mniejsz lub równa "
	   "wartości progowej.\n");
  }

  /* Proszę przetestować ten program. */





  return 0;
}
