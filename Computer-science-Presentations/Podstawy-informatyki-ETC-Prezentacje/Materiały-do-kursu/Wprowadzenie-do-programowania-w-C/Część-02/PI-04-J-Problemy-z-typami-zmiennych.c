#include <stdio.h>

int main() {
  /* Zmienna typu int przechowuj tylko liczby całkowite, ta o typie double,
   * liczby posiadające część dziesiętną. */
  int liczbaCalkowita1 = 1;
  double float64Var1 = 1.5;

  printf("liczbaCalkowita == %d.\n", liczbaCalkowita1);
  printf("float64Var1 == %.2f.\n\n", float64Var1);

  printf("To powinno być okej: (float64Var1 = liczbaCalkowita1;).\n");
  float64Var1 = liczbaCalkowita1;

  printf("float64Var1 == %.2f.\n", float64Var1);
  printf("Wszystko działa, bo jest jasne jak zamienić liczbę 1 "
	 "na liczbę 1.0, a język C nie widzi zastrzeżeń przeciwko takiej "
	 "operacji.\n\n");

  float64Var1 = 1.5;

  printf("Obecne wartości zmiennych.\n");
  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("float64Var1 == %.2f.\n\n", float64Var1);

  printf("To raczej nie skończy się dobrze: "
	 "(liczbaCalkowita1 = float64Var1;). :/\n");

  liczbaCalkowita1 = float64Var1;

  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("float64Var1 == %.2f.\n", float64Var1);

  printf("Bo niby czemu życie miałoby być proste?\n");

  /* W języku C przyjęto zasadę, że jeśli przypisujemy liczbę z częścią
   * dziesiętną (liczbę zmiennoprzecinkową) do zmiennej typu int,
   * to by to zrobić obcinamy część ułamkową. Na pewnym poziomie ma to
   * sporo sensu. */





  return 0;
}
