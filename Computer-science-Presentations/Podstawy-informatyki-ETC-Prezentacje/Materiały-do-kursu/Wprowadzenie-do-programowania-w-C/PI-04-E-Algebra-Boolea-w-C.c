#include <stdio.h>

/* Co to jest operator? Mówiąc bardzo prymitywanie, operator jest to symbol
 * który oblicza wartość na podstawie tego, co ma po lewej i prawej stronie.
 * 3 + 5
 * Tutaj mamy przykład operatora dodawania +, który bierze liczbę po lewej
 * i po prawej, nastepnie zwraca ich sumę.
 *
 * Innymi operatorami obecnymi w języku C są dostępne są operatory -, *, /,
 * a także ==, <, > i kilka innych. Dzisiaj wyjaśnimy, co właściwie
 * zwracają jako wartość operatory takie jak „==”. */

int main() {
  /* Widzieliśmy jak za pomocą warunków, można sterować przebiegiem programu.
   * Teraz musimy sobie powiedzieć coś o tym, jak sam tenstowany warunek,
   * taki jak (intVar1 < 5), działa w C.
   *
   * Podstawowym pojęciem jest tutaj algebra Boole’a, którą na pewno już
   * Państwo znają. Chodzi o to, że operujemy zmiennymi reprezentującymi
   * prawdę, czy fałsz, następnie robimy ich negacje, iloczyny (koniunkcje),
   * sumy (alternatywy), etc., wypełniając tabelki odpowiednimi symbolami.
   * Tym jest właśnie algebra Boole’a.
   *
   * Język C, ze względu na to, że jest już dość stary, nie ma typu
   * boolowskiego z prawdziwego zdarzenia. Jest to niewątpliwy minus tego
   * języka, gdyż każe programiście bardziej się wysilać, niż to wszystko
   * jest warte. */

  /* W języku C pojęcie fałszu reprezentuje liczba całkowita 0, zaś prawdy
   * liczba całkowita o wartości 1.
   *
   * Tak naprawdę to prawdę w języku reprezentuje każda liczba całkowita
   * różna od 0, ale programiści się umówili, że używamy tylko jednej z nich
   * do reprezentacji prawdy i jest nią 1.
   *
   * Jeśli ktoś używa do reprezentowania prawdy, czegoś innego niż 1, to
   * inni programiści mają go prawo zamknąć w pustym pokoju bez wody
   * i jedzenia na trzy dni.
   *
   * To osobliwe utożsamienie fałszu z liczbą 0 i prawdy z liczbą 1,
   * to w dużej mierze zaszłość historyczna. Przetwarzanie liczb
   * całkowitych było początkowo jedną z najważniejszych rzeczy jaką
   * język C miał robić, więc użyto ich również do reprezentawania
   * fałszu i prawdy. */

  int boolFalse = 0;
  int boolTrue = 1;

  /* Poznaliśmy już operator „==”, który sprawdza, czy dwie wartości
   * są identyczne. */
  printf("0 == 0: %d.\n", 0 == 0);
  printf("0 == 1: %d.\n\n", 0 == 1);



  /* ! -- negacja. Negacją prawdy jest fałsz, negacją fałszu jest prawda. */
  printf("!boolFalse == %d.\n", !boolFalse);
  printf("!boolTrue == %d.\n\n", !boolTrue);



  /* != -- nie jest równe. Zwraca prawdę, jeśli wartości po obu stronach
   * tego operatora są różne i fałsz jeśli są równe. */

  printf("(0 != 0) == %d.\n", 0 != 0);
  printf("(0 != 1) == %d.\n\n", 0 != 1);



  /* && - koniunkcja, zwana też iloczynem logicznym. Symbol „&&” czytamy
   * jako „i”. */

  printf("boolTrue && boolTrue == %d.\n", boolTrue && boolTrue);
  /* „boolTrue && boolTrue” czytamy „Czy prawdą jest, że zachodzi
   * boolTrue i boolTrue?”.
   *
   * Mam nadzieję, że to nie wymaga dalszego wyjaśnienia. */

  printf("boolTrue && boolFalse == %d.\n", boolTrue && boolFalse);
  printf("boolFalse && boolTrue == %d.\n", boolFalse && boolTrue);
  printf("boolFalse && boolFalse == %d.\n\n", boolFalse && boolFalse);


  printf("Należy pamiętać, że to wszystko są tak naprawdę liczby "
	 "całkowite.\n");
  printf("boolTrue && boolTrue: %d && %d == %d.\n", boolTrue, boolTrue,
	 boolTrue && boolTrue);
  printf("boolTrue && boolFalse: %d && %d == %d.\n", boolTrue, boolFalse,
	 boolTrue && boolFalse);
  printf("boolFalse && boolTrue: %d && %d == %d.\n", boolFalse, boolTrue,
	 boolFalse && boolTrue);
  printf("boolFalse && boolFalse: %d && %d == %d.\n\n", boolFalse, boolFalse,
	 boolFalse && boolFalse);


  printf("Istnieje RADYKALNA różnica między && oraz &, ale o tym opowiemy "
	 "w swoim czasie.\n");
  printf("Bo czemu życie miałoby być proste?\n\n\n");



  /* || - alternatywa, zwana też sumą logiczną. Symbol „||” czytamy jako
   * „lub”. */

  printf("boolTrue || boolTrue == %d.\n", boolTrue || boolTrue);
  /* „boolTrue || boolTrue” czytamy jako „Czy prawdą jest, że prawdą jest
   * boolTrue lub boolTrue?”. */

  printf("boolTrue || boolFalse == %d.\n", boolTrue || boolFalse);
  printf("boolFalse || boolTrue == %d.\n", boolFalse || boolTrue);
  printf("boolFalse || boolFalse == %d.\n\n", boolFalse || boolFalse);


  printf("Tak jak poprzednio, istnieje RADYKALNA różnica między || i |.\n");
  printf("Bo czemu życie miałoby być proste?\n");





  return 0;
}
