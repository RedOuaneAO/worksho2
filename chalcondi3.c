#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A ,B ;
	printf("le premier nombre :");
	scanf("%d", &A);
	printf("le deuxième nombre :");
	scanf("%d", &B);
	if( A == B){
		printf("le somme triple est :%d", (A+B)*3);
	}else{
		printf("la somme est : %d", A+B);
	}
	return 0;
}
