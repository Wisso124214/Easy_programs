#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//#include<windows.h>
int main(){
	int i = 0, op,Des,Rotaciones;
	int ramdon;
	float ContadorCara,ContadorCruz,ContadorEmpate,PromCara,PromCruz,PromEmpate;
	printf("Bienvenido al juego de la moneda. \n");
	
	do{
		printf("Por favor elija una opcion."),
		printf("\n1. Adivina la cara \n2. Que tan trucado esta el juego. \n");
		scanf("%d",&op);
		switch(op){
		
		case 1:	printf("Usted eligio Adivinar la cara de la moneda.\n");
		
			ramdon=rand()%780;
			printf("Elije Cara o cruz:\n1. Cara\n2. Cruz\n");
			scanf("%d",&Des);
			if(ramdon <= 200){
				if(Des == 1){
					printf("Ha salido Cara. Has ganado.");
				}
				else{
					printf("Ha salido Cara. Has perdido");
				}
			}
			if(ramdon > 200 && ramdon <= 774){
				if(Des == 2){
					printf("Ha salido Cruz. Has ganado.");
				}else{
					printf("Ha salido Cruz. Has perdido");
				}
			}
			if(ramdon >= 775){
				printf("La moneda a quedado de lado. Empate");
				}
				break;
				
			case 2:	printf("Usted a elegido: Que tan trucado esta el juego.");
				printf("\nIngresa cuantas veces va a girar la moneda: ");
				scanf ("%d",&Rotaciones);
				
				for(int j = 0; j <= Rotaciones; j++){
					ramdon = rand()%780;
					
					if (ramdon <= 200){
						ContadorCara++;
					}
					else if(ramdon > 200 && ramdon <= 774){
						ContadorCruz++;
					}
					else if(ramdon >= 775){
						ContadorEmpate++;
					}
					
				}
				PromCara = (ContadorCara/Rotaciones * 100);
				PromCruz = (ContadorCruz/Rotaciones * 100);
				PromEmpate = (ContadorEmpate/Rotaciones * 100);
				
				printf("\nLa cara salio un [%.2f%%]\n", PromCara);
				printf("\nLa cruz salio un [%.2f%%]\n", PromCruz);
				printf("\nDe lado salio un [%.2f%%]\n", PromEmpate);
				ContadorCara = 0;
				ContadorCruz = 0;
				ContadorEmpate = 0;
				break;
			}
	printf("\n----------\n");
		 
		
		printf("Desea intentar otra vez?"); 
		printf("\n1. Si\n2. No\n"); 
scanf("%d",&i);
	} while (i != 2);
	
	return 0;
}