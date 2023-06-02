#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Sud[9][9],Ar[10], num0=59;
char Nick[20];
int main()
{
	
 srand(time(NULL));


	for(int i=0;i<9;i++)
	{
	    for(int j=0;j<9;j++)
	    {
	    	if(num0<0)
	    	{
	    		Sud[i][j]=0;
	    		num0-=1;
	    	
			}
			else
			{
			
	        Sud[i][j]=rand()%9+1;
			}
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
	            {
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
			printf("\n Ingrese su nombre/nickname: ");
			scanf("%s", Nick);
			
	
			
			system("cls");
			printf("\n\t\t\t...........................\t\t Jugador:%s",Nick);
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
	
	return 0;
	}