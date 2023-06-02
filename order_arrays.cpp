#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int i,j,n,mayor,posmayor,confirm;
int A[7]={39,5,7,2,16,25,17};

int main(){
	
	srand(time(NULL));
	
	do{
		printf("Ingrese 1 para suministrar un vector personalizado y ordenarlo de menor a mayor\nIngrese cualquier valor distinto de 1 si desea usar el vector por defecto\n\n");
		scanf("%d",&confirm);
		printf("\n\n");
		
		if(confirm==1){
			
			for(i=0;i<6;i++){
				printf("Ingrese A[%d]: ",i);
				scanf("%d",&A[i]);
			}
			
			printf("\n\n");
		}
				
		for(i=0;i<7;i++){
			printf("A[%d] = %d \n",i,A[i]);
		}
		
		printf("\n\n");
		
		for(j=6;j>=0;j--){
			
			mayor=0;
			for(i=j;i>=0;i--){
				
				if(A[i]>=mayor){
					mayor=A[i];
					posmayor=i;
				}
			}
		
		A[posmayor]=A[j];
		A[j]=mayor;
		}
		
		
/*		for(j=3;j>=0;j--){
			
			n=rand()%7;
			mayor=A[n];
			A[n]=A[j];
			A[j]=mayor;
		}*/
		
		
		for(i=0;i<7;i++){
			printf("A[%d] = %d \n",i,A[i]);
		}
		
		printf("\n\n");
		
		printf("Desea volver a usar el programa?? Ingresar: (1:SI) (0:NO)");
		scanf("%d",&confirm);
		
		printf("\n\n");
	}while(confirm==1);
	
	return 0;
}
