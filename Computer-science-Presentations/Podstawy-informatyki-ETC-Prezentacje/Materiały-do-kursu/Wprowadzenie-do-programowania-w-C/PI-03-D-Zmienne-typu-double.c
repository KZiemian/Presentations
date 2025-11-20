#include <stdio.h>

int main() {
  double float64Var1 = 2.25;
  /* Typu liczb zmiennoprzecinkowych, jakiego będziemy używać najczęściej, to
   * „double”. Dlaczego używana jest taka dziwna nazwa to wyjaśnimy
   * później.
   *
   * W nazwie zmiennej napisaliśmy „float64”, to liczba tego typu zajmuje
   * 64 (2^6) bitów w pamięci. Czyli 8 bajtów. */

  printf("float64Var1 == %.2f.\n", float64Var1);

  /* Tak jak w przypadku intów, w języku polskim przyjęło się określać
   * liczby zmiennoprzecinkowe jako „floaty” lub „dable”.
   *
   * Oczywiście, życie nie może być proste i „float” jest nazwą bardziej
   * ogólną, a „dable” bardziej konkretną. Na tych zajęciach nie będziemy
   * nikogo karać za używanie ich jako synonimów. */





  return 0;
}
