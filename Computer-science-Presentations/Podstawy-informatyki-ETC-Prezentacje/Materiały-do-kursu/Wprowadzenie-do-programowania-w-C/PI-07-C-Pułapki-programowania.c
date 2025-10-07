#include <stdio.h>

/* Zaczniemy od wyjaśnienia czym się różnik instrukcja (ang. instruction)
   od wyrażenie (ang. expression). Ponieważ to są „Podstawy informatyki”,
   nie będziemy się bardzo wgłębiać w to zagadnienie.

   W wielkim skrócie instrukcja coś robi, a wyrażenie coś robi i coś zwraca.
   Wyjaśnimy to na kilku przykładach. */

int main() {
  int intVar1 = 1 + 2;
  /* W oczywisty sposób dodawanie jest wyrażeniem, bo coś robi, dodaje liczby,
     i zwraca ich sumę. Wobec tego, powyższa linia ma sens, do zmiennej
     po lewej stronie zostaje przypisana wartość zwrócona przez wyrażenie
     po prawej stronie. */
  int intVar2 = 0;

  printf("intVar1 == %d.\n\n", intVar1);

  /* W języku C wyrażeniem nie jest instrukcja if (dlatego nazywa się
     instrukcją). Wobec tego poniższy kod jest błędem, bo skoro instrukcja
     nic nie zwraca, to nie możemy tego niczego przypisać zmiennej intVar1. */

  /* intVar1 = if (1 < 2) {
     printf("1 jest mniejsze od 2.\n");
     } else {
     printf("1 jest większe bądź równe 2.\n");
     } */

  /* Warto dodać, że istnieją języki programowania, gdzie if jest wyrażeniem,
     czyli zwraca pewną wartość. Że w C jest instrukcją, to był wybór
     twórców tego języka. */

  intVar1 = intVar2 = 7;
  /* Ta linia jest poprawna, bo
     intVar2 = 7;
     jest wyrażeniem, czyli coś zwraca. Co zwraca? Liczbę 7 lub inną
     wartość, którą nadajemy zmiennej. Wobec tego, możemy ten kod przepisać
     jako
     intVar2 = 7;
     intVar1 = intVar2; */
  printf("intVar1 == %d.\n", intVar1);
  printf("intVar2 == %d.\n\n", intVar2);

  /* To jednak prowadzi, do częstego błędu w języku C. Powidzmy, że chcemy
     sprawdzić, czy zmienna intVar1 zawiera liczbę 5 i zamiast
  intVar1 == 5
  napiszemy
  intVar1 = 5
  I wszystko się wali. */

  printf("Przed instrukcja if.\n");
  printf("intVar1 == %d.\n", intVar1);

  if (intVar1 = 5) {
    printf("intVar1 == %d, zawiera liczbę 5.\n", intVar1);
  } else {
    printf("intVar1 == %d, nie zawiera liczby 5.\n", intVar1);
  }

  /* Dlaczego? Bo
     intVar1 = 5
     jest wyrażeniem, które zwraca liczbę 5. Wobec tego warunek
     (intVar1 = 5)
     jest równoważny warunkowi
     (5)
     Liczba 5 jest liczbą całkowitą różna od 0, więc dla języka C reprezentuje
     ona prawdę, więc wykonywana jest pierwsza gałąź ifa. Bo czemu życie
     maiłoby być proste? */





  return 0;
}
