//Luis Bustos. 08.15.2002
//Divisibilidad de n en m

#include <stdio.h>

int n,m,mod;

int main(){

do{
	
	printf("Ingrese n: ");
	scanf("%d",&n);
	
	printf("\nIngrese m: ");
	scanf("%d",&m);
	
	mod=n%m;
	
	printf("\n");
	
	if(!mod)
		printf("Es divisible");
	else
		printf("No es divisible");
	
	printf("\n\n\n");
}while(n!=0);
	
	return 0;
}