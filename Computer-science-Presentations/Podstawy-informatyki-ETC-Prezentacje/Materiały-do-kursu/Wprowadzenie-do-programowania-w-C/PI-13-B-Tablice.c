#include <stdio.h>

int main() {
  int arrayInt1[3] = {1, 2, 3};
  /* Przyjrzyjmy się tej definicji tablicy. Zaczynamy ją od nazwy typu, który
   * tablica będzie przechowywać, następnie jest nazwa tablicy. Po nazwie
   * tablicy natychmiast następuje nawias kwadratowy, w którym podajemy liczbę
   * elementów tej tablicy. Jest to niezwykle ważna część składni, gdyż
   * odróżnia tablicę intów, od pojedynczej zmiennej typu int.
   *
   * Liczba elementów tablicy jest ograniczona tylko pamięcią naszego
   * komputera. W dzisiejszych czasach oznacza to, że spokojnie możemy
   * operacować na tablicach posiadającej kilka milionów elementów.
   *
   * Później, dość standardowo, mamy znak „=”, a potem w nawiasach wąsatych
   * zapisuje zawartość danej tablicy. */
  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n", arrayInt1[2]);
  printf("Kod ten ilustruje, że w tablicy arrayInt1 pod indeksem 0 jest "
	 "dostępna liczba 1, pod indeksem 1 liczba 2, a pod indeksem 2 "
	 "liczba 3.\n");

  printf("To, że elementy tablicy są numerowane indeksami 0, 1, 2,..., "
	 "jest źródłem żartów i powodem wielu błędów w programach.\n");

  /* Zgodnie z konwencją używaną w C pierwszy element tablicy znajduje się
   * pod indeksem 0:
   * arrayInt1[0]
   * Ta sama konwencja ta jest stosowana w większości języków programowania
   * posiadający tablice, jak również podobne typy danych, jak choćb listy.
   * Niedługo zobaczymy, że obowiążuje dla list w języku Python
   *
   * Indeksowanie elementów tablicy jako arrayInt1[0], arrayInt1[1],
   * arrayInt1[2],..., wzięło się od tego mocno technicznego zagadnienia,
   * czyli zarządzania pamięcią komputera w której umieszczamy tablicę,
   * następnie zostało zaadoptowane do większości typów danych, które można
   * indeksować. Trzeba jednak wspomnieć, że są wyjątki i języki takie jak
   * Julia i MATLAB indeksują tablice jako arrayInt1[1], arrayInt1[2],
   * arrayInt1[3],... */

  /* Fakt ten jest tematem żartów i przyczyną wielu problemów. Jeden z tych
   * żartów brzmi następująco.
   * - Jak programista liczy trzy jabłka?
   * - 0 jabłek, 1 jabłko, 2 jabłka.
   *
   * Jeśli chodzi o problemy, to nawet doświadczeni programiści, gdy
   * potrzebują pierwszego elementu tablicy, odruchowo wpisują
   * arrayInt1[1]
   * Drugi rodzaj problemu bierze się stąd, że jeśli mam tablicę 3 liczb,
   * to jaki jest indeks ostatniego z nich? Ponieważ indeksy liczymy jako
   * 0, 1, 2, to indeks ostatniego elementu to 2 = 3 - 1. Znowu, nawet
   * doświadczeni programiści często odruchowo wpisują
   * arrayint1[3]
   * Ogólniej, jeśli tablica ma długość n, to ostatni jej element ma indeks
   * n - 1, czyli ostatni element tablicy o długości 1024 (2^10) to
   * arrayInt1[1023]
   * nie zaś
   * arrayInt1[1024]
   *
   * Problemy z obliczaniem właściwego indeksu w tablicy pojawia się tak
   * często, że niektórzy żartują, iż w programowaniu są tylko dwie trudne
   * rzeczy. Nazywanie obiektów, wypełnianie cache'u i nie pomylenie się
   * w liczeniu o jeden ;). */



  /* Tablica może zawierać tylko elementy tego samego typu. To odróżna ją
   * choćby od list, dobrze znanych z takich języków jak Python, które mogą
   * przechowywać elementy dowolnych typów. */
  printf("Operacja: arrayInt1[0] == 10.5;\n");
  arrayInt1[0] = 10.5;


  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);
  printf("arrayInt1[1] == %d.\n", arrayInt1[1]);
  printf("arrayInt1[2] == %d.\n", arrayInt1[2]);

  printf("arrayInt1[0] == %d.\n", arrayInt1[0]);

  /* Przykład ten wyjaśnia też torchę, dlaczego o tablicy można myśleć jako
   * o zbiorczej nazwie na kilka zmiennych. W naszym przypadku jest to
   * zbiorcza nazwa trzech zmiennych. */

    /* By podkreślić, że tablica może zawierać tylko jeden typ danych,
   * zobaczmy, co się stanie, jeśli utworzymy tablicę typu int, nadając
   * jej elementom wielkości zmiennoprzecinkowe. */



  return 0;
}
