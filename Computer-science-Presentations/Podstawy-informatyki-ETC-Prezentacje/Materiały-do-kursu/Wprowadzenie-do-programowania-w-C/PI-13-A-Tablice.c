#include <stdio.h>

/* By wyjaśnić do czego służą tablice, zacznijmy od następującego problemu.
 * Mamy stronę na którą logują się dane osoby, każda osoba posiada swój login
 * i hasło.
 *
 * Niestety, jeszcze nie mogliśmy omówić tego w jaki sposób w języku C może
 * przechowywać takie rzeczy, jak tekst reprezentujący login, przykładowo
 * „JanNowak”. Wynika to z tego, że język C daje nam dość skromne narzędzia
 * do operowania na tekście, przez co musimy dysponować już stosunkowo
 * odpowiednią wiedzą i umiejętnościami, by móc ich użyć. Na razie proszę
 * nam uwierzyć, że można stworzyć w C zmienną, która będzie przechowywała
 * jakiś tekst.
 *
 * Wracając do przykładu strony, powiedzmy, że mamy 10 użytkowników. Musimy
 * więc stworzyć 10 zmiennych na ich loginy i jeszcze 10 zmiennych na ich
 * hasła. Mielibyśmy wówczas mniej więcej taki kod.
 * user1login = "JanNowak";
 * user2login = "AndrzejNowak";
 * user3login = "StefanNowak";
 * etc.
 *
 * Dla 10 użytkowników to jeszcze jest do zrobienia, ale co jeśli
 * użytkowników jest 10 000? Stworzenie takiej liczby zmiennych jest
 * praktycznie niemożliwe, a nawet gdyby było, to jak napisać kod, który
 * operuje taką liczbą zmiennych? Aby rozwiązać ten problem, język C
 * udostępnia nam strukturę danych zwaną tablicą.
 */

int main() {
  /* Zaczniemy od wprowadzenia najprostrzej tablicy, czyli tablicy
   * zawierającej liczby całkowite. */
  int arrayInt1[3] = {1, 2, 3};

  /* Kod powyżej definiuje tablicę liczb całkowitych o długości 3. Taką
   * tablicę można rozumieć jako zbiorczą nazwę na trzy zmienne typu
   * całkowitego, także pełna nazwa pierwszej zmiennej to arrayInt1[0],
   * drugiej arrayInt1[1], zaś trzeciej arrayInt1[2].
   *
   * Mówimy, że tablica arrayInt1 zawiera element 1 pod indeksem 0,
   * element 2 pod indeksem 1 i element 3 pod indeksem 2. Poniższy kod
   * ilustruje o co chodzi. */
  printf("Zawartość tablicy arrayInt1.\n");
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n\n", arrayInt1[2]);

  /* Poniższe przykład ilustrują, dlaczego można myśleć o tablicy, jako
   * o zbiorczej nazwie kilku zmiennych tego samego typu. */
  printf("Tablicę można w przybliżeniu traktować, jak zbiorczą nazwę "
	 "kilku zmiennych tego samego typu.\n");
  printf("arrayInt1[0] == %d.\n\n", arrayInt1[0]);

  printf("Operacje które można wykonać na elementach tablicy są w zasadzie "
	 "takie same, jak te które możemy stosować na znanych nam już "
	 "zmiennych.\n");

  printf("Operacja: arrayInt1[0] = 10;\n");
  arrayInt1[0] = 10;
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  printf("Operacja: arrayInt1[0] = 2 * 4;\n");
  arrayInt1[0] = 2 * 4;
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  printf("Operacja: arrayInt1[0] += 3;\n");
  arrayInt1[0] += 3;
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  printf("Operacja: arrayInt1[0] -= 5;\n");
  arrayInt1[0] -= 5;
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  printf("Operacja: arrayInt1[0] *= 2;\n");
  arrayInt1[0] *= 2;
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  printf("Operacja: arrayInt1[0] /= 3;\n");
  arrayInt1[0] /= 3;
  printf("arrayInt1[0] == %d.\n\n\n\n", arrayInt1[0]);


  printf("Na elementach tablicy możemy oczywiście wykonywać "
	 "następujące operacje.\n\n");
  printf("Zawartość tablicy arrayInt1.\n");
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n\n", arrayInt1[2]);

  printf("Operacja: arrayInt1[0] + arrayInt[1] == %d;\n\n",
	 arrayInt1[0] + arrayInt1[1]);

  printf("Operacja: arrayInt1[2] = arrayInt1[0] + arrayInt1[1];\n");
  arrayInt1[2] = arrayInt1[0] + arrayInt1[1];

  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n", arrayInt1[2]);






  return 0;
}
