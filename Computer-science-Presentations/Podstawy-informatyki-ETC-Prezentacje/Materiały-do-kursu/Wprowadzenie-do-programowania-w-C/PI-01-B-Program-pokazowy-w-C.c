/* Pseudoanimacja napisana w C. */

/* Ten kod można byłoby napisać w mądrzejszy sposób, ale to nie jest teraz
 * ważne. On ma tylko ilustrować działanie języka C. */

#include <stdio.h>
#include <unistd.h>



int main() {
  int i = 0;

  char symbolToShow = '-';
  char symbolArray[4] = {'-', '\\', '|', '/'};


  for (i = 0; i < 25; i++) {
    symbolToShow = symbolArray[i % 4];


    /* Liczba znaków w wierszu: 1. */
    printf("\t\t\t\t         %c\n", symbolToShow);
    /* Liczba znaków w wierszu: 3. */
    printf("\t\t\t\t        %c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow);
    /* Liczba znaków w wierszu: 5. */
    printf("\t\t\t\t       %c%c%c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 7. */
    printf("\t\t\t\t      %c%c%c%c%c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow);
    /* Liczba znaków w wierszu: 9. */
    printf("\t\t\t\t     %c%c%c%c%c%c%c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 11. */
    printf("\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c\n", symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 13. */
    printf("\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c\n", symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 15. */
    printf("\t\t\t\t  %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 13. */
    printf("\t\t\t\t   %c%c%c%c%c%c%c%c%c%c%c%c%c\n", symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 11. */
    printf("\t\t\t\t    %c%c%c%c%c%c%c%c%c%c%c\n", symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 9. */
    printf("\t\t\t\t     %c%c%c%c%c%c%c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 7. */
    printf("\t\t\t\t      %c%c%c%c%c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow, symbolToShow,
	   symbolToShow);
    /* Liczba znaków w wierszu: 5. */
    printf("\t\t\t\t       %c%c%c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow, symbolToShow, symbolToShow);
    /* Liczba znaków w wierszu: 3. */
    printf("\t\t\t\t        %c%c%c\n", symbolToShow, symbolToShow,
	   symbolToShow);
    /* Liczba znaków w wieszu: 1. */
    printf("\t\t\t\t         %c\n", symbolToShow);



    sleep(1);
  }





  return 0;
}
