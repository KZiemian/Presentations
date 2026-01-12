#include <stdio.h>

int main() {
  int arrayInt1[3] = {1, 2, 3};

  for (int i = 0; i < 6; i++) {
    printf("arrayInt1[%d] == %d.\n", i, arrayInt1[i]);
  }

  /* Gdy uruchomiliśmy ten program na naszym komputerze dwukrotnie, dostaliśmy
   * następujące wyniki.
   * $ ./prog.out
   * arrayInt1[0] == 1.
   * arrayInt1[1] == 2.
   * arrayInt1[2] == 3.
   * arrayInt1[3] == -719568640.
   * arrayInt1[4] == 488615593.
   * arrayInt1[5] == 1.
   *
   * $ ./prog.out
   * arrayInt1[0] == 1.
   * arrayInt1[1] == 2.
   * arrayInt1[2] == 3.
   * arrayInt1[3] == -1170322432.
   * arrayInt1[4] == -345370773.
   * arrayInt1[5] == 1.
   *
   * Jak już wiemy, gdy piszemy arrayInt1[3] sięgamy do bajtów pamięci, które
   * nie należą do naszej tablicy. Do kogo one należą? Że odpowiedzieć sobie
   * na to pytanie, trzeba zrozumieć, że pamięć komputera jest cały czas
   * w ruchu. Na dzisiejszych komputerach działa cały czas tyle różnych
   * programów, że pamięć jest im cały czas przyznawana, a później zwalniana,
   * więc sytuacja cały czas się zmienia.
   *
   * Gdy uruchomim nasz program, może się okazać, że element arrayInt1[3]
   * znajduje się w pamięci przyznanej naszemu programowi, ale nie należącej
   * konkretnie do tablicy. Może też być to pamięć wolna, która w tej chwili
   * czeka, aż zostanie przydzielona jakiemuś programowi. To do kogo
   * konkretnie ta pamięć należy, nie jest teraz zbyt ważne.
   *
   * Ważniejsze jest to, że pamięć którą otrzymujemy czytając element
   * arrayInt1[3], prawie na pewno już była w użyciu i zawiera informacje
   * pozostawione przez podprzedni program. Jeśli przeglądaliśmy jakieś
   * zdjęcia, to mogą być tam zawarte bajty reprezentujące piksele tego
   * zdjęcia. Ponieważ te dane nie są już nam potrzebne, to często mówimy,
   * że to są „śmieci z pamięci”.
   *
   * Praktycznie przy każdym uruchomieniu programu, dostaje on inny fragment
   * pamięci do użytku, a więc i inne śmieci po poprzednich programach.
   * Ponieważ wszystko w komputerze jest ciągiem bajtów, a bajt to 8 wartości
   * 0 i 1, to jak napiszemy arrayInt1[3] to nasz program zajrzy do tych
   * czterech bajtów, nieważne czym one były, i przetłumaczy ich zawartość
   * na liczbę całkowitą. To jak program tłumaczy ciąg bitów na liczbę
   * całkowitą jest omówione w jednym z udostępnionych Państwu PDFów.
   *
   * To wyjaśnia, czemu arrayInt1[3] daje za każdym uruchomieniem inny wynik:
   * za każdym razem próbuje inne śmieci z pamięci zinterpretować jako liczbę
   * całkowitą. Język C robi jeszcze inne rzeczy z pamięcią, ale nimi nie
   * będziemy się teraz zajmować. */





  return 0;
}
