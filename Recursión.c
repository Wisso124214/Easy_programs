
//Programa para imprimir los numeros del 1 al 10. De manera recursiva

#include <stdio.h>

int i=1;
void printf_i();

int main(){
	
	printf_i();
	
	return 0;
}

void printf_i(){
	
	printf("%d\n",i);
	i++;
	
	if(i<=10)
		printf_i();	
	
}