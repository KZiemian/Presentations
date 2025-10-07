#include <stdio.h>
#include <stdlib.h>

int main() {
  /* Problem z nielosowością funkcji rand() polegał na tym, że za każdym
     razem była ona wywoływana z tym samym ziarnem, według dokumentacji
     równym 1. Aby zmienić wartość ziarna możemy użyć funkcji srand()
     (ang. seed random) w następujący sposób. */
  int seed = 0;

  srand(seed);
  printf("srand(%d);\n", seed);
  printf("rand() == %d.\n\n", rand());

  seed = 1;
  srand(seed);
  printf("srand(%d);\n", seed);
  printf("rand() == %d.\n\n", rand());

  seed = 2;
  srand(seed);
  printf("srand(%d);\n", seed);
  printf("rand() == %d.\n\n", rand());

  seed = 3;
  srand(seed);
  printf("srand(%d);\n", seed);
  printf("rand() == %d.\n\n", rand());

  seed = 4;
  srand(seed);
  printf("srand(%d);\n", seed);
  printf("rand() == %d.\n\n", rand());

  seed = 5;
  srand(seed);
  printf("srand(%d);\n", seed);
  printf("rand() == %d.\n\n", rand());



  /* Ustawienie ziarna wpływa na więcej, niż tylko na pierwsze wywołanie
     funkcji rand(). */
  seed = 3;
  srand(seed);
  printf("srand(%d);\n", seed);

  for (int i = 0; i < 5; i++) {
    printf("rand() == %d.\n", rand());
  }


  seed = 5;
  srand(seed);
  printf("\nsrand(%d);\n", seed);

  for (int i = 0; i < 5; i++) {
    printf("rand() == %d.\n", rand());
  }





  return 0;
}
