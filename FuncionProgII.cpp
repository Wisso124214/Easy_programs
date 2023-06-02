#include <stdio.h>

int suma(int a, int b);
void pedirDatos();

int num1, num2;

int main(){
	
	pedirDatos();
	printf("El valor de la suma es: %d",suma(num1,num2));
	
	return 0;
}

void pedirDatos(){
	
	printf("Ingrese el primer valor a sumar: ");
	scanf("%d", &num1);
	printf("Ingrese el segundo valor a sumar: ");
	scanf("%d", &num2);
}

int suma(int a, int b) {
		
//		int resultado=a+b;		Se puede hacer perfectamente
		int resultado;
		resultado=a+b;
		return resultado;
	}