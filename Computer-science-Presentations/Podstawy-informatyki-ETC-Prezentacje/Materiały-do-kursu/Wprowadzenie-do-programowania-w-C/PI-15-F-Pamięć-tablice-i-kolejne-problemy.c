#include <stdio.h>

int main() {
  int arrayInt1[3] = {1, 2, 3};

  /* Wiemy już, że za pomocą tablicy możemy czytać pamięć, która do niej nie
   * należy (co jest przyczyną niezliczonych problemów). A czy możemy nadpisać
   * zawartość tej pamięci? */

  for (int i = 0; i < 10; i++) {
    arrayInt1[i] = 10 * i;
  }



  printf("Zawartość tablicy arrayInt1.\n");

  for (int i = 0; i < 10; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Na naszym komputerze otrzymaliśmy następujacy wynik.
   *
   * $ ./prog.out
   * Zawartość tablicy arrayInt1.
   * arrayInt1[0] == 0.
   * arrayInt1[1] == 10.
   * arrayInt1[2] == 20.
   * arrayInt1[3] == 30.
   * arrayInt1[4] == 40.
   * arrayInt1[5] == 50.
   * arrayInt1[6] == 60.
   * arrayInt1[7] == 70.
   * arrayInt1[8] == 80.
   * arrayInt1[9] == 90.
   * *** stack smashing detected ***: terminated
   * Przerwane (zrzut pamięci)
   *
   * Dwie ostatnie linie to informacja o wykryciu błędu, który sprawił,
   * że przerwano wykonywanie naszego programu. Państwo mogą się już domyślać,
   * co jest przyczyną powstania tego błędu.
   *
   * Jeśli wyjdziemy poza tablicę i dostaniemy się w ten sposób do pamięci,
   * która czeka, aż jakiś program ją sobie weźmie, to nasz problem nie jest
   * jeszcze najgorszy. Ale co jeśli dostajemy się do pamięci, której używam
   * jakiś program i zaczniemy zmieniać jej zawartość? Wtedy cały program
   * może przestać działać, albo co gorsza, zacząć zwracać błędne wyniki!
   * Jak Państwo widzą, język C pozwala nam nadpisać pamięć, która do nas
   * nie należy, bo czemu życie miałoby być proste?
   *
   * W tym momencie w czasie działania komputer wykrył, że nadpisujemy część
   * pamięci należącą do naszego programu, zwaną stosem (ang. stack).
   * Oczywiście, stos nigdy nie powinien być nadpisywany w ten sposób, więc
   * zgłoszony jest błąd o nazwie „stack smashing”, co można by przetłumaczyć
   * jako „rozwalanie stosu”. Aby uniknąć konsekwencji takiego postępowania,
   * wykonywanie naszego programu zostaje przerwane. Bo czemu życie miałoby
   * być proste? */

  /* Inny błędem jaki można napotkać, gdy za pomocą tablicy sięgniemy do
   * miejsca pamięci, do którego nie powinniśmy mieć dostępu, to „seg fault”,
   * czyli „segmentation fault”. Na polski tłumaczymy go jako „naruszona
   * ochrona pamięci”. Tych i innych błędów należy się oczywiście wystrzegać
   * i jeśli kiedyś zobaczą go Państwo, to proszę sprawdzić, czy przypadkiem
   * nie wyszli Państwo poza tablicę. */





  return 0;
}
