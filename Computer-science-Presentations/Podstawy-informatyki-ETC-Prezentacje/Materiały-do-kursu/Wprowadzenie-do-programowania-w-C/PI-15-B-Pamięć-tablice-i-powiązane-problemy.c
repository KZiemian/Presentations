#include <stdio.h>

/* Przy pracy z tablicami w języku C, często możemy naruszyć pamięć
 * komputera. By zrozumieć dlaczego tak się dzieje, musimy trochę powiedzieć
 * o tym jak ta pamięć działa.
 *
 * By uprościć problem, rozważmy komputer który ma tylko pamięć RAM
 * o rozmiarze 1024 (2^10) bajtów. Dzisiaj jest to śmiesznie mało, jednak
 * rozważenie takie przypadku pozwoli nam łatwiej zrozumieć o co chodzi.
 * Każdy program komputerowy wymaga trochę pamięci by mógł pracować,
 * w szczególności program które piszemy, też takiej pamięci potrzebują.
 *
 * Aby zarządzać pamięcią, każdy jej bajt jest ponumerowany liczbami
 * od 0 do 1023. Należy też wyobrazić sobie, że bajty o sąsiadujących
 * numerach, takich jak 40 i 41, leżą obok siebie w pamięci. W RAMie może
 * to wyglądać tak, że elementy elektroniczne które przechowują bajty
 * o numerze 40 i 41 są zaraz obok siebie na odpowiedniej płytce
 * elektronicznej.
 *
 * Pytanie, jak program przechowuje w pamięci tablicę 5 liczb typu int?
 * Zwykle jedna liczba typu int zajmuje 4 bajty (wybór 4 bajtów jest z wielu
 * względów wygodny), więc tablica 5 intów zajmie 20 bajtów. Rozpatrzmy
 * przykład, że pierwsza liczba całkowita z tej tablicy zajmuje bajty
 * od 101 do 104. Druga musi być zaraz obok, zajmować bajty od 105 do 108,
 * trzecia od 109 do 112, czwarty od 113 do 116, piąty od 117 do 120.
 *
 * Zauważmy coś bardzo ważnego. Ponieważ każdy element naszej tablicy zajmuje
 * tyle samo bajtów w pamięci, więc jeśli znam jego indeks i bajt, który
 * zaczyna tablicę, to jestem w stanie szybko znaleźć które bajty zajmowane
 * przez dowolny jej element. Jeśli chcę znaleźć element o indeksie 2, to
 * ponieważ pierwszy element tablicy zaczyna się na bajcie 101, int ma
 * długość 4 bajtów, to element o indeksie 2 zaczyna się na bajcie
 * numerBajtuPoczątkowego == 101 + 2 * 4 == 109.
 *
 * Proszę zauważyć, że element o indeksie 0 zaczyna się na bajcie
 * numerBajtuPoczątkowego == 101 + 0 * 4 == 101.
 * Jak mogli się już Państwo domyśleć, to właśnie ten fakt sprawił,
 * że indeksy w tablicach przebiegają zakres 0, 1, 2, 3,... Dla tablicy
 * intów element o indeksie 0, zaczyna się w odległość 0 * 4 == 0 bajtów,
 * od bajtu początkowego, element o indeksie 1, zaczyna się 1 * 4 == 4 bajty,
 * od bajtu początkowego, etc.
 *
 * To o czym mówiliśmy, jest jakby istotą tego czym jest tablica. W pamięci
 * komputera ustawiamy elementy tablicy obok siebie, a ponieważ każdy
 * z nich ma tą samą długość w bajtach, więc możemy szybko odnaleźć ich
 * położenie. Dzięki temu tablice są bardzo elektywnym typem danych, nie
 * zajmują w pamięci więcej miejsca niż potrzeba, a dostęp do ich elementów
 * jest szybki.
 *
 * Wydajność jest też przyczyną dlaczego elementy tablicy muszą być tego
 * samego typu. Gdy wszystkie elementy są tego samego typu, to znalezienie
 * elementu o indeksie „i” sprowadza się do prostego rachunku
 * numerBajtuPoczątkowego == numerBajtuPoczątkowegoTablicy +
 * + i * (długośćElementuWBajtach).
 *
 * Gdyby tablica przechowywała dwa rodzaje elementów problem robi się
 * bardziej skomplikowany. Załóżmy, że nibytablica przechowuje dwa typy
 * obiektów, obiekt typu 1 ma długość 4 bajtów, obiekt typu drugiego ma
 * długość 6 bajtów. Rozpatrzmy nibytablicę która zaczyna się na bajcie
 * numer 101 i przechowuje 5 elementów. Na jakim bajcie zaczyna się
 * czwarty obiekt? Jeśli nibytablica jest postaci
 * {obiektTypu1, obiektTypu2, obiektTypu2, obiektTypu1, obiektTypu1}
 * to mamy
 * numerPierwszegoBajtu == 101 + 4 + 6 + 6 == 117.
 * Jeśli jednak jest postaci
 * {obiektTypu1, obiektTypu1, obiektTypu1, obiektTypu2, obiektTypu2}
 * to wówczas
 * numberPierwszegoBajtu == 101 + 4 + 4 + 4 == 113.
 * Zauważmy, że obie tablice mają tyle samo obiektów typu 1 i 2, po prostu są
 * one inaczej ułożone. Widzimy więc, że ponieważ tablica przechowuje jeden
 * typ obiektów, znalezienie tego o indeksie „i” sprowadza się do prostego
 * wzoru, podczas gdy dla nibytablicy, obliczenie położenia obiektu
 * o indeksie „i” wymaga znajomości zawartości tej tablicy. Sprawdzanie
 * zaś zawartości tablicy wymaga czasu, więc ta struktura danych jest
 * mniej wydajna.
 *
 * Proszę przy tym pamiętać, że język C zaczął swoją publiczną karierę
 * w 1972 roku, gdy komputery miały dużo mniej pamięci i mocy obliczeniowej
 * niż dzisiaj, dlatego wszystkie optymalizacje ich użycia, były niezwykle
 * ważne. Stąd podejście jakie wtedy stosowano można streścić słowami
 * „Lepiej, żeby programista się jeden raz pomęczył pisząc wydajny program,
 * niż żeby komputer 1000 razy wykonał program niezoptymalizowany.”
 */

