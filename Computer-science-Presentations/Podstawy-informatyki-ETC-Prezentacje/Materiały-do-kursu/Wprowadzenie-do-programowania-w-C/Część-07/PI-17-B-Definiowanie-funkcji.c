#include <stdio.h>

/* Podstawową rzeczą, jaką należy powiedzieć o funkcja to jest to,
 * co to znaczy, że funkcja zwraca jakąś wartość?
 *
 * Jeśli gdzieś napiszemy dodajTrzy(0) to język C przekaże w to miejsce
 * liczbę 0 + 3 == 3. Z tego powodu
 * printf("Liczba: %d.\n", 3);
 * oraz linia
 * printf("Liczba: %d.\n", dodajTrzy(0));
 * robią dokładnie to samo. Mówiąc inaczej, funkcja taka wylicza swoją wartość
 * na podstawie przekazanych argumentów i zwraca wyliczoną wartość w to
 * miejsce programu, gdzie wpisaliśmy dodajTrzy(0).
 *
 * Mówiąc bardziej technicznie, jeśli gdzieś piszemy nazwę funkcji
 * z odpowiednimi argumentami, przykładowo
 * dodajTrzy(0)
 * to dokonujemy wywołania funkcji dodajTrzy() z argumentem 0. Po angielsku
 * „wywołanie funkcji” to „funciton call”.
 *
 * Mówimy też, że argument został wysłany do funkcji (ang. argument was
 * send to function). */

int dodajTrzy(int x) {
  int wynik = 0;

  wynik = x + 3;

  return wynik;
}

/* Definiowanie funkcji w języku C jest niestety trochę skomplikowane,
 * a same definicje często mało czytelne, więc prześledźmy definicję
 * naszej funkcji bardzo dokładnie.
 *
 * Nasza funkcja pobiera jeden argumenty i na jego podstawie wylicza pewną
 * wartość, a taka wartość w języku C musi posiadać określony typ.
 * int dodajTrzy(int x)
 * Ta linia kodu ma zawsze taką samą strukturę. Najpierw jest nazwa pewnego
 * typu, która określa jaki jest typ wartości zwracanej przez funkcję.
 * Tutaj nazwa tego typu to int, czyli funkcja dodajTrzy() zwraca liczbę
 * całkowitą.
 *
 * Oznacza to, że wywołanie funkcji dodajTrzy(0) może się pojawić w DWOLNYM
 * miejscu kodu, gdzie może wystąpić liczba całkowita.
 *
 * int dodajTrzy(int x)
 * Drugim elementem tej linii jest nazwa funkcji, w tym wypadku jest to
 * „dodajTrzy”. Następnie mamy nawias okrągły, w którym określmy jakie
 * argumenty pobiera ta funkcja. Dokładniej, w języku C musimy najpierw podać
 * typ argumentu jaki prześlemy danej funkcji, później jaka jest jego nazwa
 * tego argumentu wewnątrz funkcji wewnątrz funkcji. W naszym wypadku mamy
 * argument o nazwie „x” i typie int.
 *
 * Argument ten nazwaliśmy „x”, a nie choćby „liczba”, bo w matematyce
 * standardowo zmienne nazyw się x, y, z, etc., więc taki kod powinien
 * być prosty do zrozumienia.
 *
 * Później mamy ciało funkcji (ang. body of function), który zawiera kod,
 * który oblicza zwracaną wartość. Ciało funkcji to cały kod jaki
 * zawiera się w nawiasach wąsatych. Gdy dokonujemy wywołania dowolnej
 * funkcji, w naszym wypadku jest to dodajTrzy(liczba), to wykonywane
 * jest całe ciało funkcji. Przy czym argumenty takie jak „x” zostają
 * w ciele funkcji zastąpione wartością przesłaną do funkcji, którą tu
 * oznaczyliśmy jako „liczba”.
 *
 * W naszym wypadku ciało funkcji składa się on z trzech linii kodu
 * (i dwóch pustych).
 *
 * int wynik = 0;
 *
 * wynik = x + 3;
 *
 * return wynik;
 *
 * W pierwszej linii kodu definiujemy zmienną „wynik” typu int, która będzie
 * przechowywała wartość wyliczoną przez funkcję. W linii
 * wynik = x + 3;
 * wyliczamy wynik jaki ma zwrócić funkcja. Następnie mamy niezwykle ważną
 * linię kodu, mianowicie
 * return wynik;
 * Jej sens jest następujący. Angielskie słowo „return” można tłumaczyć
 * jako „zwróć”. Linia ta zwraca wartość wyliczoną przez tę funkcję, temu
 * który ją wywowłał.
 *
 * Inaczej mówiąc, jeśli ktoś wywoła tę funkcję pisząc
 * dodajTrzy(0)
 * to wylicza ona, że 0 + 3 == 3 i zwraca wywołującemu liczbę 3.
 *
 * Bo czemu życie miałoby być proste? */

int main() {
  for (int i = 0; i < 10; i++) {
    printf("dodajTrzy(%d) == %d.\n", i, dodajTrzy(i));
  }





  return 0;
}
