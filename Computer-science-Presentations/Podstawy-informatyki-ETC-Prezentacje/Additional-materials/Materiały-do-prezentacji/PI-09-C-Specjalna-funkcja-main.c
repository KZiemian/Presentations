#include <stdio.h>

/* Funkcje to dość złożone byty, więc musimy się nad nimi trochę zatrzymać.
   Dla porządku, najpierw omówimy najważniejszą funkcję w języku C,
   która nosi nazwę main i której używamy od pierwszego programu, który
   napisaliśmy, bo w języku C nie da się pracować inaczej.

   Pierwsza rzecz, którą należy wiedzieć. W języku C funkcja main ma
   specjalny status i niestosują się do niej pewne reguły, które
   obowiązują wszystkie inne funkcje. Powiemy o tym w swoim czasie. */

/* Zgodnie z tym co powiedzieliśmy poprzednio, linię
   int main()
   czytamy w następujący sposób. Mamy tu funkcję main, która zwraca wartość
   typu int i nie pobiera żadnych argumentów, co symbolizuje pusty nawias.

   Wedle zasad języka C, każdy wykonywalny program musi zawierać jedną
   i tylko jedną funkcję main, która jest uruchamiana, gdy dany program
   jest uruchomiony. W języku C program wykonuje tylko i wyłącznie te
   instrukcje, które są bezpośrednio lub pośrednio obecne w funkcji main.

   Mówiąc inaczej, uruchamienie programu napisanego w C jest równoważne,
   uruchomieniu pewnej funkcji main. */

int main() {
  printf("Hello, World!\n");





  /* Zgodnie z tym co powiedzieliśmy, poniższa linia zwraca jako wartość
     funkcji main liczbę 0. Można się zapytać: a gdzie ta funkcja zwraca
     tą liczbę? Krótka odpowiedź: do powłoki. */
  return 0;
}

/* Po uruchomieniu programu poleceniem
   ./prog.out
   proszę w powłoce wpisać tajemną formułę
   echo $?
   Pozwoli ona zobaczyć jaka liczba została zwrócona przez nasz program
   napisany w C.

   Proszę zmienić
   return 0;
   na coś innego, choćby
   return 7;
   i wykonać ciąg „zaklęć”
   gcc -ansi --std=c99 -pedantic PI-09-C-Specjalna-funkcja-main.c -o prog.out
   ./prog.out
   echo $?
   żeby zobaczyć, że rzeczywiście powłoka przejęła odpowiednią wartość
   zwróconą przez nasz program. */
