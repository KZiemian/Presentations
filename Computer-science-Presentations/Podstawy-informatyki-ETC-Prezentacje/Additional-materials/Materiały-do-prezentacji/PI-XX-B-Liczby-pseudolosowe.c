#include <stdio.h>

int generatePseudorandomNumber(int seed) {
  int pseudorandomNumber = seed;

  if (seed < 0) {
    printf("ERROR:\n");
    printf("You call function generatePseudoRandomNumber(%d), ", seed);
    printf("but this function only works with natural numbers.\n");
    printf("We return number -1 as the sign of error.\n");

    return -1;
  }

  if (pseudorandomNumber < 10) {
    pseudorandomNumber += 100;
  } else if (pseudorandomNumber > 1000) {
    pseudorandomNumber -= 500;
  }

  if ((pseudorandomNumber % 2) == 1) {
    pseudorandomNumber = 3 * pseudorandomNumber + 5;
  } else {
    pseudorandomNumber /= 3;
  }

  return pseudorandomNumber;
}





int main() {
  /* Wyliczamy wartość generatora liczb pseudolosowych na ziarnie, następnie
     zwrócony wynik ponownie przekazujemy generatorowi jako argument i tak
     10 razy. Dopiero ostatni rezultat zwracamy jako żądaną liczbę
     pseudolosową. */

  int seed = 0;
  int pseudorandomNumber = seed;

  for (int i = 0; i < 10; i++) {
    pseudorandomNumber = generatePseudorandomNumber(pseudorandomNumber);
  }

  printf("seed == %d, pseudorandomNumber == %d.\n", seed, pseudorandomNumber);

  /* Program ten genereuje liczby pseudolosowe bardzo, ale to bardzo
     marnej jakości, wciąż jednak warto go przetestować dla kilku
     następujacych liczb: 0, 1, 2, 8, 11, 12. */





  return 0;
}
