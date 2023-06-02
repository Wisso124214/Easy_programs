//Factorial

#include <stdio.h>

int i,j;
int fact, n;

int main (){
	
	printf ("Escriba la cantidad a calcular el factorial: ");
	scanf ("%d", &n);
	fact=n;
	printf ("\n");
	
	if (n>0){
		for (i=(n-1);i>0;i--){
		fact*=i;
	}
	
	printf ("Factorial: %d", fact);
	}else if (n==0){
		
		printf ("Factorial: 1");
	}else{
		printf ("El factorial de un numero negativo no es posible");
	}
	
	return 0;
}

