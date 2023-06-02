//Luis Bustos. CI: 30.642.944. Laboratorio de Física
//SERIE DE FIBONACCI VERSIÓN 3. DE 10 EN 10 NÚMEROS DE LA SERIE (DO-WHILE)

#include <stdio.h>
#include <conio.h>

int i,j,k,l,m;

int main (){

	j=1;
    printf ("%d, ",i);
	printf ("%d, ",j);

   do{
		for(m=0;m<10;m++){
			
		k=i+j;
		printf ("%d, ",k);	
		i=j;
		j=k;
		}
    }while (getch ()!='n');
}
