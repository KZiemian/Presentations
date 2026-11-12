#include <stdio.h>

/* Wykorzystanie funkcji sleep() pozwala lepiej zobaczyć, jak działa pętla
 * while. Jednocześnie, co zrozumiałe, spowalnia ona działanie pętli,
 * dlatego można jej użyć dla celów demonstracyjnych, ale NIE należy
 * jej używać, chyba że z jakiegoś powodu, chcemy by pętla wykonywała się
 * wolniej.
 *
 * Przykład poniżej pokazuje pętlę while pozbawioną funkcji sleep().
 * Proszę porównać efekt działania tego i poprzedniego programu. */

int main() {

  int liczbaObiegowPetli = 1;

  printf("Zaczynamy wykonywać pętlę.\n");



  while (liczbaObiegowPetli <= 5) {
    printf("Wykonujemy ciało pętli po raz %d.\n", liczbaObiegowPetli);

    liczbaObiegowPetli++;
  }

  printf("Koniec pętli while.\n");





  return 0;
}
