#include <stdio.h>

int main() {
  printf("Hello, World!\n");

  /* Tekst do wypisania na ekranie nazywamy stringiem i umieszczamy
   * między angielskimi znakami cudzysłowu: ".
   *
   * Niestety w języku C stringi to byty trudne do używania i zrozumienia,
   * więc będziemy je poznawać po trochu. */

  /* Używamy tu funkcji printf(), której nazwa pochodzi od „print function”.
   * Jest to funkcja do pisania rzeczy na ekranie. Również tutaj można by
   * bardzo dużo o niej opowiadać, ale mamy nadzieję, że na razie takie
   * wyjaśnienie Państwu wystarczy. */

  /* Przyjmujemy umowę, że aby zaznaczyć, że jakaś nazwa oznacza funkcją,
   * będziemy po niej pisać puste nawiasy okrągłe. Jeśli więc zobaczymy
   * gdzieś nazwę „sumNumbers()”, to wiemy, że jest to funkcja.
   *
   * O tym czym jest funkcja w języku C powiemy sobie później, gdyż nie można
   * tego wyjaśnić w jednym zdaniu. Bo czemu życie miałoby być proste? Na
   * razie wystarczy nam intuicja, że funkcja pobiera argumenty i coś z nimi
   * robi. Tak jak w matematyce, argumenty funkcji podajemy w nawiasach
   * okrągłych po jej nazwie. Przykładowo
   * sumNumbers(1, 2)
   * jest funkcją, która obliczy nam sumę liczb 1 i 2, zwracając jako wynik
   * liczbę 3. Jednak wypisywanie wszystkich argumentów funkcji jest
   * nieporęczne, więc jeśli tylko chcemy zaznaczyć, że dana nazwa oznacza
   * funkcję, piszemy po niej puste nawiasy okrągłe, niezależne od tego
   * ile argumentów ta funkcja przyjmuje.
   *
   * Na koniec mała uwaga terminologiczna. Gdy piszemy
   * sumNubmers(1, 2)
   * by wykonać funkcję, to mówimy, że „wywołujemy funkcję z argumentami
   * 1 i 2”, lub po prostu, że „wywołujemy funkcję”.
   */

  /* Przypomnijmy, że symbol „\n” oznacza, iż w tym miejscu funkcja printf()
   * przejdzie do nowej linii tekstu. */

  printf("Jeśli w stringu funkcja printf() napotka symbol „\\n”,\n"
	 "to wypisując tekst, przejdzie do nowej linii.\n");

  printf("Użycie dwóch symboli „\\n\\n” oznacza dwukrotne przejście "
	 "do nowej linii.\n\nCzyli w tekście pojawi się pusta linia.");





  return 0;
}
