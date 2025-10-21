#include <stdio.h>

int main() {
  /* Ze stringami, czyli napisami, zetknęliśmy się już na początku kursu.
     Tekst poniżej w cudzysłowie podwójnym jest stringiem. */
  /* printf("Hello, World!\n"); */

  /* Praca ze stringami w C, to nie jest nic przyjemnego. Mówiąc bardziej
     obrazowo, jeśli praca ze stringami w języku Python, to jazda dobrej
     klasy samochodem, to praca ze stringami w C to jazda na rowerze.
     Który nie ma lewej połowy kierownicy, prawego pedała, a z siedzenia
     wystają centymetrow gwoździe.

     Jest tak dlatego, że stringi to jedno z miejsc, gdzie niskopoziomowa
     natura języka C wychodzi bez litości. Pracujemy praktycznie na gołej
     pamięci komputera, a dla normalnego człowieka, jest to tylko źródło
     cierpienia. */

  /* W bardziej nowoczesnych językach, takich jak Java, Python, string jest
     osobnym  typem danych, który zostaje opakowany wieloma
     funkcjonalnościami, które umilają pracę z nim. W C string jest TYLKO
     tablicą charów (czyli w zasadzie bajtów), dla której obowiązuje
     specjalna składnia. Aua! */
  char stringVar1[16] = "Hello, World!";

  printf("stringVar1 == %s.\n", stringVar1);
  /* Specyfikator %s jest oczywiście od string. */

  /* Tablicy stringVar1 przypisaliśmy długość 16, bo w informatyce lubimy
     potęgi liczby 2. Temat długości stringów, jest jednak daleki od bycia
     prostym, łatwym i przyjemnym. Bo czemu życie miałoby być proste? */





  return 0;
}
