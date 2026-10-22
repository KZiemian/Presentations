#include <stdio.h>

int main() {
  printf("Hello, World!\n");





  return 0;
}

/* Należy wyjaśnić jaka jest rola wartości zwracanej przez funkcję main.
 * Przekazuje ona powłoce informację o tym, czy program ten zakończył się
 * poprawnie, czy nastąpił błąd. Jak Państwo już się zapewne przekonali,
 * błędne działanie programów, to coś co w informatyce występuje bez przerwy,
 * dlatego rejestrowanie tego czy program zadziałał poprawnie, czy nie, jest
 * niezwykle ważne.
 *
 * Informatycy ustalili kiedyś, że poprawne zakończenie programu ma
 * sygnalizować zwrócenie liczby 0, zaś błąd jakiejś innej liczby całkowitej.
 * Dlaczego tak? Po pierwsze liczby całkowite to rzecz, która dla komputera
 * jest prosta w użyciu, więc to naturalny kandydat do przekazywania
 * informacji między programami.
 *
 * Po drugie, przyjęto zasadę, że coś może się udać na jeden sposób, za to
 * możliwych błędów są miliardy. Wybrano więc jedną wartość, którą oczywiście
 * jest 0, by sygnalizowała, że program zakończył się poprawnie, a pozostałe
 * dostępne liczby całkowite zostawiono na potencjalne komunikaty o błędach.
 * Przykładowo, 1 miało oznaczać błąd w obliczeniach, 2 problem z plikiem,
 * 3 niemożność uruchomienia funkcji. etc.
 *
 * Dzisiaj jednak większość programistów stosuje się do zasady, że w przypadku
 * DOWOLNEGO błędu, zwracamy liczbę 1.
 *
 * To wyjaśnia czemu do tej pory zawsze pisaliśmy
 * return 0;
 * Bo nasze programy są tak proste, że jeśli działają, to na 99.999% działają
 * poprawnie. Poza tym, to jest kurs „Podstawy informatyki” i nie jest
 * to miejsce na zajmowanie się tego typu zaawansowanymi rzeczami.
 *
 * Ktoś mógłby zadać następujące pytanie. Dlaczego komputer nie zareagował,
 * gdy napisaliśmy, przykładowo,
 * return 7;
 * skoro liczba 7, jako różna od 0, oznacza błąd programu? Bo nie napisaliśmy
 * kodu obsługi błędu. W zależności jak się wyrobimy z czasem, może uda
 * nam się na tych zajęciach napisać kod obsługi błędu jakiegoś programu.
 * Ale jest tyle ważniejszych rzeczy do zrobienia. */

/* Jeszcze jeden komentarz dotyczy tego, że powiedzieliśmy, iż każdy
 * program WYKONYWALNY, musi zawierać dokładnie jedną funkcję main(). Ale
 * jaki program może nie być wykonywalny?
 *
 * Odpowiedź jest taka, że w języku C istnieją programy pomocnicze, których
 * NIE można bezpośrednio uruchomić i one z definicji nie posiadają funkcji
 * main(). Sens ich istnienia jest taki, że mogą one zostać wbudowane jako
 * część programów wykonywalnych. Te ostatnie już swoją funkcję main()
 * posiadają. */
