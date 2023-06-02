#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Nivel[9][5];

int I[4]={186,205,186,205};
int L[4]={201,187,188,200};
int T[4]={204,203,185,202};

int Random[9][5];

int i, j;

int main(){
	
	srand(time(NULL));
	
	for(j=0;j<5;j++){
		
		for(i=0;i<9;i++){
			
			Random[i][j]=rand()%4;
		}
	}
	
	Nivel=[2,1,1,1,3,1,1,1,2,3,1,3,1,4,1,3,1,3,3,1,4,1,3,1,2,0,1,1,0,1,0,0,0,2,1,3,2,1,3,1,1,1,3,1,2];
	

	for(j=0;j<5;j++){
		
		for(i=0;i<9;i++){
			
			switch(Random[i][j]){
				
				case 0:{
					
					Nivel[i][j]=255;
					break;
				}
				
				case 1:{
					
					Nivel[i][j]=I[Random[i][j]];
					break;
				}
				
				case 2:{
					
					Nivel[i][j]=L[Random[i][j]];
					break;
				}
				
				case 3:{
					
					Nivel[i][j]=T[Random[i][j]];
					break;
				}
				
				case 4:{
					
					Nivel[i][j]=206;
					break;
				}
			}
		}
	}
	
	do{
		for(j=0;j<5;j++){
			
			for(i=0;i<9;i++){
				
				printf("%c",Nivel[i][j]);
			}
			
			printf("\n");
		}
		
		printf("\n\n");
		
		//PEDIR VALOR DE Random[i][j] a cambiar

	
	}while(/*EL JUEGO NO ESTE ORDENADO. O SEA SEA IGUAL AL ARREGLO NIVEL*/);
	
	
	return 0;
}