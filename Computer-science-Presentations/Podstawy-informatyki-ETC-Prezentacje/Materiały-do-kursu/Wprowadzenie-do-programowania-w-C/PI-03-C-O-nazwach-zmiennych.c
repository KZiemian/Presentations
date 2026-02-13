#include <stdio.h>

int main() {
  /* Krótkie zasady rządzące nazwami zmiennych. Nazwa zmiennej w C składa się
   * z dużych i małych liter alfabetu ANGIELSKIEGO (programowanie wymyślili
   * głównie Amerykanie), cyfr i znaku „_”.
   *
   * Najważniejsze zasady rządzące nazwami zmiennych są podane poniżej.
   * 1) Duże i małe litery to różne symbole, więc „intVar1” i „intvar1”
   * to dwie RÓŻNE zmienne.
   * 2) Nazwa zmiennej NIE może zaczynać się od cyfry.
   * 3) NIE wolno zacząć nazwy zmiennej od symbolu „_”. Chyba że wiesz
   *    co to oznacza i tego chcesz. */
  int intVar1 = 0;
  int intvar1 = 1;

  printf("intVar1 == %d.\n", intVar1);
  printf("intvar1 == %d.\n", intvar1);
  printf("Jak widzimy, intVar1 i intvar1 to dwie różne zmienne!\n");

  /* Zmienny należy nadawać nazwy, które informują nas o tym, co dana
   * zamienna robi. Jeśli mam zmienną, która opisuje, powiedzmy, wysokość
   * wody w zbiorniku 10, który jest jednym ze zbiorników jakie program
   * ma monitorować, to powinna mieć nazwę typu „poziomWodyWZbiorniku10”.
   *
   * Wybieranie dobrych nazw dla zmiennych nie jest rzeczą łatwą. Do tego
   * istnieją różne konwencje tworzenia nazw, takie jak stylWielbłąda
   * (https://en.wikipedia.org/wiki/Camel_case), czy styl_węża
   * (https://en.wikipedia.org/wiki/Snake_case). Ze względów praktycznych
   * zdecydowaliśmy się na wybór jednego stylu w którym piszemy programy
   * na naszych zajęciach i wybór padł na stylWielbłąda. Nie dlatego, że jest
   * on jakoś obiektywnie lepszy od innych, ale dlatego, że uważamy go
   * za dobry styl nazywania zmiennych.
   *
   * Dobrą nazwę zmiennej można wymyślić tylko wtedy, gdy wiemy, co dana
   * zmienna oznacza, czy mierzy poziom wody w zbiorniku, poziom
   * promieniowania kosmicznego w danym punkcie obserwacyjny, liczbę
   * zalogowanych użytkowników, etc. To zresztą stanowi dla nas źródło
   * pewnych problemów przy tworzeniu tych materiałów.
   *
   * Jak bowiem nazwać zmienną typu int, która służy tylko temu, by pokazać
   * jak język C pracuje z zmiennymi typu int? Można ją nazwać „x” lub „i”,
   * ale takie nazwy nie mówią praktycznie nic. Z drugiej strony nazwy typu
   * „poziomWodyWZbiorniku” nie mają nic wspólnego, z tym co ta zmienna
   * robi w programie. Zdecydowaliśmy się dla takich zmiennych używać
   * zapisu typu „intVar1” co jest skrótem od angielskiego „INTeger
   * VARiable number 1”, analogicznie dla „intVar2” czy „float64Var1”,
   * „float64Var2”, etc.
   *
   * Nazwy takie informują, że te zmienne są wprowadzone tylko po to, by
   * pokazać jak język C nimi operuje i w tym znaczeniu nazwy te są trafne.
   * Jednak na ich przykładzie, nie da się nauczyć, jak poprawnie nazywać
   * zmienne w prawdziwym programie. */




  return 0;
}
