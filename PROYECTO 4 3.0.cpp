#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Sud[9][9],Ar[10],Num,x,y, flag=1;
char Nick[20];
int main()
{
	
 srand(time(NULL));


	for(int i=0;i<9;i++)
	{
	    for(int j= 0;j<9;j++)
	    {	
			Sud[i][j]=rand()%9+1;
	    	
	    }
	}
	
	
	for(int i=0;i<9;i++)
	{
	    for(int j=0;j<9;j++)
	    {
	
	        for(int k=0;k<10;k++)
	        {
	            Ar[k]=0;
	        }
	
	
	        for(int k=0;k<9;k++)
	        { 	
	            if(Ar[Sud[i][k]]==1)
	            {
	                Sud[i][k]=0; 
	                
	            }
	            else
	            {	Sud[i+1][k-1]=0; 
	                Ar[Sud[i][k]]=1; 
	            }
	        }
	
	    
	        for(int k=0;k<10;k++)
	        {
	            Ar[k]=0;
	        }
	
	        
	        for(int k=0;k<9;k++)
	        {
	            if(Ar[Sud[k][j]]==1)
	            {
	                Sud[k][j]=0; 
	                
	            }
	            else
	            {
	                Ar[Sud[k][j]]=1; 
	            }
	        }
	    }
	}
			
			system("color 1B");
			printf("\n \t[Bienvenido a Sudoku Masters, le deseamos una divertida experiencia]\n\n");
			printf("\n REGLAS:\n");
			printf("\n 1.No ingresar numeros en las casillas ocupadas inicialmente en el sudoku\n");
			printf("\n 2.Se gana llenando todas las casillas con numeros del 1 al 9 sin que se repita el mismo numero en la misma fila o columna\n");
			printf("\n 3.Divertirse\n\n ");
			system("pause");
			system("cls");
			printf("\n \t[Bienvenido a Sudoku Masters, le deseamos una divertida experiencia]\n\n");
			printf("\n Ingrese su nombre/nickname: ");
			scanf("%s", Nick);
			
	
	do{
	
			system("cls");
			printf("\n\t\t\t...........................\tJugador:%s",Nick);
			printf("\n\t\t\t|      Sudoku Masters     |");
			printf("\n\t\t\t|.........................|");
			printf("\n\n");
			
		
			
		
			
		for(int i=0;i<9;i++)
		{
	    	printf("\t\t\t");
	    
	    	for(int j=0;j<9;j++)
	    	{
	        	printf(" %d|", Sud[i][j]);
	    	}
	
	    		printf("\n");
	    	
		}
			printf("\n Introduzca valor columna(0 a 8) en donde quiere ingresar el numero al Sudoku: ");
			scanf("%d", &y);
			printf("\n Introduzca valor de la fila(0 a 8) en donde quiere ingresar el numero al Sudoku: ");
			scanf("%d", &x);
			printf("\n Introduzca el numero que quiere ingresar");
			scanf("%d",&Num);	
			Sud[x][y]=Num;
					
			
	}while(flag=1);
	return 0;
	}