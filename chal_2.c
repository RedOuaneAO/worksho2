#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alpha;
	printf("saisies un caractère : ");
	scanf("%c", &alpha );
	switch(alpha){
		case 'a' : case 'A' : case 'E' : case 'e' : case 'i' : case 'I' : 
		case 'o' : case 'O' : case 'u' : case 'U' : case 'Y' : case 'y' : 
		printf("voyelle");
		break;
		default :
			printf("error");
	    	
		break;
	}
	return 0;
}
