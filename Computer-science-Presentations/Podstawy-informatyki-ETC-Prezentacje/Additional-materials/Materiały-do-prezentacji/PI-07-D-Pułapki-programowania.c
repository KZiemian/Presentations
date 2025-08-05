#include <stdio.h>
#include <stdbool.h>

/* Jak wiemy, język C reprezentuje logiczny fałsz jako liczbę całkowitą 0,
   a logiczną prawdę jako 1. Skutkiem uboczny tego, jest bardzo dziwny kod,
   który jednak jest poprawny w języku C. */

int main() {
  int intVar1 = 7 * (1 < 3) - 3 * (2 < 1);

  printf("7 * (1 < 3) - 3 * (2 < 1) == %d.\n", intVar1);

  intVar1 = 10 * true - 5 * false;

  printf("10 * true - 5 * false == %d.\n", 10 * true - 5 * false);

  /* Jak Państwo widzą, wartość logiczna fałszu zastępowana jest przez C
     liczbą 0, prawdy przez 1 i obliczenia artymetyczne dają rezultat,
     którego należałoby się nie spodziewać. Bo czemu życie miałoby być
     proste? */





  return 0;
}
