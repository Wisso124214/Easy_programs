#include <stdio.h>
#include <conio.h>

int grado,imp,par,val;

int main (){
	do{
		printf("Programa para determinar si un grafo posee camino o ciclo segun el teorema de Euler. \n\n\n");
		printf("  Ingrese los grados de los vertices del grafo con ENTER. (Cuando termine, inserte 0) \n\n");
		do{
			scanf("%d",&val);
				
				if (val%2){
					imp++;
				}else{
					par++;
				}
				grado++;
		}while(val!=0);
			
			printf("\n");
				if (grado<=4){
					printf("\nLa ley de Euler solo se aplica para grafos con cuatro (4) o mas grados (vertices)");
				}
				if (imp==2){
					printf("\n\nEl grafo tiene CAMINO y no tiene ciclo, debido a que posee dos grados impares");
				}else if (imp==0 && grado!=1){
					printf("\n\nEl grafo tiene CICLO y no tiene camino, debido a que posee todos sus grados son pares");
				}else{
					printf("\n\nEl grafo no tiene ni ciclo, ni camino, segun el teorema de Euler");
				}
		printf("\n\n--Desea volver a usar el programa? (Y para afirmar)");
	}while(getch()=='Y');
	
	return 0;
}