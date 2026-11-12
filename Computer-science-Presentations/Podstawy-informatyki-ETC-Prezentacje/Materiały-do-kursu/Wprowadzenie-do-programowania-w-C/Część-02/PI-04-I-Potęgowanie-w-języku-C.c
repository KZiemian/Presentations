#include <stdio.h>

/* Pokażemy teraz kod w języku C, dzięki któremy możemy wykonać operację
 * matematyczną 2^3. Na początku pewnie będą sobie Państwo zadawać pytanie:
 * czemu to wszystko jest takie skomplikowane? */

/* By uruchomić ten program, potrzeba trochę innego zestawu „magicznych
 * zaklęć”, niż dotychczas. Oto one:
 * $ time gcc -ansi -std=c99 -pedantic PI-03-H-Potęgowanie-w-języku-C.c -lm -o prog.out
 * $ ./prog.out
 */

#include <math.h>

int main() {
  printf("2.0^3.0 == %.2f.\n", pow(2.0, 3.0));

  /* Proszę spróbować samemu obliczyć tym sposobem kilka wyrażeń typu a^b. */





  return 0;
}

/* Pytanie, dlaczego to wszystko jest tak bardzo zawikłane? Trzeba pamiętać,
 * że język C jest starym językiem, wywodzi się z lat 70-tych XX wieku.
 * W tamtych czasach komputery miały procesory o szybkości rzędu 10 kHz
 * i 100 kB pamięci na dysku (dane przyblione, wymagające sprawdzenia).
 * Operacja potęgowania jest dużo kosztowniejsza obliczeniowo, niż choćby
 * dodawanie, więc na tak słabych komputerach jakie miano wówczas należało
 * jej używać tylko wtedy, gdy była naprawdę potrzebna. Zdecydowano się więc
 * umieścić ją w języku C w taki sposób, że aby jej użyć należy się trochę
 * wysilić, co zapobiega wielu lekkomyślnym jej użyciom. */
