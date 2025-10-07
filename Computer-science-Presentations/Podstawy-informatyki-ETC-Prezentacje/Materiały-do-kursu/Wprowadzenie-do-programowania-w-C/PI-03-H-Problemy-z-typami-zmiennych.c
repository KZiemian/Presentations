#include <stdio.h>

int main() {
  /* Zmienna typu int przechowuj tylko liczby całkowite, ta o typie double,
     liczby posiadające część dziesiętną. */
  int intVar1 = 1;
  double float64Var1 = 1.5;

  printf("intVar1 == %d.\n", intVar1);
  printf("float64Var1 == %.2f.\n\n", float64Var1);

  printf("float64Var1 == intVar1.\n");
  printf("To powinno być okej:\n");

  float64Var1 = intVar1;

  printf("float64Var1 == %.2f.\n\n", float64Var1);

  float64Var1 = 1.5;

  printf("intVar1 == %d.\n", intVar1);
  printf("float64Var1 == %.2f.\n\n", float64Var1);

  printf("intVar1 == float64Var1.\n");
  printf("To raczej nie skończy się dobrze :/.\n");

  intVar1 = float64Var1;

  printf("intVar1 == %d.\n", intVar1);
  printf("float64Var1 == %.2f.\n\n", float64Var1);

  printf("Bo niby czemu życie miałoby być proste?\n");

  /* Tak jak w przypadku intów, w języku polskim przyjęło się określać
     liczby zmiennoprzecinkowe jako „floaty” lub „dable”.

     Oczywiście, życie nie może być proste i „float” jest nazwą bardziej
     ogólną, a „dable” bardziej konkretną. Na tych zajęciach nie będziemy
     nikogo karać za używanie ich jako synonimów. */





  return 0;
}
