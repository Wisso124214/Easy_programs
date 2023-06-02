#include <stdio.h>
#include <string.h>

int main(){
		
	char nombre[20]="";
	int i;
	
	printf( "Escribe tu nombre: " );
	scanf( "%s", nombre );
	
	printf( "Tu nombre, al reves:\n" );
	for( i=strlen(nombre)-1; i>=0; i-- )
		putchar( nombre[i]);
	printf( "\n" );

	return 0;
}