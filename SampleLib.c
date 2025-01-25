#include <stdio.h>
#include "SampleLib.h"

// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}

//fonction exercice1
void exercice1(){
	printf("Exercice 1 : Bonjour\n");
}

//fonction exercice2
void exercice2(int n){
	/*donner l'inverse d'un entier*/
	int inverse = 0;
	
	while(n != 0){
		/*la boucle extrait chaque chiffre de droite à gauche et l'ajoute à l'entier inverse*/
		inverse = inverse*10 + n % 10;
		n = n/10;
	}
	printf("L'inverse est : %d\n", inverse);
}

//fonction exercice3
void exercice3(){
	/*produit de 02 nombres*/
	double x, y;
	printf("Exercice 3(produit) : entrez 02 nombres : ");
	scanf(" %lf %lf", &x, &y);
	printf("Le produit des 02 nombres est : %.3lf\n", x*y);
}

//fonction exercice4
void exercice4(int n){
	if(n % 2 == 0){
		printf("le nombre %d est paire", n);
	}else{
		printf("le nombre %d est impair.\n", n);
	}
}

//fonction exercice5
void exercice5(){
	int a,b;
	printf("Exercice 5(comparaison) : entrez 02 entiers  : ");
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("%d est plus grand(>) que %d", a, b);
	}else if(a<b){
		printf("%d est plus petit (<) %d", a, b);
	}else{
		printf("%d est egale a (=) %d", a, b);
	}
}

//fonction exercice 17
int exercice17(int a, int b){
	/*retourner la somme de a et b*/
	return a+b;
}

//fonction exercice 6
void exercice6(){
	int x, y, z, temp;
    printf("Exercice 6 (ordre croissant) : entrez 03 entiers : ");
    scanf("%d %d %d", &x, &y, &z);
    
    /*effectuer le tri des entiers dans l'ordre croissant en utilisant la variable temporaire*/
	if(x>y){
		temp=x;
		x=y;
		y=temp;
	}
	if(x>z){
		temp=x;
		x=z;
		z=temp;
	}
	if(y>z){
		temp=y;
		y=z;
		z=temp;
	}
	printf("les entiers dans l'ordre croissant sont: %d, %d, %d", x, y, z);
}

//fonction exercice16
void exercice16(){
	char a, b, temp;
	printf("Exercice 16(permutation) : entrez vos 02 caractères : ");
	scanf(" %c %c", &a, &b);
	//afficher les caracteres avant la permutation
	printf("avant la permutation : a=%c, b=%c\n", a, b);
	
	/*effectuer la permutation de 02 variables*/
	temp = a;
	a=b;
	b=temp;
	
	/*afficher les caracteres apres la permutation*/
	printf("Apres permutation : a=%c, b=%c", a, b);
}
