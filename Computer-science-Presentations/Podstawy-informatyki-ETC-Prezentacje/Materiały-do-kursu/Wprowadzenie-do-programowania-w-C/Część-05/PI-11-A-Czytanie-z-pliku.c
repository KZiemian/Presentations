#include <stdio.h>

/* W tym miejscu zrobimy krótkie wprowadzenia do czytania danych z plików.
 * Tak jak w przypadku nieszczęśnej funkcji scanf(), nasza wiedza jest
 * wciąż niewystarczająca by wyjaśnić jak działa wiele elementów tego
 * programu. Na razie spróbujmy jednak zaakceptować go takim jakim jest. */

int main() {

  /* Za pomocą poniższej linii kodu, otwieramy plik o nazwie
   * „PI-11-B-Plik-z-danymi.dat” w trybie do odczytu. Tryb do oczytu
   * ustawiamy przez podanie stringu "r" od angielskiego „read”.
   * W trybie tym możemy jedynie odczytywać zawartość pliku, nie możemy
   * jednak zmieniać jego zawartości.
   *
   * Na dzień dzisiejszy ta linia może wyglądać bardzo tajemniczo,
   * w przyszłości wyjaśnimy lepiej jak ona działa. */

  FILE *wskaznikDoPlikuZDanymi = fopen("PI-11-C-Plik-z-danymi.dat", "r");

  /* Dlaczego ta zmienna nazywa się „wskaznikDoPliku”? I znowu, wyjaśnimy,
   * gdy poznamy wskaźniki. */

  /* Używamy tu funkcji fopen(), której nazwa pochodzi od „File OPEN”,
   * która zwraca nam otwarty plik (to oczywiście musi być bardziej
   * skomplikowane). Jeśli w tej funkcji podamy błędną nazwę pliku,
   * to grozi nam, że napotkamy błąd „Naruszenie ochrony pamięci”.
   * Z angielskiego błąd ten nosi nazwę „seg fault” od „segmentation fault”.
   *
   * W nowoczesnym języku programowania dostalibyśmy ostrzeżenie,
   * że próbujemy otworzyć plik którego nie ma i tak właśnie powinno być.
   * Jednak w języku C nie ma takich luksusów. It's 1972 again! */

  /* Tworzymy zmienne do których będziemy zapisywać dane odczytane z pliku. */

  int liczbaCalkowita1 = 0;

  /* Funkcja fscanf() odczytuje dane z pliku który wcześniej otworzyliśmy
   * w trybie do czytania. String "%d" oznacza, że funkcja fscanf() ma
   * odczytać z pliku jedną liczbę całkowitą, następnie zapisać tą liczbę
   * do zmiennej liczbaCalkowita1. Proszę pamiętać o postawieniu przed
   * nazwą tej zmiennej znaku „&” (ampersand).
   *
   * Nazwa „fscanf()” prawdopodobnie pochodzi od „file scan function”. */

  printf("Odczytuje pierwszą liczbę z pliku.\n");

  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Pierwsza liczba odczytana z pliku: %d.\n\n", liczbaCalkowita1);



  printf("Odczytujemy drugą liczbę z pliku.\n");

  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Druga liczba odczytana z pliku: %d.\n\n", liczbaCalkowita1);



  printf("Odczytujemy trzecią liczbę z pliku.\n");

  fscanf(wskaznikDoPlikuZDanymi, "%d", &liczbaCalkowita1);

  printf("Trzecia liczba odczytana z pliku: %d.\n", liczbaCalkowita1);



  /* Poniższa funkcja zamyka plik z którego czytaliśmy. Zawsze należy
   * pamiętać o zamknięciu każdego pliku, który otwarliśmy. Powiemy o tym
   * więcej w przyszłości. */

  fclose(wskaznikDoPlikuZDanymi);

  /* Jej nazwa pochodzi od „File CLOSE”. */



  return 0;
}
