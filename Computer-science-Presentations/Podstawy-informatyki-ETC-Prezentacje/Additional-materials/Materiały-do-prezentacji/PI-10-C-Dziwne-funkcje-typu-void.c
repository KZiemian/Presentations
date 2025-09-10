#include <stdio.h>

/* Funkcje można rozumieć, jako byty, które przyjmują argumenty i zwracają
   wartości. Oczywiście, życie nie może być proste, więc w języku C istnieją
   jeszcze funkcje, które jak się zobaczy po raz pierwszy, to chce się
   zapytać „Czy ten kto to wymyślił był zdrowy na umyśle?”. Są to mianowicie
   funkcje o typie zwracanym void. Oto przykład jednej z nich. */

void describeNumber(int number) {
  if ((number % 2) == 0) {
    printf("Liczba %d jest parzysta.\n", number);
  } else {
    printf("Liczba %d jest nieparzysta.\n", number);
  }
}





int main() {
  int number = 0;
  int intVar1 = 0;

  describeNumber(number);

  number = 3;
  describeNumber(number);

  intVar1 = 8;
  describeNumber(intVar1);

  /* Słowo „void” oznacza tyle co „pustka”, czyli funkcja tego typu
     nie zwraca niczego. Dlatego też linia poniżej prowadzi do błędu */
  /* intVar1 = describeNumber(number); */
  /* printf("intVar1 == %d.", intVar1); */

  /* Funkcja describeNumber() NIE ZWRACA niczego, ale wypisuje pewnien tekst
     na ekranie. Wypisanie tekstu na ekranie nie jest zwróceniem wartości,
     bo jak pokazuje przykład powyżej, nie można tego wypisanego tekstu
     przypisać do żadnej zmiennej.

     Funkcje typu void są użyteczne, bo niekiedy funkcje wywołujemy nie po to,
     by coś nam zwróciła, ale dla jej efektów ubocznych (ang. side effects).
     W naszym przypadku efektem uboczny było wypisanie tekstu na ekranie.
     Czy to jest dla Państwa wystarczająco zrozumiłe?

     W języku C istnieje jeszcze większa osobliwość, wskaźnik typu void,
     o którym powiem w swoim czasie. */

  /* Dlaczego używanie funkcji typu void ma w ogóle sens, to stanie się
     jaśniejsze, gdy nauczymy się wywoływać ciekawsze efekty uboczne,
     niż te, które poznaliśmy do tej pory. */





  return 0;
}
