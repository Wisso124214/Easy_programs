#include <stdio.h>
#include <conio.h>
char s;
float f,c;

int main (){
	do {
		printf ("CONVERTIDOR DE TEMPERATURA DE GRADOS FAHRENHEIT A GRADOS CELSIUS \n \n");
		printf ("Inserte los grados Farhenheit que desea convertir a Celsius: ");
		scanf ("%f",&f);
		c=(f-32)*5/9;
		printf ("Los grados Celsius resultantes serían: =%f \n \n",c);
		printf ("?Desea volver a realizar el calculo? (y/n)");
		scanf ("%s",&s);
		printf ("\n \n");
	}while (s!='n');
	
	return 0;
}