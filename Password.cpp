#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int i;
char c, cadena[20];

int main(){
	
	printf("Cuando termine de ingresar la clave presione la barra espaciadora\n\n");
	printf("Ingrese su clave: ");
	do{
		
		c=getch();
		
		if(c!=' ')
//			printf("%c",c);
			printf("*");	
			
		cadena[i]=c;
	 	i++;	 	
		 	
	}while(c!=' ');
	
	fflush(stdin);
	
		
	printf("\n\n\nCadena: %s",cadena);
	
	return 0;
}