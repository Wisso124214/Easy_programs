#include <stdio.h>

int main(){
	
	char nombre[11]="datos2.dat";
	FILE *fichero;
	
	fichero = fopen( nombre, "w" );
	printf( "Fichero: %s -> ", nombre );
	if( fichero )
		printf( "creado (ABIERTO)\n" );
	else
	{
		printf( "Error (NO ABIERTO)\n" );
		return 1;
	}
	
	for(int i=0; i<25; i++ ) putc( i+'a', fichero );
	
	if( !fclose(fichero) )
		printf( "\nFichero cerrado\n" );
	else
	{
		printf( "\nError: fichero NO CERRADO\n" );
		return 1;
	}
	return 0;
}