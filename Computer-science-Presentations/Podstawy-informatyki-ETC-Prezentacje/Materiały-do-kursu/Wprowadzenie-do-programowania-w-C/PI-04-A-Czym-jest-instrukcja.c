#include <stdio.h>

/* Do tej pory unikaliśmy możliwie wprowadzania technicznego słownictwa, gdyż
 * nauka podstaw programowania jest trudna i bez tego. Teraz potrzebujemy
 * wprowadzić pojęcie „instrukcji”, nie będziemy przy tym podawali jej
 * ścisłej definicji, gdyż w tym momencie ważniejsze jest, zrozumienie takich
 * pojęć na intuicyjnym poziomie.
 *
 * W języku C „instrukcją” nazywamy dowolny fragment kodu, który wykonuje
 * jakieś działanie. Przykładowo, dodawanie dwóch liczb tworzy instrukcje:
 * 1 + 2;
 * Instrukcja może sama się składać z mniejszych instrukcji. Przykładowo
 * instrukcja
 * 2.0 * 2.0 + 1.0;
 * składa się z instrukcji mnożenia „2.0 * 2.0” i instrukcji dodawania
 * „(2.0 * 2.0) + 1.0”. Wywołanie funkcji printf() jak w
 * printf("Hello, World!\n);
 * samo jest instrukcją.
 *
 * Do tej pory mówiliśmy często o „operacjach”, choć bardziej poprawnym
 * terminem technicznym jest „instrukcja”. Uznaliśmy, że na początku termin
 * „operacja” jest prostszy do zrozumienie. Ponieważ jednak nie jest łatwo
 * przewidzieć, co jest prostsze a co trudniejsze dla Państwa, dlatego
 * będziemy bardzo wdzięczni za informację zwrotną w tej sprawie.
 *
 * Trochę upraszczając, każda linia kodu kończąca się średnikiem „;” stanowi
 * instrukcję. Symbol średnika służy w dużej mierze do tego, by powiedzieć
 * językowi C, gdzie dana instrukcja się kończy. */

int main() {
  /* Od tego momentu będziemy często widzieli linie tekstu postaci
   * Instrukcja: jakiśKod;
   * Mają one przekazać informację, że w tym miejscu kodu występuje dana
   * instrukcja, której rezultat działania będziemy mogli zobaczyć dalej.
   * Ilustruje to kod poniżej. */

  int intVar1 = 0;

  printf("Instrukcja: intVar1 = 5;\n");
  intVar1 = 5;

  printf("intVar1 == %d.\n\n", intVar1);

  printf("Instrukcja: intVar1 = 7;\n");

  printf("intVar1 == %d.\n", intVar1);





  return 0;
}
