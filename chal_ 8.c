#include <stdio.h>
#include <stdlib.h>
void echanger(int a , int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("echange est %d %d : ",a, b);
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a ,b ;
	printf("saisir la valeur a:");
	scanf("%d",&a);
	printf("saisir la valeur b:");
	scanf("%d",&b);
	echanger(a,b);
	return 0;
}
