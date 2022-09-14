#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool dividedby(int n ,int a){
	int i , r;
	bool premier=true;
	r=n/a;
	for(i=2;i<r;i++){
		if(r%i==0){
	 premier=false;
		}
	}
   return premier;
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n , a ;
	bool premier;
	printf("saisir le valeur de n :");
	scanf("%d",&n);
	printf("saisir le valeur de a :");
	scanf("%d",&a);
	 premier = dividedby(n,a);
	if(premier==true){
		printf("le resultat et premier");
	}else{
		printf("le resultat et n'est pas premier");
	}
	return 0;
}
