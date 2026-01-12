#include <stdio.h>

int main() {
  /* Co się stanie jeśli utworzymy tablicę, ale nie nadamy jej elementom,
   * wartości? Sprawdźmy. */
  int arrayInt1[10];

  printf("Zawartość tablicy arrayInt1.\n");

  for (int i = 0; i < 10; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Na komputerze na którym testowaliśmy ten program otrzymaliśmy
   * następujące wyniki.
   *
   * $ ./prog.out
   * Zawartość tablicy arrayInt1.
   * arrayInt1[0] == 2.
   * arrayInt1[1] == 0.
   * arrayInt1[2] == -1075053569.
   * arrayInt1[3] == 0.
   * arrayInt1[4] == -646750631.
   * arrayInt1[5] == 32765.
   * arrayInt1[6] == 100.
   * arrayInt1[7] == 0.
   * arrayInt1[8] == 4096.
   * arrayInt1[9] == 0.
   *
   * Widzimy, że znowu mamy doczynienia problemem śmieci z pamięci. Tym
   * razem pamięć do której sięgamy NALEŻY do naszego programu, ale jej
   * zawartość to generalnie wynik tego, do czego jakiś program w przeszłości
   * używał bajtów, które teraz tworzą naszą tablicę.
   *
   * Powinno być dość jasne, że należy unikać sytuacji, gdy program
   * zacznie wykonywać obliczenia na elementach tablicy, które wartość
   * zależy od tego, jakie śmieci się w nich znajdowały. */





  return 0;
}
