//Luis Bustos. CI: 30.642.944. Laboratorio de Física
//SERIE DE FIBONACCI. VERSIÓN 2. HASTA NÚMERO K DE LA SERIE (WHILE)

#include <stdio.h>

int i,j,k,l,m,n;

int main (){

	j=1;
	printf ("Ingresar el numero limite de la serie de fibonacci hasta el que desea visualizar: ");
	scanf ("%d",&n);

    printf ("%d, ",i);
	printf ("%d, ",j);
	
    while (k<n){
		k=i+j;
		printf ("%d, ",k);	
		i=j;
		j=k;
    }

}
