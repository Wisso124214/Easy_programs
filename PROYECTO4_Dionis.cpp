#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int Sud[9][9], flag, cont, lectura, y, x, cuadrante, b, n, menor;

void Imprimir(int p, int q);

int main(){ 

	srand(time(NULL));
	
	for(int i=0; i<9; i++){
		for(int j=0; j<9; j++){
			Sud[i][j]=0;
		}
	}
			
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				do
				{
					flag=0;
					Sud[i][j]=rand()%9+1;
					printf("\nSud(%d,%d): %d\n\n",i,j,Sud[i][j]);
					
					x=i;
					
					for(y=0; y<j; y++)				//Revisar que no se repitan numeros en una fila
					{
						if(Sud[x][y]==Sud[i][j])
						{
							flag=2;
							y=j;
						}else{
							flag=0;
						}
					}
					
				if(flag==0){

					y=j;
					for(x=0; x<i; x++)				//Revisar que no se repitan numeros en una columna	
					{
							if(Sud[x][y]==Sud[i][j])
							{
								flag=2;
								x=i;
							}else{
								flag=0;
							}
					}
					
					Imprimir(i,j);
					printf("\n\n");
					system("pause");										
					
//				if(flag==0){
//						
//					x=i;
//					y=j;
//					
//					if((x%3)==0 && (y%3)==0)
//						n=1;
//					else
//						n=0;
//					switch(x%3){					//Para tomar la posicion del primer valor a la izquierda arriba de cada cuadrante (de 9 cuadrados) y no tener inconveniente
//													//Al revisar los valores que se repiten en cuadrantes
//						case 1:
//							x--;
//							break;
//							
//						case 2:
//							x=x-2;
//							break;
//					}
//					
//					switch(y%3){
//						
//						case 1:
//							y--;
//							break;
//							
//						case 2:
//							y=y-2;
//							break;
//					}
//					printf("\n\n");					
//					
//					//printf("Presione F7 para continuar...\n");
//					
//					for(int a=x; a<(x+2); a++)		//Movimiento de filas en el cuadrante 3x3
//					{										
//						if(a==((x+2)-1)){					//Para evitar que entre en el último valor ingresado y active el flag y salga
//							menor=j;
//						}else{
//							menor=(y+2);
//						}
//						
//						printf("a: %d\n",a);
//						for(b=y; b<menor; b++)		////Movimiento de columnas en el cuadrante 3x3
//						{
//							printf("b: %d\n",b);
//							if(Sud[a][b]==Sud[i][j])		//Supongamos una matriz 3x3 sencilla, que va de 0 a 2 en cada posición, entonces lo que hace esto es ir comparando el valor generado aleactoriamente en la posición (i,j) con cada posición del cuadrante para comprobar si se repite, pero no funciona, en cambio los ciclos for para verificar las columnas y filas sí. No entiendo
//							{
//								flag+=1;
//								b+=2;
//								a+=2;
//							}else{
//								flag=0;
//							}
//							
//							printf("\n\na: %d, b: %d",a,b);
//						}
//					}
//					
//					}
					}
					
				}while(flag==2);
			}
		}
				
		printf("\n");
		
//		for(int i=0;i<9;i++)
//		{
//			printf(" ");
//			
//			for(int j=0;j<9;j++)
//			{
//				if(j%3==0 && j!=0){
//					printf("| ");
//				}
//				
//				
//				if(j==8){
//					printf("%d",Sud[i][j]);
//				}else{
//					printf("%d ",Sud[i][j]);
//				}
//			}	
//			printf("\n");
//			
//			if((i+1)%3==0 && i!=8){
//				printf("-----------------------\n");
//			}
//	}
	
	return 0;		
}

void Imprimir(int p, int q){
	
	int col;
	
	printf("**************************\n\n");
	
	for(int i=0;i<=p;i++)
	{
		printf(" ");
		
		if(i==p){
			col=q;
		}else{
			col=8;
		}
		
		for(int j=0;j<col+1;j++)
		{             
			if(j%3==0 && j!=0){
				printf("| ");
			}
			
			if(j==8){
				printf("%d",Sud[i][j]);
			}else{
				printf("%d ",Sud[i][j]);
			}
		}	
		printf("\n");
		
		if((i+1)%3==0 && i!=8){
			printf("-----------------------\n");
		}
	}
}