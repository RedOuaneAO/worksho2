#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool is_leap_year(int Y){

 bool  bissextile=true;
 
  if(Y%4==0 && Y%100!=0){
 	bissextile=true;
 	
 }else if( Y%400==0){
 	 bissextile=true;
 	 
 	 
 }else{
 	bissextile=false;
 }
 return bissextile;
}
 
int main(int argc, char *argv[]) {
	int Y;
	bool bissextile;
	printf(" saisir une année entre 1800 et 10000 : ");
	scanf("%d",&Y);
	if(Y<1800 || Y>10000){
		printf("error");
	}
	bissextile=is_leap_year(Y);
	if(bissextile==true){
		printf("l'annee est bissextille ");
	}else{
		printf("l'annee n'est pas bissextille ");
	}
	return 0;
}
