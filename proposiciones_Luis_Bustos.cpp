//Luis Bustos. CI: 30.642.944. Lógica Computacional.
//Programa sencillo de proposiciones.

#include <stdio.h>
#include <windows.h>

short int p,q,r,salida;

main(){
	
	printf("Ingrese los valores de verdadero y falso (1 y 0 respectivamente) a las variables solicitadas: \n\n");
	printf("p -> ");
	scanf("%i",&p);
	printf("q -> ");
	scanf("%i",&q);
	printf("r -> ");
	scanf("%i",&r);
	
	if(p&&q&&r){
		salida=1;
	}
	
	printf("\n\nCon la operacion tenemos que: \n p ^ q ^ r \n %i ^ %i ^ %i   |   %i",p,q,r,salida);
	
	if(salida){
		system("color 0a");
		printf("El resultado es VERDADERO :). Gracias por usar el programa...");
	}else{
		system("color 04");
		printf("El resultado es FALSO :(. Gracias por usar el programa...");
	}
	
	return 0;
}