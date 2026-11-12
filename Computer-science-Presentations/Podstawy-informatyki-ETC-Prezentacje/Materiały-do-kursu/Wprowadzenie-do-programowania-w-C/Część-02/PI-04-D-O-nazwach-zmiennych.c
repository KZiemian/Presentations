#include <stdio.h>

int main() {

  /* Krótkie zasady rządzące nazwami zmiennych. Nazwa zmiennej w C składa się
   * z dużych i małych liter alfabetu angielskiego (programowanie stworzono
   * głównie w USA), cyfr i znaku „_”.
   *
   * Dziś możliwe jest używanie w nazwach zmiennych w języku C, choćby
   * polskich „ą” czy „ę”, jednak dla własnego dobra lepiej tego nie robić.
   * O przyczynach takiego stanu porozmawiamy w odpowiednim czasie.
   *
   * Najważniejsze zasady rządzące nazwami zmiennych są podane poniżej.
   * 1) Duże i małe litery to różne symbole, więc „intVar1” i „intvar1”
   * to dwie RÓŻNE zmienne.
   * 2) Nazwa zmiennej NIE może zaczynać się od cyfry.
   * 3) NIE wolno zacząć nazwy zmiennej od symbolu „_”. Chyba że wiesz
   *    co to oznacza i tego chcesz. */

  int liczbaCalkowita1 = 1;
  int liczbacalkowita1 = 2;

  printf("liczbaCalkowita1 == %d.\n", liczbaCalkowita1);
  printf("liczbacalkowita == %d.\n", liczbacalkowita1);
  printf("Jak widzimy, liczbaCalkowita1 i liczbacalkowita1 to dwie różne "
	 "zmienne!\n");

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
   * na naszych zajęciach i wybór padł na stylWielbłąda. Nie dlatego,
   * że jest on jakoś obiektywnie lepszy od innych, ale dlatego, że uważamy
   * go za dobry styl nazywania zmiennych.
   *
   * Dobrą nazwę zmiennej można wymyślić tylko wtedy, gdy wiemy, co dana
   * zmienna oznacza, czy mierzy poziom wody w zbiorniku, liczbę
   * zalogowanych użytkowników, poziom promieniowania kosmicznego w danym
   * punkcie obserwacyjny, etc. To zresztą stanowi dla nas źródło
   * pewnych problemów przy tworzeniu tych materiałów.
   *
   * Jak bowiem nazwać zmienną typu int, która służy tylko temu, by pokazać
   * jak język C pracuje z zmiennymi typu int? Można ją nazwać „x” lub „i”,
   * ale takie nazwy nie mówią praktycznie nic. Z drugiej strony nazwy typu
   * „poziomWodyWZbiorniku10” nie mają nic wspólnego, z tym co ta zmienna
   * robi w programie. Zdecydowaliśmy się dla takich zmiennych używać
   * nazw typu „liczbaCalkowita1”.
   *
   * Nazwy takie informują, że te zmienne są wprowadzone tylko po to, by
   * pokazać jak język C nimi operuje i w tym znaczeniu nazwy te są trafne.
   * Jednak na ich przykładzie, nie da się nauczyć, jak poprawnie nazywać
   * zmienne w prawdziwym programie. */




  return 0;
}
