#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int A[5],i,j,k,l;

int main(){
	
	do{
		
		printf("---------------------------------------------------------------\n1. Llenar vector\n2. Mostrar vector\n3. Consultar datos\n4. Modificar datos\n5. Sumar componentes del vector\n6. Salir\n\nIngrese la opcion que desea realizar: ");
		scanf("%d",&k);
		printf("\n");
		
		switch(k){
			case 1: 
				printf("   Llenar vector\n");
				for(j=0;j<5;j++){
					printf("Ingresar A[%d]: ",j);
					scanf("%d",&A[j]);
				}
				break;
			
			case 2:
				printf("   Mostrar vector\n");
				for(j=0;j<5;j++){
					printf("A[%d]=%d\n",j,A[j]);
				}
				break;
				
			case 3:
				//Consultar valor
				printf("Ingresar Posicion: ");
				scanf("%d",&i);
				printf("A[%d]= %d",i,A[i]);
				break;
				
			case 4:
				//Modificar valor
				printf("Ingresar Posicion: ");
				scanf("%d",&i);
				printf("Ingresar valor a sustituir: ");
				scanf("%d",&A[i]);
				break;
				
			case 5:
				for(j=0;j<5;j++){
					l+=A[j];
				}
				printf("%d",l);
				
			case 6: break;
			
			default: printf("---OPCION INVALIDA");
		}
		
		printf("\n\n");
	}while(k!=6);
	
	return 0;
}