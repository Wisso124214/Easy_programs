#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <conio.h>

int moneda,cara,cruz,coin,flag,apuesta;

int main(){
 
srand(time(NULL));
 printf("Bienvenido al juego para acertar la cara de la moneda!!");
 printf("\nComienzas con 1000 monedas\n\n");
 coin=1000;

 do{
		printf("Tiene %d monedas",coin);
		printf("\nIngrese la cantidad a apostar:");
		scanf("%d",&apuesta);

		if(apuesta>0 && apuesta<=coin){
	
				moneda=rand()%3;
		
			if (moneda==0){
			                 printf( "\nHa salido CARA ganas el doble");
			                 coin+=apuesta;
			                 printf("\nHaz ganado %d",apuesta);
			             }
			                 
			if (moneda==1){
			                 printf( "\nLa moneda a quedado vertical,intente de nuevo:");
			                 printf("\nNo gana nada");
			                }
			if(moneda==2){
			              printf("\nHa salido CRUZ lo has perdido el juego");
			              printf("\n Has perdido %d monedas, te quedas sin nada, vuelva pronto",coin);
			              coin=0;
			              flag=-1;
			    	}
					
					if(coin>0){
			        printf("\n\nQuiere volver a apostar? (SI:1 / NO:0): ");
			        scanf("%d",&flag);
			        printf("\n\n");
			    	}
			    	
		   }else if(apuesta>coin){
			printf("\nMija no teneis tanta plata. Quieres volver a apostar? (SI:1 / NO:2)");
			scanf("%d",&flag);
		}
		   
		if(apuesta==0 || flag==0){
			printf("\nMuy bien, ha decidido retirarse! Se lleva %d monedas!!",coin);	

		}

		
	}while(flag>0);	
		
}