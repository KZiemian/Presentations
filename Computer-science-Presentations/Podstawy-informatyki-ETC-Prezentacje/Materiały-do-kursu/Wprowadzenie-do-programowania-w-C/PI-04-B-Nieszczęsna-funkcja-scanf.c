#include <stdio.h>

/* Do wypisywania tekstu na ekranie używamy funkcji printf(). A czego użyć,
 * aby pobrać dane z klawiatury? Tutaj niestety odpowiedź nie jest prosta,
 * bo czemu życie miałoby być proste? */

/* Na razie będziemy używać bardzo niebezpiecznej funkcji scanf().
 * Jest ona niebezpieczna, bo jeśli użyjemy jej w programie, to umożliwimy
 * hakerom włamanie się do niego za pomocą ataku przez przeładowanie
 * bufora. Kiedyś powiemy więcej jak taki atak działa.
 *
 * Na zajęciach edukacyjnych scanf() można tolerować. Ale nigdy, przenigdy,
 * nie wolno jej używać w programie do praktycznych zastosowań. Zwłaszcza,
 * jeśli taki program ma działać na komputerze podłączonym do internetu.
 *
 * Dlaczego więc używamy funkcji scanf(), skoro jest tak niebezpieczna?
 * Bo jest dość prosta w użyciu, a ten cały przedmiot jest już i tak
 * wystarczająco skomplikowany. O bezpieczniejszych sposobach wczytywania
 * danych powiemy sobie później. Miejmy nadzieję.
 *
 * Właśnie problem bezpieczeństwa z jednej strony, a dość skomplikowane
 * sprawy koncepcyjne z drugiej, sprawił, że tak późno mówimy o wczytywaniu
 * wartości z klawiatury. */

int main() {
  int intVar1 = 0;

  /* Funkcja scanf() działa w ten sposób, że pozwala nam pobrać dane
   * z klawiatury i zapisać je do zmiennej. */
  printf("Podaj liczbę całkowitą: ");

  scanf("%d", &intVar1);
  /* Proszę zwrócić uwagę na symbol „&” (ampersand) przed nazwą zmiennej.
   * By wyjaśnić co on robi, będziemy musieli najpierw omówić wskaźniki
   * i funkcje. Bo czemu życie miałoby być proste? */

  printf("Podałeś liczbę: %d.\n", intVar1);





  return 0;
}
