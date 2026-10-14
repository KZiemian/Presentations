/* SPRAWDŹ KOMENTARZE */

#include <stdio.h>

/* Co to jest operator? Mówiąc bardzo, bardzo prosto, operator jest to symbol
 * który oblicza wartość na podstawie tego, co ma po lewej i prawej stronie.
 * Przykładowo operator dodawania „+” oblicza wyrażenie
 * 3 + 5
 * zwracając jako wartość 8.
 *
 * Innymi operatorami dostępnymi w języku C są operatory -, *, /, a także
 * ==, <, > i kilka innych. Dzisiaj wyjaśnimy bardziej dogłębnie co zwracają
 * operatory takie jak „==”. */

int main() {
  /* Widzieliśmy jak za pomocą instrukcji warunkowy, można sterować pracą
   * programu. Teraz musimy sobie powiedzieć coś o tym, jak wyrażenia
   * logiczne, takie jak (intVar1 < 5), działają w C.
   *
   * Podstawowym pojęciem jest tutaj algebra Boole’a, którą na pewno już
   * Państwo znają. W algebrze Boole’a operujemy zdaniami, którym można
   * przypisać wartość logicznej prawdy, czy fałszu oraz tworzymy dla
   * tych zdań ich negacje, iloczyny (koniunkcje), sumy (alternatywy), etc.
   * Wartość tych wszystkich operacji można obliczyć korzystając
   * z odpowiednich tabeli, opisujących ich własności. Tym jest właśnie
   * algebra Boole’a. Jej szersze omówienie jest dostępne w PDFach,
   * również dołączonych do tych materiałów.
   *
   * Język C, ze względu na to, że jest już dość stary, nie ma typu
   * boolowskiego z prawdziwego zdarzenia. Jest to niewątpliwy minus tego
   * języka, gdyż każe programiście bardziej się wysilać, niż to wszystko
   * jest warte. */

  /* W języku C pojęcie fałszu reprezentuje liczba całkowita 0, zaś pojęcie
   * prawdy liczba całkowita o wartości 1.
   *
   * Mówiąc bardziej ściśle w języku C każda liczba całkowita różna od 0
   * reprezentuje prawdę logiczną, ale programiści się umówili, że będziemy
   * używać tylko jednej z nich i jest nią 1.
   *
   * Jeśli ktoś używa do reprezentowania prawdy, czegoś innego niż 1, to
   * inni programiści mają go prawo zamknąć w pustym pokoju bez wody
   * i jedzenia na trzy dni.
   *
   * To osobliwe utożsamienie fałszu z liczbą 0 i prawdy z liczbą 1,
   * to w dużej mierze zaszłość historyczna. Przetwarzanie liczb
   * całkowitych było początkowo jedną z najważniejszych rzeczy jaką
   * język C miał robić, więc użyto ich również do reprezentowania
   * fałszu i prawdy. */

  int boolFalse = 0;
  int boolTrue = 1;

  /* Operator porównania „==” już znamy, ale dla porządku warto go
   * przypomnieć który sprawdza, czy dwie wartości są
   * identyczne, czy nie. */
  printf("Dla porządku, przypomnijmy operator porównania „==”.\n");
  printf("1 == 1: %d.\n", 1 == 1);
  printf("1 == 2: %d.\n\n", 1 == 2);



  /* ! -- negacja. Negacją prawdy jest fałsz, negacją fałszu jest prawda. */
  printf("Symbol „!” oznacza negację wyrażenia logicznego.\n");
  printf("!boolFalse == %d.\n", !boolFalse);
  printf("!boolTrue == %d.\n\n", !boolTrue);



  /* Przypomnijmy również operator porównania „!=” („nie jest równe”).
   * Zwraca prawdę, jeśli wartości po obu stronach tego operatora są różne i
   * fałsz jeśli są równe. */
  printf("Z tego, że „!=” oznacza „nie jest równe”. Jego forma wywodzi się "
	 "stąd, że sam „!” oznacza negację.\n");
  printf("(0 != 0) == %d.\n", 0 != 0);
  printf("(0 != 1) == %d.\n\n", 0 != 1);

  printf("Dlaczego operator „nie jest równe” to „!=”, a nie „!==”?\n");
  printf("Za tym nie kryje się raczej nic głębszego, po prostu tak "
	 "ustalili twórcy języka C.\n");



  /* && - koniunkcja, zwana też iloczynem logicznym. Symbol „&&” czytamy
   * jako „i”. */
  printf("boolTrue && boolTrue == %d.\n", boolTrue && boolTrue);
  /* „boolTrue && boolTrue” czytamy „Czy prawdą jest, że zachodzi
   * boolTrue i boolTrue?”. */

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
  /* „boolTrue || boolTrue” czytamy jako „Czy prawdą jest, że boolTrue lub
     boolTrue jest prawdziwe?”. */

  printf("boolTrue || boolFalse == %d.\n", boolTrue || boolFalse);
  printf("boolFalse || boolTrue == %d.\n", boolFalse || boolTrue);
  printf("boolFalse || boolFalse == %d.\n\n", boolFalse || boolFalse);


  printf("Tak jak poprzednio, istnieje RADYKALNA różnica między || i |.\n");
  printf("Bo czemu życie miałoby być proste?\n");





  return 0;
}
