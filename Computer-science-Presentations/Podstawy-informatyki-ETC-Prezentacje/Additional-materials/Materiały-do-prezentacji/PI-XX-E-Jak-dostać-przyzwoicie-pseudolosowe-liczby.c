#include <stdio.h>
#include <stdlib.h>

/* Żeby dostawać lepsze liczby pseudolosowe, musimy w jakiś sposób
   musi ustawić ziarno na bardziej losową wartość. Jest kilka popularnych
   podejść do tego zagadnienia, tutaj zilustrujemy to oparte na PIDzie
   (PID, Process IDentifier, identyfikator procesu) wykonywanego programu.
   By to zrobić będziemy potrzebowali poniższej linii. */
#include <unistd.h>





int main() {
  int pidOfTheProgram = getpid();

  printf("pidOfTheProgram == %d.\n\n", pidOfTheProgram);

  srand(pidOfTheProgram);

  for (int i = 0; i < 5; i++) {
    printf("rand() == %d.\n", rand());
  }

  /* Proszę uruchomić ten program kilka razy, wpisując polecenie
     ./prog.out
     i zobaczyć, czy dostajemy odpowiednio pseudolosowe liczby. */





  return 0;
}

/* Czym jest PID programu? To jest pytanie bardziej na przedmiot o systemach
   operacyjnych, ale jeśli Państwo chcą to możemy o tym powiedzieć
   więcej teraz. Myślę, że mamy teraz ważniejsze rzeczy do zrobienia. */
