#include <stdio.h>
#include <conio.h>
#include <windows.h>

int i,opc;
char word[10],s,A[10],B[10];

int main(){
	
	printf("ARREGLOS");
	
	do{
		printf("\n\n\nMenu: \n1. Leer texto\n2. Transitividad de conjuntos\n3. Salir\n\n");
		printf("Ingrese la opcion que desea realizar: ");
		scanf("%i",&opc);
		printf("\n\n\n");
		
		switch(opc){
			case 1:
				printf("Ingrese el texto que desea leer (maximo 10 caracteres): ");
				scanf("%s",&word);
				printf("\n\nLa cadena de texto ingresada es: %s",word);
				break;
			case 2:
				printf("");
			case 3:
				printf("\n\nMuchas gracias por usar el programa!");
				break;
			default:
				printf("OPCION INVALIDA");
		}
		
		getch();
//		system("cls");
		
/*		if(opc==3){
			system("pause");
			s='s';
			printf("%s",s);
		}*/
		
		scanf("%s",&s);
	}while(s!='s');

			
	return 0;
}
