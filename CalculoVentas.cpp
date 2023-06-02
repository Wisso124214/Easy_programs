#include <stdio.h>

int cantidad,  flag;
float precio, total;

int main (){
	do{
		printf ("\n");
		printf("Ingrese la cantidad del producto: ");
		scanf("%d",&cantidad);
		printf ("Ingrese el precio del producto: ");
		scanf ("%f",&precio);
		total+=cantidad*precio;
		printf ("\n");
		printf ("Desea ingresar otro producto?: ");
		scanf ("%d",&flag);
	}while (flag!=0);
	
	printf ("\n");
	if (total!=0){
		printf ("Su total de la compra es: %f", total);		
	}

}
