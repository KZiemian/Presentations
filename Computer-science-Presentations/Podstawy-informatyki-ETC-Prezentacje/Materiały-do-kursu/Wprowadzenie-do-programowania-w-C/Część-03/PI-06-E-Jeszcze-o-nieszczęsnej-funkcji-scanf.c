#include <stdio.h>

/* Nie ma sensu uczyć się funkcji scanf() zbyt dokładnie, skoro i tak należy
 * jej unikać. Na użytek tego kursu poświęcimy jej jednak trochę czasu. */

int main() {
  int liczbaOdUzytkownikaInt = 0;
  double liczbaOdUzytkownikaFloat64 = 0.0;


  printf("Podaj liczbę całkowitą: ");
  scanf("%d", &liczbaOdUzytkownikaInt);

  /* Funkcja scanf() działa jakby odwrotnie do printf(). Funkcji printf()
   * podajemy w stringu „%d”, by ona nam wypisała na ekrania wartość zmiennej
   * o typie całkowitym. Funkcji scanf() w stringu piszemy „%d” by funkcja
   * ta wczytała nam wartość typu całkowitego pobraną z klawiatury do tej
   * zmiennej.
   *
   * Obecność symbolu „&” będziemy mogli wyjaśnić, dopiero po omówieniu
   * funkcji i wskaźników. Bo czemu życie miałoby być proste? */

  printf("Podałeś liczbę: %d.\n\n", liczbaOdUzytkownikaInt);



  printf("Podaj liczbę zmiennoprzecinkową: ");
  scanf("%lf", &liczbaOdUzytkownikaFloat64);

  /* I tu kolejne dziwactwo języka C. Skoro w printf() używamy „%f” dla
   * doubli, to zgadywali byśmy, że w scanfie jest tak samo. Ale przecież
   * życie nie może być proste, więc tutaj trzeba użyć „%lf” od „long float”,
   * „długa liczba zmiennoprzecinkowa”. */

  printf("Podałeś liczbę: %.2f.\n", liczbaOdUzytkownikaFloat64);





  return 0;
}
