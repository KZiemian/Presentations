#include <stdio.h>
/* Rozpatrzmy szalenie prosty problem obliczeniowy. Tworzymy zmienną
 * double x = 0.0;
 * coś dla tej wartości zmiennej obliczamy, potem dodajemy do niej
 * liczbę 0.1 i ponownie coś z nią liczymy. Procedurę, aż zmienna x
 * osiągnie równą 2.0 lub większa. Czyli potrzebujemy powtórzyć tą procedurę
 * 20 raz. Oczywiście, życie nie może być zbyt proste.
 *
 * Ponieważ używamy liczb zmiennoprzecinkowych więc zwykle NIE trafimy
 * w ten sposób dokłanie w liczbę 2.0, tylko gdzieś blisko. Przetestujemy
 * to teraz za pomocą pętli while. */

int main() {
  double x = 0.0;

  while (x <= 2.0) {
    printf("x == %.1f.\n", x);

    x += 0.1;
  }

  printf("\nDziwne, gdzie x == 2.0?\n");

  if (x > 2.0) {
    printf("Wartość x == %.1f, jest większa od 2.0.\n\n", x);
  }

  printf("x - 2.0 == %g.\n", x - 2.0);

  printf("Bo czemu życie miałoby być proste?\n");





  return 0;
}
