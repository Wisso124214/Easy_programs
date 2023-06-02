//Luis Bustos. CI: 30.642.944. Programación II.
//Programa para sumar matrices.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


unsigned short int filasA, columnasA, filasB, columnasB, i, j, flag, opc, r;
short int vmin, vmax;
int matrizA[50][50], matrizB[50][50], matrizC[50][50];

void ImprimirMatrizA();
void ImprimirMatrizB();
void ImprimirMatrizC();

int main(){
	
	srand(time(NULL));

	do{
		system("cls");
		system("color 0f");
		
		printf("Bienvenido usuario al programa para sumar y restar matrices (segun indique), que se llamaran A y B. Tome en cuenta que  deben tener la misma cantidad de filas y columnas para operar sin problemas. Ademas debe ser menor de 50 por motivos de espacio de almacenamiento\n\n");
		
		printf("\nIngrese la cantidad de filas de la matriz A: ");
		scanf("%d",&filasA);
		printf("\nIngrese la cantidad de columnas de la matriz A: ");
		scanf("%d",&columnasA);
		printf("\nIngrese la cantidad de filas de la matriz B: ");
		scanf("%d",&filasB);
		printf("\nIngrese la cantidad de columnas de la matriz B: ");
		scanf("%d",&columnasB);
		
		printf("\n\n");
		
		
		if(filasA!=filasB || columnasA!=columnasB){
			
			flag=1;
			system("color 04");
			printf("Incorrecto. ");
			
			if(filasA!=filasB && columnasA!=columnasB){
				printf("El numero de filas y columnas de ambas matrices son distintos");
			}else if(filasA!=filasB){
				printf("El numero de columnas de ambas matrices son distintos");
			}else{
				printf("El numero de filas de ambas matrices son distintos");
			}
			
			printf("\n\nPor favor, intente de nuevo\n\n");
			system("pause");
			system("color 0f");
			
		}else{
			
			flag=0;
			system("color 0a");
			printf("Correcto. Las matrices poseen la misma cantidad de filas y columnas. Ahora las puede llenar y operar\n\n");
			system("pause");
			system("color 0f");
		}
		
	}while(flag==1);

	
	
//Llenar matriz A

{
	printf("\n\nDesea llenar la matriz A manualmente (0) o aleatoriamente (1). Ingrese el valor que se encuentra entre parentesis de la opcion que desea escoger: ");
	scanf("%d",&opc);
	
	if(opc==0){

		printf("\n\nLlenar manualmente la matriz A\n\n");
		
		for(i=0;i<filasA;i++){
			for(j=0;j<columnasA;j++){
				
				printf("Ingrese por favor el valor de la matriz A en la posicion [%d][%d]: ",i+1,j+1);
				scanf("%d",&matrizA[i][j]);
				printf("\n");
			}
		}
	}else{
		
		printf("\n\nLlenar aleatoriamente la matriz A\n\n");
		
		do{
			printf("Ingrese el valor minimo que desea que posean los numeros aleatorios: ");
			scanf("%d",&vmin);
			printf("Ingrese el valor maximo que desea que posean los numeros aleatorios: ");
			scanf("%d",&vmax);
			
			if(vmax<vmin){
				system("color 04");
				printf("Por favor. Ingrese el valor maximo en la casilla correspondiente. Intente de nuevo\n\n");
				system("pause");
				system("color 0f");
			}else{
				system("color 0a");
				printf("Okey\n\n");
				system("pause");
				system("color 0f");
			}
		}while(vmax<vmin);
		
		r=vmax-vmin;
		
		for(i=0;i<filasA;i++){
			for(j=0;j<columnasA;j++){

				matrizA[i][j]=(rand()%r)+vmin;
			}
		}
	}
	
	ImprimirMatrizA();
}


//Llenar matriz B

{
	printf("\n\nDesea llenar la matriz B manualmente (0) o aleatoriamente (1). Ingrese el valor que se encuentra entre parentesis de la opcion que desea escoger: ");
	scanf("%d",&opc);
	
	if(opc==0){

		printf("\n\nLlenar manualmente la matriz B\n\n");
		
		for(i=0;i<filasB;i++){
			for(j=0;j<columnasB;j++){
				
				printf("Ingrese por favor el valor de la matriz B en la posicion [%d][%d]: ",i+1,j+1);
				scanf("%d",&matrizB[i][j]);
				printf("\n");
			}
		}
	}else{
		
		printf("\n\nLlenar aleatoriamente la matriz B\n\n");
		
		do{
			printf("Ingrese el valor minimo que desea que posean los numeros aleatorios: ");
			scanf("%d",&vmin);
			printf("Ingrese el valor maximo que desea que posean los numeros aleatorios: ");
			scanf("%d",&vmax);
			
			if(vmax<vmin){
				system("color 04");
				printf("Por favor. Ingrese el valor maximo en la casilla correspondiente. Intente de nuevo\n\n");
				system("pause");
				system("color 0f");
			}else{
				system("color 0a");
				printf("Okey\n\n");
				system("pause");
				system("color 0f");
			}
		}while(vmax<vmin);
		
		r=vmax-vmin;
		
		for(i=0;i<filasB;i++){
			for(j=0;j<columnasB;j++){

				matrizB[i][j]=(rand()%r)+vmin;
			}
		}

	}
	
	ImprimirMatrizB();
	
}
	do{
		printf("\n\n\nBien, ya ingresadas las matrices A y B, escoja la operacion que desea realizar del siguiente menu: \n\n1. A + B \n2. A - B \n3. B - A \n\nOpcion: ");
		scanf("%d",&opc);
		
		switch(opc){
			
			case 1:{
				
				printf("A + B. Entendido.\n\n");
				
				for(i=0;i<filasA;i++){
					for(j=0;j<columnasA;j++){
						
						matrizC[i][j]=matrizA[i][j]+matrizB[i][j];
					}
				}
				
				ImprimirMatrizA();
				ImprimirMatrizB();
				
				flag=0;
				break;
			}
			
			case 2:{
				
				printf("A - B. Entendido.\n\n");
				
				for(i=0;i<filasA;i++){
					for(j=0;j<columnasA;j++){
						
						matrizC[i][j]=matrizA[i][j]-matrizB[i][j];
					}
				}
				
				ImprimirMatrizA();
				ImprimirMatrizB();
	
				flag=0;
				break;
			}
			
			case 3:{
				
				printf("B - A. Entendido.\n\n");
				
				for(i=0;i<filasA;i++){
					for(j=0;j<columnasA;j++){
						
						matrizC[i][j]=matrizB[i][j]-matrizA[i][j];
					}
				}
				
				ImprimirMatrizB();
				ImprimirMatrizA();
				
				flag=0;
				break;
			}
			
			default:{
				
				system("color 04");
				printf("Opcion invalida. Intente de nuevo\n\n");
				flag=1;
				system("pause");
				system("color 0f");
				break;
			}
		}
	}while(flag==1);
		
	ImprimirMatrizC();

	system("color 0b");
	printf("\n\n\nGRACIAS POR USAR EL PROGRAMA.\n");
	
	for(i=0;i<105;i++){
		
		printf(" ");
	}
	printf("-Luis Bustos.");
	

	return 0;
}

void ImprimirMatrizA(){
	
	printf("\n\nLa matriz A es:\n\n");
	
	for(i=0;i<filasA;i++){
		
		printf("(");
		
		for(j=0;j<columnasA;j++){

			printf("\t%d",matrizA[i][j]);
		}
		printf("\t)\n");
	}
}


void ImprimirMatrizB(){
	
	printf("\n\nLa matriz B es:\n\n");
	
	for(i=0;i<filasB;i++){
		
		printf("(");
		
		for(j=0;j<columnasB;j++){

			printf("\t%d",matrizB[i][j]);
		}
		printf("\t)\n");
	}
}

void ImprimirMatrizC(){
	
	printf("\n\nLa matriz C es igual a:\n\n");
	
	for(i=0;i<filasB;i++){
		
		printf("(");
		
		for(j=0;j<columnasB;j++){

			printf("\t%d",matrizC[i][j]);
		}
		printf("\t)\n");
	}
}