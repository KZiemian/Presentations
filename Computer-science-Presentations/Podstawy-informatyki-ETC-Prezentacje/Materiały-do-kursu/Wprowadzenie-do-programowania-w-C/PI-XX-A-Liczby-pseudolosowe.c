#include <stdio.h>

/* Poniższa funkcja jest bardzo, ale to bardzo kiepskim generatorem liczb
   pseudolosowych. Ilustruje ona jednak stosunkowo prosty algorytm, który
   pozwala generować liczby, które nie posiadają jakiegoś oczywistego
   na pierwszy rzut oka wzorca. */

int generatePseudoRandomNumber(int seed) {
  int pseudoRandomNumber = seed;

  if (seed < 0) {
    printf("ERROR:\n");
    printf("You call function generatePseudoRandomNumber(%d), ", seed);
    printf("but this function only works with natural numbers.\n");
    printf("We return number -1 as the sign of error.\n");

    return -1;
  }

  if (pseudoRandomNumber < 10) {
    pseudoRandomNumber += 100;
  } else if (pseudoRandomNumber > 1000) {
    pseudoRandomNumber -= 500;
  }

  if ((pseudoRandomNumber % 2) == 1) {
    pseudoRandomNumber = 3 * pseudoRandomNumber + 5;
  } else {
    pseudoRandomNumber /= 3;
  }

  return pseudoRandomNumber;
}





int main() {
  int seed = 0;
  int pseudoRandomNumber = 0;

  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 1;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 2;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 3;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 4;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 5;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 10;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 11;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 12;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  seed = 13;
  pseudoRandomNumber = generatePseudoRandomNumber(seed);
  printf("generatePSeudoRandomNumber(%d) == %d.\n", seed,
	 generatePseudoRandomNumber(seed));

  /* W liczba tych ciężko się dopatrzyć jakiegoś oczywistego wzorca,
     ale wstępny ogląd sugeruje, że zbyt często trafiają one do przedziałów
     30--39 i 300--350. Jak mówiliśmy, to jest bardzo kiepski generator liczb
     pseudolosowych. */





  return 0;
}
