#include <stdio.h>

/* By wyjaśnić do czego służą tablice, zacznijmy od następującego problemu.
 * Mamy stronę na którą logują się dane osoby, każda osoba posiada swój login
 * i hasło.
 *
 * Niestety, jeszcze nie mogliśmy omówić tego w jaki sposób w języku C może
 * przechowywać takie rzeczy, jak tekst reprezentujący login, przykładowo
 * „JanNowak”. Wynika to z tego, że język C daje nam dość skromne narzędzia
 * do operowania na tekście, przez co musimy dysponować już stosunkowo
 * odpowiednią wiedzą i umijętnościami, by móc ich użyć. Na razie proszę
 * nam uwieżyć, że można stworzyć w C zmienną, która będzie przechowywała
 * jakiś tekst.
 *
 * Wracając do przykładu strony, powiedzmy, że mamy 10 użytkowników. Musimy
 * więc utworzyć 10 zmiennych na ich loginy i jeszcze 10 zmiennych na ich
 * hasła. Mielibyśmy wówczas mniej więcej taki kod.
 * user1login = "JanNowak";
 * user2login = "AndrzejNowak";
 * user3login = "StefanNowak";
 * etc.
 *
 * Dla 10 użytkowników to jeszcze jest do zrobienia, ale co jeśli użytkowników
 * jest 10 000? Stworzenie takiej liczby zmiennych jest praktycznie
 * niemożliwe, a nawet gdyby było, to jak napisać kod, który operuje taką
 * liczbą zmiennych? Aby rozwiązać ten problem, język C udostępnia nam
 * strukturę danych zwaną tablicą.
 */

int main() {
  /* Zaczniemy od wprowadzenia najprostrzej tablicy, czyli tablicy
   * zawierającej liczby całkowite. */
  int arrayInt1[3] = {1, 2, 3};

  /* Kod powyżej definiuje tablicę liczb całkowitych o długości 3. Taką
   * tablicę można rozumieć jako zbiorczą nazwę na trzy zmienne typu
   * całkowitego, tak że pełna nazwa pierwszej zmiennej to arrayInt1[0],
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
	 "takie same, jak te które możemy stosować na znanym nam już "
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
  printf("arrayInt1[0] == %d.\n\n", arrayInt1[0]);


  printf("Na elementach tablicy możemy oczywiście wykonywać "
	 "i takie operacje.\n");
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n\n", arrayInt1[2]);

  printf("Operacja: arrayInt1[0] + arrayInt[1] == %d;\n\n",
	 arrayInt1[0] + arrayInt1[1]);

  printf("Operacja: arrayInt1[2] = arrayInt1[0] + arrayInt1[1];\n");
  arrayInt1[2] = arrayInt1[0] + arrayInt1[1];

  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n\n", arrayInt1[2]);

  /* Tablica może zawierać tylko elementy tego samego typu. To odróżna ją
   * choćby od list, dobrze znanych z takich języków jak Python, które mogą
   * przechowywać elementy dowolnych typów. */
  arrayInt1[0] = 10.25;
  /* Linia powyżej jest tak samo poprawna, jak wzięcie zmiennej typu
   * całkowitego intVar1 i napisanie
   * intVar1 = 10.25;
   * Ma też te same te same problemy, czyli obcinanie części ułamkowej. */

  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  /* Przykład ten wyjaśnia też torchę, dlaczego o tablicy można myśleć jako
   * o zbiorczej nazwie na kilka zmiennych. W naszym przypadku jest to
   * zbiorcza nazwa trzech zmiennych. */





  return 0;
}
