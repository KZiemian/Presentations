#include <stdio.h>

int simpleFunction(int intVar1, int intVar2);
/* Przypominijmy, linia ta zawiera DEKLARACJĘ funkcji. */

int main() {
  int intVar1 = 2;
  int intVar2 = 3;

  printf("simpleFunction(%d, %d) == %d.\n", intVar1, intVar2,
	 simpleFunction(intVar1, intVar2));
  /* Ten kod jest 100% poprawny. Ktoś może sobie zadać pytanie „Jakim
     prawem?” i jest to bardzo dobre pytanie. Ze względu na zawiłości
     procesu kompilacji języka C, informacje których potrzebuje kompilator
     zanim zobaczy pierwsze wywołanie funkcji to: nazwa funkcji, typ zwracany
     i typy jej parametrów. Czyli to co jest zawarte w deklaracji funkcji.

     A dlaczego kompilator nie potrzebuje wiedzieć co funkcja robi?
     Doskonałe pytanie. Chodzi o to, że kompilator to naprawdę skomplikowana
     bestia, która stosuje zasadę „Nie rób czegoś czasochłonnego, jak nie
     musisz.”. Ponieważ wywołanie funkcji jest czasochłonne, jest ono
     odwlekane tak długo jak tylko się da. Za to wiedza, co dana funkcja
     zwraca i co pobiera, jest stosunkowo wcześnie potrzebne, by określić,
     czy program jest poprawny.

     Nie wchodźmy w to głębiej, bo do końca semestru się z tego nie
     wygrzebiemy. */




  return 0;
}

int simpleFunction(int intVar1, int intVar2) {
  return 3 * intVar1 + 5;
}
