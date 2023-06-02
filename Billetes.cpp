//Luis Bustos. CI: 30.642.944. Laboratorio de Programación I
//El programa de los billetes. VERSIÓN 1 (conversión forzada).

#include <stdio.h>
#include <conio.h>

float cant;
int b100, b50, b20, b10, b05, b01, cent;

int main (){

	printf ("Inserte la cantidad a descomponer en billetes: ");
	scanf ("%f", &cant);
	printf ("\n");
	
	cent=(cant-(int)cant)*100;
	
	b100=cant/100;
	cant=(int)cant%100;
	
	b50=cant/50;
	cant=(int)cant%50;

	b20=cant/20;
	cant=(int)cant%20;
	
	b10=cant/10;
	cant=(int)cant%10;
	
	b05=cant/05;
	cant=(int)cant%05;
	
	b01=cant/01;
	cant=(int)cant%01;	
	
	
	printf ("Billetes de 100: %d und \n", b100);
	printf ("Billetes de  50: %d und \n", b50);
	printf ("Billetes de  20: %d und \n", b20);
	printf ("Billetes de  10: %d und \n", b10);
	printf ("Billetes de  05: %d und \n", b05);
	printf ("Billetes de  01: %d und \n", b01);
	printf ("    Centavos   : %d und \n", cent);	

	return 0;
}
