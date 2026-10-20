/* Rozważmy następujący problem. Mamy program, który by zacząć działanie
 * potrzebuje by użytkownik przesłał mu dwa pliki. Jednak użytkownik
 * wysłał tylko jeden z tych plików, poszedł na obiad i nie będzie go
 * pół godziny. Nie ma sensu, żeby program przez ten czas pracował,
 * zajmował czas procesora, skoro i tak nic nie będzie w stanie zrobić.
 *
 * W takiej sytuacji najlepiej, by program na jakiś czas „zasnął”, potem się
 * obudził i sprawdził czy ma już drugi plik. Jeśli go ma, to przystąpi
 * do działania. Jeśli nie, to znów zaśnie na chwilę, potem się obudzi,
 * by sprawdzić, czy plik jest i tak dalej. Widać więc, że zatrzymanie
 * pracy programu na pewien czas potrafii być użyteczne w praktyce.
 *
 * Jednym ze sposobów „uśpienia” programu napisanego w C, jest funkcja
 * sleep(). My wykorzystamy ją również do tego, by objaśnić działanie
 * pętli w języku C. */

#include <stdio.h>

/* By użyć funkcji sleep() potrzebujemy poniższej linii. Jej sens objaśnimy
 * w odpowiednim czasie. */

#include <unistd.h>

int main() {
  printf("Początek programu demonstrującego działanie funkcji sleep().\n"
	 "Funkcje sleep() wywołujemy pisząć sleep(n), gdzie n jest liczbą "
	 "naturalną, wyrażającą liczbę sekund, na jaką program ma się "
	 "zatrzymać.\n"
	 "Funkcji sleep() NIE należy wywoływać z argumentem innym, niż "
	 "będący liczbą naturalną.\n\n");

  printf("Czekamy 1 sekundę.\n");
  sleep(1);

  printf("Jesteśmy z powrotem.\n\n");

  printf("Czekamy 2 sekundy.\n");
  sleep(2);

  printf("Jesteśmy z powrotem.\n\n");

  printf("Czekamy 3 sekundy.\n");
  sleep(3);

  printf("Jesteśmy z powrotem.\n");





  return 0;
}