int main() {
  /* Jak cała ta teoria ma się do naszych problemów? By to wyjaśnić,
   * wróćmy do naszego ostatniego przykładu. */
  int arrayInt1[3] = {1, 2, 3};

  for (int i = 0; i < 6; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Załużmy, że tablica arrayInt1 zaczyna się na bajcie 101. Kończy się
   * zatem na bajcie o numerze:
   * numerKońcowegoBajtu == numberPoczątkowegoBajtu +
   * + długośćTablicy * długośćElementuTablic - 1 == 101 + 3 * 4 - 1 ==
   * == 112.
   * We wzorze tym odejmujemy 1, bo tablica zajmuje (długośćTablicy *
   * długośćElementuTablicyBajtów) bajtów, więc gdybyśmy dodali tą liczbę
   * do numeru pierwszego bajtu, to trafilibyśmy na pierwszy bajt za
   * tablicą, bowiem
   * 101 + 12 == 113.
   * Musim więc odjąć jeden, by ten efekt skompensować.
   *
   * Co w takim razie zrobi język C, jeśli poprosimy go o arrayInt1[3]?
   * Wyliczy on, że chcemy by zwrócił on nam liczbę całkowistą zbudowaną
   * z bajtów o numerach od 101 + 3 * 4 == 113, do 116, ale one są POZA
   * naszą tablicą!
   *
   * Tym sposobem sięgamy do regionu pamięci komputera, do którego NIE
   * powinniśmy mieć dostępu. Co w tym regionie się znajduje? Koniec końców,
   * nie wiadomo, ale nie możemy poprzestać na takim wyjaśnieniu.
   */





  return 0;
}
