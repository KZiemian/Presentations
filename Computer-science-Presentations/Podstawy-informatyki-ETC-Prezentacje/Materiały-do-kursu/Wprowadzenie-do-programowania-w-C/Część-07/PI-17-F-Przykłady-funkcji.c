#include <stdio.h>

/* Funkcje to jedna z najważniejszych rzecz w C i 90% innych języków
 * programowania. Choć w różnych językach mogą się nazywać inaczej.
 * Na przykład w języku Java funkcję noszą nazwę metod. Niestety wyjaśnienie
 * tej dziwnej nazwy, wymagałoby zagłębienia się w naturę Javy, a na to nie
 * mamy czasu.
 *
 * Dlatego warto zobaczyć co kilka różnych typów funkcji i to co mogą
 * robić. W skrócie, funkcje mogą robić wszystko. */

/* Funkcja mogą pobierać więcej niż jeden argument. Poniżej funkcja
 * pobierająca dwa argumenty typu int i zwracająca liczbę całkowitą,
 * czyli typu int. */

int functionLiniowaDwochZmiennych(int x, int y) {
  return x - 2 * y;
}



/* Funkcja pobierająca trzy argumenty typu int i zwracająca liczbę całkowitą,
 * czyli typu int. Dodatkowo, funkcja ta opisuje wykonane obliczenia. */

int functionLiniowaTrzechZmiennych(int x, int y, int z) {
  int value = x + 2 * y + 3 * z;

  printf("%d + 2 * %d + 3 * %d == %d.\n", x, y, z, value);

  return value;
}



/* Przykład funkcji, która nie pobiera żadnych argumentów, zwraca jednak
 * liczbę 4. */

int functionNiePobierajacaArgumentow() {
  /* Funkcji które nie pobierają argumentu należy unikać jak ognia.
   * Jednak za względu na pewne bardziej zaawansowane własności języka C,
   * takie funkcje mogą okazać się użyteczne.
   *
   * Bo czemu życie miałoby być proste? */

  return 4;
}





int main() {
  int liczbaCalkowita1 = 0;

  printf("funkcjaLiniowaDwochZmiennych(1, 2) == %d.\n\n",
	 funkcjaLiniowaDwochZmiennych(1, 2));

  printf("Wykonanie instrukcji: "
	 "liczbaCalkowita1 = funkcjaLiniowaTrzechZmiennych(1, 2, 3).\n");

  /* Wartość zwracaną przez funkcję, możemy przypisać do zmiennej. */
  liczbaCalkowita1 = funckcjaLiniowaTrzechZmiennych(1, 2, 3);

  printf("liczbaCalkowita1 == %d.\n\n", liczbaCalkowita1);

  printf("funkcjaNiePobierajacaArgumentow() == %d.\n",
	 funkcjaNiePobierajacaArgumentow());

  /* Widzimy, że w języku C można stworzyć funkcję nie pobierającą argumentów.
   * Tego typu funkcje potrafią się niekiedy przydać, acz lepiej ich
   * unikać jak długo się da. */





  return 0;
}
