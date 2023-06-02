//Luis Bustos. CI: 30.642.944. Laboratorio de Física
//SERIE DE FIBONACCI VERSIÓN 1. N NÚMEROS DE LA SERIE (FOR)

#include <stdio.h>

int i,j,k,l,m;

int main (){

/*	j=1;
    printf ("%d, ",i);
	printf ("%d, ",j);
    while (k<10000000) {
		k=i+j;
		printf ("%d, ",k);	
		i=j;
		j=k;
    }
*/


    printf ("%d, ",i);
	printf ("%d, ",j);
    j=1;
   do{
		k=i+j;
		printf ("%d, ",k);	
		i=j;
		j=k;
    }while(m==0);
}
