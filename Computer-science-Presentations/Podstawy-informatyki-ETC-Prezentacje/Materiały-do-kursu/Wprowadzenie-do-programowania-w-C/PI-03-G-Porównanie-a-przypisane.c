#include <stdio.h>

int main() {
  /* Człowiek często określa jednym słowem kilka różnych rzeczy i prawie nigdy
     nie prowadzi to do problemów.
     „Trzeba naoliwić zamek.”
     „Na pobliskim wzgórzy stał stary zamek.”
     Z łatwością odgadujemy co słowo „zamek” oznacza w tych zdaniach. Jednak
     komputer to tępa maszyna, której trzeba wyjaśnić dokładnie co się
     dzieje, bo inaczej zdurniej. */

  /* Natrafiamy na ten sam problem, gdy chcemy przenieść naszą notację
     matematyczną do komputera. Wówczas orientujemy się, że symbolu „=”
     używamy w dwóch znaczeniach.
     1) Przypisania wartości. Zapis „x = 3.0” oznacza, że za „x” mamy wszędzie
     podstawić liczbę 3.0.
     2) Porównania. Zapis „y = 0.0, y = x + 2.0”, oznacza, że porównujemy
     zmienną y z wartością 0.0 i szukamy takiej wartości zmiennej x,
     żeby to było prawdą.

     Jeśli to wydaje się zawiłe, to mam nadzieję, że poniższe przykłady to
     jakoś wyjaśnią. */

  int intVar1 = 2;
  /* To jest PRZYPISANIE. Od teraz zmienna intVar1 zawiera liczbę 2. */

  printf("intVar1 == %d.\n", intVar1);

  /* Pytanie, jak sprawdzić, czy zmienna intVar1 zawiera liczbę 3?
     NIE możemy napisać
     intVar1 = 3
     gdyż to by oznaczało, że PRZYPISUJEMY zmiennej intVar1 wartość 3
     (zmieniamy wartość tej zmiennej). W języku C przyjęło się używać
     symbolu „==”:
     intVar1 == 3
     Powyższa linia sprawdza, czy wartość przechowywana przez zmienną
     intVar1 jest równa 3. Jeśli tak, to zwraca wartość 1, jeśli nie to 0.
     Dlaczego obowiązują takie głupie zasady, o tym powiemy później. */
  printf("intVar1 == 3: %d.\n\n", intVar1 == 3);

  printf("intVar1 = 3.\n");
  intVar1 = 3;

  printf("intVar1 == 3: %d.\n", intVar1 == 3);

  /* Bo czemu życie miałoby być proste? */





  return 0;
}
