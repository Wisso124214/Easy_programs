#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

char clave[10][20], usuario[10][20],clave_[1][20], usuario_[1][20],texto1[20],texto2[20],eliminarTexto[20];
int i, j, start,mid,end,users,flag,k,l,pos;

int main(){
	
	do{
			
		printf("DESEA: REGISTRAR USUARIO (1), INICIAR SESION(2) O SALIR (3): ");
		scanf("%d",&start);
		printf("\n");
		
		switch(start){
			case 1:
				do{
					printf("\n BIENVENIDO NUEVO USUARIO. \n\n INGRESE SU NICKNAME: ");
					scanf("%s",&usuario[i]);
					printf("\n INGRESE SU CLAVE: ");
					scanf("%s",&clave[i]);
	
					if(i<10){
						system("color 02");
						printf("\n\n SU USUARIO HA ASIGNADO SATISFACTORIAMENTE.");
						getch();
						system("color 07");
						printf("\n\n Desea anadir otro usuario? (1/0): ");
						scanf("%d",&users);
						i++;
						
					}else{
						system("color 04");
						printf("\n\n ERROR. EXCESO DE USUARIOS");
						getch();
						system("color 07");
						users=0;
					}
	
					system("pause");
					system("cls");
					
				}while(users!=0);
					break;
			case 2:
				printf("\n BIENVENIDO USUARIO EXISTENTE.");
				
				printf("\n\n INGRESE SU NICKNAME: ");
				scanf("%s",&usuario_[0]);
	
				flag=1;
				k=0;
				pos=-1;
				for(j=(i-1);j>=0;j--){
					flag=strcmp(usuario[j],usuario_[0]);
					
					if(flag==0){
						k=2;
						pos=j;
					}
				}
					
					
				if(k==2){
					printf("\n INGRESE SU CLAVE: ");
					scanf("%s",&clave_[0]);
					
				flag=1;
				l=0;
				pos=-1;
				for(j=(i-1);j>=0;j--){
					flag=strcmp(clave[j],clave_[0]);
					
					if(flag==0){
						l=2;
						pos=j;
					}
					
				}
					
					if(l==2){
						system("color 02");
						printf("\n\n INICIO DE SESION EXITOSO.");
						getch();
						system("color 07");
						printf("\n\n Ingrese texto1: ");
						scanf("%s",&texto1);
						printf("\n Ingrese texto2: ");
						scanf("%s",&texto2);
						
						do{
							printf("\n\n QUE DESEA HACER?: \n1. COPIAR TEXTO2 A TEXTO1\n2. COPIAR TEXTO1 A TEXTO2\n3. IMPRIMIR TEXTO1\n4. IMPRIMIR TEXTO2\n5. BORRAR TEXTO1\n6. BORRAR TEXTO2\n7. PEGAR TEXTO2 A TEXTO1\n8. PEGAR TEXTO1 A TEXTO2\n9. REEMPLAZAR TEXTO 1 Y TEXTO2\n 10. Salir\n\nIngrese: ");
							scanf("%d",&mid);
							printf("\n");
							
							switch(mid){
								case 1: 
									strcpy(texto1,texto2);
									break;
								case 2:
									strcpy(texto2,texto1);
									break;
								case 3:
									printf("%s",texto1);
									break;
								case 4:
									printf("%s",texto2);
									break;
								case 5:
									strcpy(texto1,eliminarTexto);
									break;
								case 6:
									strcpy(texto2,eliminarTexto);
									break;
								case 7:
									strcat(texto1,texto2);
									break;
								case 8:
									strcat(texto2,texto1);
									break;
								case 9:
									printf("\n Ingrese texto1: ");
									scanf("%s",&texto1);
									printf("\n Ingrese texto2: ");
									scanf("%s",&texto2);
									break;							
								case 10:
									break;
								default: 
									system("color 04");
									printf("\n\n\n CASO INVALIDO!");
									getch();
									system("color 07");
							}
							printf("\n");
							system("pause");
							system("cls");
						}while(mid!=10);
				break;
				
				}else{
					system("color 04");
					printf("\n\n CLAVE INCORRECTA\n\n");
					getch();
					system("color 07");
				}
			case 3: break;
			default:
				system("color 04");
				printf("\n\nERROR OPCION INVALIDA. ");
				getch();
				system("color 07");
				
		}else{
			
			printf("\n\n EL NICKNAME INGRESADO NO ESTA EN REGISTRADO\n\n");
			system("color 04");
			getch();
			system("color 07");
		}
	}
	
	}while(start!=3);

return 0;
}
