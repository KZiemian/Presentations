#include <stdio.h>

int main() {
  /* Do przechowywanie pojedyczego znaku z systemu ASCII służy typ char
     (ang. character, znak). Używanie zmiennej typu char do przechowywania
     znaków spoza ASCII, takich jak „ą”, jest proszeniem siebie o problem. */
  char charVar1 = 'a';
  /* Potencjalnym błędem jest umieszczenie znaku w cudzysłownie podwójnym,
     podczas, gdy musi to być cudzysłów pojedynczy.
     charVar1 = "a";
     Bo czemu życie miałoby być proste? */

  /* Specyfikator do wypisywania znaków to %c, od character. */
  printf("Jako znak, charVar1 == %c.\n", charVar1);

  /* Ze względu na to co mówiliśmy o kodowaniu ASCII, typ char jest
     JEDNOCZEŚNIE typem znakowym, jak i numerycznym. */
  printf("Jako liczba, charVar1 == %d.\n", charVar1);

  /* Co więcej, taki kod jest poprawy. */
  charVar1 = 'a' + 10;

  printf("Jako znak, charVar1 == %c.\n", charVar1);
  /* Proszę to porównać z tablicą ASCII, https://www.ascii-code.com/.
     Nie trzeba chyba mówić, że traktowanie znaków jako liczb to nie jest
     dobry pomysł, za łatwo o pomyłkę. To jest jedno z tych miejsc, gdzie
     język C rzuca nam dość duże kłody pod nogi, acz są też rzeczy, które
     go usprawiedliwiają. */

  /* By zilustrować to wszystko, napiszemy teraz „Hello, World!” tylko
     za pomocą liczb! */
  printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c", 72, 101, 108, 108, 111, 44, 32, 87,
	 111, 114, 108, 100, 33, 10);
  /* Koszmarne w pisaniu, ale widzą Państwo, że to działa. */





  return 0;
}
