#include <stdio.h>
#include <stdlib.h>

void add(int a ,int b){
	int p;
	p=a+b;
	printf(" la addition des deux valeurs est  %d:",p);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a , b ;
	printf("saisir le valeur de a :");
	scanf("%d",&a);
	printf("saisir le valeur de b :");
	scanf("%d",&b);
	add(a,b);
	return 0;
}
