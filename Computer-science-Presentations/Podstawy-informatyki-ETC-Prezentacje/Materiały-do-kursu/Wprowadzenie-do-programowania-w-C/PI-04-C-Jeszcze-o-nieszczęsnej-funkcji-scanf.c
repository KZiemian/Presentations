#include <stdio.h>

/* Nie ma sensu uczyć się funkcji scanf() zbyt dokładnie, skoro i tak należy
 * jej unikać. Na użytek tego kursu poświęcimy jej jednak trochę czasu. */

int main() {
  int intVar1 = 0;
  double float64Var1 = 0.0;


  printf("Podaj liczbę całkowitą: ");
  scanf("%d", &intVar1);
  /* Funkcja scanf() działa jakby odwrotnie do printf(). Funkcji printf()
   * podajemy w stringu „%d”, by ona nam wypisała na ekrania wartość zmiennej
   * o typie całkowitym. Funkcji scanf() w stringu piszemy „%d” by funkcja
   * ta wczytała nam wartość typu całkowitego pobraną z klawiatury do tej
   * zmiennej.
   *
   * Obecność symbolu „&” będziemy mogli wyjaśnić, dopiero po omówieniu
   * wskaźników. Bo czemu życie miałoby być proste? */

  printf("Podałeś liczbę: %d.\n\n", intVar1);



  printf("Podaj liczbę zmiennoprzecinkową: ");
  scanf("%lf", &float64Var1);
  /* I tu kolejne dziwactwo języka C. Skoro w printf() używamy „%f” dla
   * doubli, to zgadywali byśmy, że w scanfie jest tak samo. Ale przecież
   * życie nie może być proste, więc tutaj trzeba użyć „%lf” od „long float”,
   * „długa liczba zmiennoprzecinkowa”. */

  printf("Podałeś liczbę: %.2f.\n", float64Var1);





  return 0;
}
