//Luis Bustos. CI:30.642.944. Laboratorio de Programación II.
//Programa para sumar, restar, multiplicar o dividir dos valores.

#include <stdio.h>
#include <windows.h>

int a, b, opc;

int Suma(int x, int y);
int Resta(int minuendo, int sustraendo);
int Multiplicacion(int j, int k);
float Division(int dividendo, int divisor);

int main(){
	
	do{
		system("cls");
		printf("Binvenido estimado usuario, el presente programa sirve para sumar (A), restar (B), multiplicar (C) o dividir (D) dos valores personalizados. Para escoger la opcion deseada, ingrese la letra ubicada a la derecha de la opcion deseada en MAYUSCULAS y luego digite los valores a operar.\n\n>>");
		scanf("%c",&opc);
		
		if(opc<65 || opc>68){
			
			system("color 04");
			printf("LA OPCION SELECCIONADA NO ES VALIDA. POR FAVOR INTENTE DE NUEVO.\n\n");
			system("pause");
			system("color 07");
		}
		
	}while(opc<65 || opc>68);
	
	system("cls");
	printf("Ingrese el primer valor: ");
	scanf("%d",&a);
	printf("Ingrese el segundo valor: ");
	scanf("%d",&b);
	
	switch(opc){
		
		case 'A':
			
			printf("El valor de la suma de los digitos ingresados es de: %d",Suma(a,b));
			break;
		
		case 'B':
			printf("Al restar ambos numeros (el primero entre el segundo), se tiene como resultado: %d",Resta(a,b));
			break;
		
		case 'C':
			printf("El producto de ambos valores personalizados es de: %d",Multiplicacion(a,b));
			break;
		
		case 'D':
			printf("El cociente entre los dos reales escritos es de: %.4f",Division(a,b));
			break;
	}
	
	printf("\n\nGRACIAS POR USAR EL PROGRAMA\n\n");
	
	return 0;
}

int Suma(int x, int y){
	
	int r;
	r=x+y;
	return r;
}
int Resta(int minuendo, int sustraendo){
	
	int r;
	r=minuendo-sustraendo;
	return r;
}
int Multiplicacion(int j, int k){
	
	int r;
	r=j*k;
	return r;
}
float Division(int dividendo, int divisor){
	
	float r;
	r=dividendo/divisor;
	return r;
}