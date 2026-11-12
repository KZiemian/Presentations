#include <stdio.h>



int main() {
  /* Teraz zrobimy coś odrobinę innego. Mianowicie będziemy czytać dane
   * z pliku i obliczymy średnią wartość drugiego sygnału.
   *
   * Kod w tym pliku jest dość kiepski, będę go musiał poprawić. */

  int liczbaDanychDoAnalizy = 100;
  double czas = 0.0;
  double signal1 = 0.0;
  double signal2 = 0.0;

  /* Zmienna do przechowywania sumy wartości sygnału numer 2. */

  double sumaWartosciSygnalu2 = 0.0;
  double sredniaWartoscSygnalu2 = 0.0;

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-13-E-Plik-z-danymi.dat", "r");



  for (int i = 0; i < liczbaDanychDoAnalizy; i++) {
    fscanf(wskaznikDoPlikuZDanymi, "%lf %lf %lf", &czas, &signal1,
	   &signal2);

    sumaWartosciSygnalu2 += signal2;
  }

  sredniaWartoscSygnalu2 =
    sumaWartosciSygnalu2 / (double)(liczbaDanychDoAnalizy);

  /* W powyższej linii kodu mamy tajemnicze wyrażenie
   * (double)(liczbaDanychDoAnalizy). Wyjaśnimy później jego znaczenie,
   * na razie prosimy nam uwierzyć, iż nie jest ono bez sensu. */

  printf("Średnia wartość sygnału 2 na podstawie %d pomiarów: "
	 "%.5f.\n", liczbaDanychDoAnalizy, sredniaWartoscSygnalu2);



  fclose(wskaznikDoPlikuZDanymi);





  return 0;
}
