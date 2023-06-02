//Luis Bustos. CI: 30.642.944. Laboratorio de Física
//SERIE DE FIBONACCI VERSIÓN 1. N NÚMEROS DE LA SERIE (FOR)

#include <stdio.h>

int i,j,k,l,m,n;

int main (){

	printf ("Ingresar la cantidad de numeros de la serie de fibonacci que desea: ");
	scanf ("%d",&n);
	
 	printf ("%d, ",i);
    j=1;
	printf ("%d, ",j);

   	for (m=0;m<=n;m++){
   		
		k=i+j;
		printf ("%d, ",k);	
		i=j;
		j=k;
    }
}
