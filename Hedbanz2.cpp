#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int short unsigned n,i,j,k,l;
int Carta[78];

int main(){
	
	srand(time(NULL));
	
	printf("PROGRAMA PARA JUGAR HEDBANZ\n\n");
	printf("Presiona ENTER para continuar (termina en 0)\n\n\n");
		
	do{
		for(i=0;i<78;i++){
			Carta[i]=0;
		}
		
		j=0; i=0;
		
		do{
			do{
				n=rand()%78;
				Carta[n]=1;
				
				k=0;
				
				for(i=0;i<78;i++){
					k+=Carta[i];
				}
				
			}while(k!=(j+1));
			       
			printf("%i) %i\n",j,n);
			
			j++;
			
			if(getch()=='0'){
				k=80;
			}
			
		}while(k<=77);
		
		
		if(j!=80){
			
			printf("\n\n");
			printf("PRESIONE 0 PARA SALIR\n\n\n");
			
			if(getch()=='0'){
				j=80;
			}  	
		}
				
	}while(k!=80);
	
	return 0;
}