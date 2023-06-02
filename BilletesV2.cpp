//Luis Bustos. CI: 30.642.944. Laboratorio de Programación I
//El programa de los billetes. VERSIÓN 2 (dos variables).

#include <stdio.h>
#include <conio.h>

float fcant, b100, b50, b20, b10, b05, b01, cent;
int icant;

int main (){

	printf ("Inserte la cantidad a descomponer en billetes: ");
	scanf ("%f", &fcant);
	printf ("\n");
	
	icant=fcant;
	
	cent=(fcant-icant)*100.0;
	
	b100=icant/100;
	icant=icant%100;
	
	b50=icant/50;
	icant=icant%50;
	
	b20=icant/20;
	icant=icant%20;
	
	b10=icant/10;
	icant=icant%10;
	
	b05=icant/05;
	icant=icant%05;
	
	b01=icant/01;
	icant=icant%01;	
	
	
	printf ("Billetes de 100: %.0f und \n", b100);
	printf ("Billetes de  50: %.0f und \n", b50);
	printf ("Billetes de  20: %.0f und \n", b20);
	printf ("Billetes de  10: %.0f und \n", b10);
	printf ("Billetes de  05: %.0f und \n", b05);
	printf ("Billetes de  01: %.0f und \n", b01);
	printf ("    Centavos   : %.0f und \n", cent);	

	return 0;
}
