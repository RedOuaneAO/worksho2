#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int nomb;
	printf("taper un nombre : ");
	scanf("%d", &nomb);
	if( nomb % 2 == 0){
		printf("le nombre est pair");
	}else{
		printf("le nomber est impair");
	}
	return 0;
}
