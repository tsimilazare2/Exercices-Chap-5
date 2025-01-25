#include <stdio.h>
#include <stdlib.h>
#include "SampleLib.c"
int main( void ) {
 int result = power( 2, 4 );
 printf( "2^4 == %d\n", result );
 result = fact( 6 );
 printf( "6! == %d\n", result );
 printf("-----------------------------------------------------------------\n");
 
 exercice1();
 
 printf("\n");
 printf("-----------------------------------------------------------------\n");
  
//appel de la fonction exercice 2
int n;
printf("Exercice 2(inverse) : entrer un entier : ");
scanf("%d", &n);
exercice2(n);

printf("\n");
printf("-----------------------------------------------------------------\n");

//appel de la fonction exercice3
exercice3();

printf("\n");
printf("-----------------------------------------------------------------\n");

//appel de la fonction exercice 4
printf("Exercice 4(paire ou impaire) : entrer un entier : ");
scanf("%d", &n);
exercice4(n);

printf("\n\n");
printf("-----------------------------------------------------------------\n\n\n");

//appel de la fonction exercice 5
exercice5();

printf("\n\n");
printf("-----------------------------------------------------------------\n\n");

//appel de la fonction exercice 6
exercice6();

printf("\n\n");
printf("-----------------------------------------------------------------\n\n\n");

//appel de la fonction exercice 16
exercice16();

printf("\n\n");
printf("-----------------------------------------------------------------\n\n\n");

//appel de la fonction exercice17
int num1, num2;
printf("Exercice 17(faire une somme) : entrez 02 nombres : \n\n");
scanf("%d %d", &num1, &num2);
printf("la somme est : %d\n", exercice17(num1, num2));
 
 return 0;
}

	

