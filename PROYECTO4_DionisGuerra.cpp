#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int Sud[9][9], flag, cont, lectura, y, x, cuadrante, b, n, menor, Cuadrantes[9][9], posCuadr;

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
					printf("\nSud(%d,%d): %d",i,j,Sud[i][j]);
					
					x=i;
					printf("\nx: %d",x);
					
					for(y=0; y<j; y++)				//Revisar que no se repitan numeros en una fila
					{
						printf("\ny: %d",y);
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
					
				if(flag==0){
						
					if(i>=0 && i<=2){
						if(j>=0 && j<=2){
							
							posCuadr=0;
						}
						
						if(j>=3 && j<=5){
							
							posCuadr=1;
						}

						if(j>=6 && j<=8){
							
							posCuadr=2;
						}						
					}
					
					if(i>=3 && i<=5){
						if(j>=0 && j<=2){
							
							posCuadr=3;
						}
						
						if(j>=3 && j<=5){
							
							posCuadr=4;
						}

						if(j>=6 && j<=8){
							
							posCuadr=5;
						}						
					}
					
					if(i>=6 && i<=8){
						if(j>=0 && j<=2){
							
							posCuadr=6;
						}
						
						if(j>=3 && j<=5){
							
							posCuadr=7;
						}

						if(j>=6 && j<=8){
							
							posCuadr=8;
						}						
					}
					
					switch(posCuadr){
						
						case 0:
							x=0;
							y=0;
							break;
						
						case 1:
							x=0;
							y=3;
							break;
						
						case 2:
							x=0;
							y=6;
							break;
						
						case 3:
							x=3;
							y=0;
							break;
						
						case 4:
							x=3;
							y=3;
							break;
						
						case 5:
							x=3;
							y=6;
							break;
						
						case 6:
							x=6;
							y=0;
							break;
						
						case 7:
							x=6;
							y=3;
							break;
						
						case 8:
							x=6;
							y=6;
							break;
					}
					
					for(int a=x; a<(x+2); a++){
						
						for(b=y; b<(y+2); b++){
							
							if(Sud[a][b]==Sud[i][j]){
								
							}
						}
					}
					
					
					
/*					x=i;
					y=j;
					
					if((x%3)==0 && (y%3)==0)
						n=1;
					else
						n=0;
					switch(x%3){					//Para tomar la posicion del primer valor a la izquierda arriba de cada cuadrante (de 9 cuadrados) y no tener inconveniente
													//Al revisar los valores que se repiten en cuadrantes
						case 1:
							x--;
							break;
							
						case 2:
							x=x-2;
							break;
					}
					
					switch(y%3){
						
						case 1:
							y--;
							break;
							
						case 2:
							y=y-2;
							break;
					}
					
					for(int a=x; a<(x+3); a++)
					{											
						if(a==i-1){
							menor=j;
						}else{
							menor=y+3;
						}
						
						printf("a: %d\n",a);
						for(b=y; b<menor; b++)
						{
							printf("b: %d\n",b);
							if(Sud[a][b]==Sud[i][j])
							{
								flag+=1;
								b+=2;
								a+=2;
							}else{
								flag=0;
							}
							
							printf("\n\na: %d, b: %d",a,b);
						}
					}*/
					
					}
					}
					
				}while(flag==2);
			}
		}
				
		printf("\n");
		
		for(int i=0;i<9;i++)
		{
			printf(" ");
			
			for(int j=0;j<9;j++)
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
	
	return 0;		
}