#include <stdio.h>

/* Zdefiniujemy teraz prostą funkcję, która pobiera argument typu double
 * i zwraca wartość typu double. Oto ona. */

double funkcjaLiniowa(double x) {
  return 2.0 * x + 1.0;
}

/* Jest to prosta funkcja liniowa. Jeśli wyliczymy ją na argumencie 0.0
 * to dostaniemy
 * funkcjaLiniowa(0.0) == 2.0 * 0.0 + 1.0 == 0.0 + 1.0.
 * Analogicznie dla argumentu 1.0 mamy
 * funkcjaLiniowa(1.0) == 2.0 * 1.0 + 1.0 == 2.0 + 1.0. */

/* Już dawno zwrócono uwagę, że nazywanie funkcji w języku C jest niewygodne,
 * bo nie odpowiada temu jak mówimy o funkcjach. Przykładowo, powyższą
 * funkcję opisalibyśmy w następujący sposób.
 *
 * Funkcja funkcjaLiniowa() pobiera jeden argument o nazwie x, typu double
 * zwraca zaś wartość typu double.
 *
 * Gdyby więc definicja funkcji odpowiadała temu jak o niej mówimy, to byłaby
 * następującej postaci
 * funkcjaLiniowa(x double) double
 *
 * Jest to kolejna wada języka C, która wynika z jego wieku. Dziś społeczność
 * informatyków wie, że definiowanie takich rzeczy jak funkcje, powinna
 * odpowiadać jej opisowi w ludzkim języku. Czyli linia
 * funkcjaLiniowa(x double) double
 * jest lepsze niż
 * double funkcjaLiniowa(double x)
 * Niestety, jak to w życiu bywa, pomyłka ta została zauważona zbyt późno
 * i dzisiaj już nie możemy jej zmienić, bo zbyt dużo kodu w języku C
 * jest w użyciu i ten kod MUSI działać.
 *
 * Można zauważyć, że to samo jest prawdą o nazwach zmiennych. Weźmy tą linię
 * int liczbaCalkowita = 0;
 * Gdybyśmy mieli opisać ją słowami to szłoby to tak.
 *
 * Zmienna liczbaCałkowita ma typ int i zawiera wartość 0.
 *
 * Co odpowiada kodowi
 * liczbaCalkowita int = 0;
 *
 * Co gorsza, to tylko wierzchołek góry lodowej problemu, który się nazywa
 * „definicji obiektów w C trudne w zrozumieniu, bo nie podążają za regułami
 * ludzkich jęzków”. Nowoczesne języki programowania takie jak Go czy Rust,
 * wyciągnęły już lekcje z tych błędów i wszystkie definicje w nich są
 * znacznie prostsze, niż byłyby w C.
 *
 * Może nasunąć się pytanie, czemu przy wszystkich wadach C, uczymy się
 * jego, a nie jakiegoś nowoczesnego i prostszego języka? Z naszego punktu
 * widzenia odpowiedź jest następująca. W 2026 roku C jest jednym z pięciu
 * najważniejszych języków programowania świata, według praktycznie każdej
 * osoby, której Państwo mogą zadać to pytanie. Jest tak dlatego, że
 * przez ostatnie 50 lat napisna NIEWIARYGODNĄ liczbę programów w C, których
 * używamy na codzień, choćby łącząc się z internetem. My ich potrzebujemy
 * więc musimy używać C.
 *
 * Z tego powodu, ten język będzie z nami prawdopodobnie przez następne 10
 * lat, albo dłużej. Gdy chodzi o nowsze języki, przy wszystkich ich
 * zaletach, to nie wiadomo, czy nie znikną w przyszłym roku. Bo napisano
 * w nich na tyle mało programów, że napisanie ich od nowa w jeszcze nowszym
 * języku, nie będzie problemem. */

int main() {
  double x = 1.0;

  /* Ze względu na naturę obliczenia zmiennoprzecinkowych, użyjemy pętli
   * while. */

  while (x <= 10.0) {
    printf("funkcjaLiniowa(%.2f) == %.2f.\n", x, funkcjaLiniowa(x));

    x += 1.0;
  }





  return 0;
}
