#include <stdio.h>

int main() {
  int arrayInt1[3] = {1, 2, 3};
  int arrayInt2[4] = {1.1, 2.2, 3.3, 4.4};

  /* Jak już widzieliśmy, definiując tablicę podajemy typ danych jakie może
   * przechowywać. Konkretna tablica może przechowywać tylko ten jeden
   * wybrany typ danych, próba umieszczenia w niej czegoś innego będzie
   * prowadzić do standardowych problemów. */

  printf("Operacja: arrayInt1[0] == 1.5;\n");
  printf("arrayInt1[0] == %d.\n\n", arrayInt1[0]);
  printf("Operacja arrayInt1[0] == 1.5;\n"
	 "jest tak samo poprawna, jak wzięcie zmiennej typu całkowitego "
	 "intVar1 i napisanie: intVar1 = 1.5;\n"
	 "Ma też te same te same problemy, czyli obcinanie części "
	 "ułamkowej.\n\n");

  printf("Jak widzimy, jeśli tablicę typu int zdefiniujemy jako "
	 "zawierającą liczby zmiennoprzecinkowo, to zostaną one obcięte "
	 "do liczb całkowitych.\n");

  for (int i = 0; i < 4; i++) {
    printf("arrayInt2[%d] == %d.\n", i, arrayInt2[i]);
  }




  return 0;
}
