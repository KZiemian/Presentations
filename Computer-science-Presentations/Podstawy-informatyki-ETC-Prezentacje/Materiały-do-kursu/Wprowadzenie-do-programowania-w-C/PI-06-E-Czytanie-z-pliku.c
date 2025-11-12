#include <stdio.h>

/* ZRÓB LEPSZE KOMENTARZE. */
/* W tym miejscu zrobimy krótkie wprowadzenia do czytania danych z plików.
 * Tak jak w przypadku nieszczęśnej funkcji scanf(), nasza wiedza jest
 * wciąż niewystarczająca by wyjaśnić jak działa wiele elementów tego
 * programu. Na razie spróbujmy jednak zaakceptować go takim jakim jest. */

int main() {
  /* Za pomocą poniższej linii kodu, otwieramy plik o nazwie
   * „PI-06-F-Czytanie-z-pliku.dat” w trybie do odczytu. Tryb do oczytu
   * ustawiamy przez podanie stringu "r" od angielskiego „read”.
   * W trybie tym możemy jedynie odczytywać zawartość pliku, nie możemy
   * jednak zmieniać jego zawartości.
   *
   * Na dzień dzisiejszy ta linia może wyglądać bardzo tajemniczo,
   * w przyszłości wyjaśnimy lepiej jak ona działa. */
  FILE *fileWithDataPtr = fopen("PI-06-F-Plik-z-danymi.dat", "r");

  /* Jeśli w powyższej linii podamy błędną nazwę pliku, to grozi nam,
   * że napotkamy błąd „Naruszenie ochrony pamięci”. Z angielskiego błąd
   * ten nosi nazwę „seg fault” od „segmentation fault”. */

  /* Tworzymy zmienne do których będziemy zapisywać dane odczytane z pliku. */
  int intVar1 = 0;
  int intVar2 = 0;
  int intVar3 = 0;
  double float64Var1 = 0.0;
  double float64Var2 = 0.0;
  double float64Var3 = 0.0;

  /* Funkcja fscanf() odczytuje pojedynczą linię z pliku który wcześniej
   * otworzyliśmy w trybie do czytania. String "%d %d" oznacza, że funkcja
   * fscanf() ma odczytać z tej linii dwie liczby całkowite, następnie
   * zapisze odczytane wartości do dwóch zmiennych podanych dalej,
   * intVar1 i intVar2. Proszę pamiętać o postawieniu przed nimi znaku
   * „&” (ampersand). */
  fscanf(fileWithDataPtr, "%d %d", &intVar1, &intVar2);

  printf("Zawartość pierwszej linii pliku: %d, %d.\n", intVar1, intVar2);

  /* Poniższa linia odczytuje trzy liczby całkowite z drugiej linii pliku. */
  fscanf(fileWithDataPtr, "%d %d %d", &intVar1, &intVar2, &intVar3);

  printf("Zawartość drugiej linii pliku: %d, %d, %d.\n", intVar1, intVar2,
	 intVar1);

  /* Funkcja fscanf() nie tylko z nazwy jest podobna do nieszczęsnej
   * funkcji scanf(). Również pewne jej funkcjonalności są podobne.
   * Przykładowo by odczytać liczbę typu double, potrzebujemy podać
   * nie „%f”, lecz „%lf” od „long floating-point number”. */
  fscanf(fileWithDataPtr, "%lf %lf", &float64Var1, &float64Var2);

  printf("Zawartość trzeciej linii pliku: %.2f, %.2f.\n", float64Var1,
	 float64Var2);

  /* Z czwartej linii pliku odczytamy trzy liczby zmiennoprzecinkowe. */
  fscanf(fileWithDataPtr, "%lf %lf %lf", &float64Var1, &float64Var2,
	 &float64Var3);

  printf("Zawartośc czwarte linii pliku: %.2f, %.2f, %.2f.\n", float64Var1,
	 float64Var2, float64Var3);

  /* Poniższa funkcja zamyka plik z którego czytaliśmy. Zawsze należy pamiętać
   * o zamknięciu każdego pliku, który otwarliśmy. Powiemy o tym więcej
   * w przyszłości. */
  fclose(fileWithDataPtr);





  return 0;
}
