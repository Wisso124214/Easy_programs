#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <math.h>

int jugadores, cartas, cant, sobra, nactual, pactual, p1, p2, p3, p4, p5, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17, p18, i, j;
float pc, p0;

int main(){
	
	time_t comienzo, final;
	
	srand(time(NULL));
	
	printf("Bienvenido al simulador de cartas\n\n");
	printf("Por favor ingrese el numero de cartas a repartir: ");
	scanf("%i",&cartas);
	printf("Ingrese ahora la cantidad de jugadores en esta partida: ");
	scanf("%i",&jugadores);
	
	cant=(int)cartas/jugadores;
	sobra=cartas%jugadores;
	
	if(cant==0){
		printf("Lo sentimos, no hay suficientes cartas para repartir a todos, la cantidad minima en el mazo debe ser de %i cartas, para que por lo menos cada uno tenga una carta",jugadores);
		
		if(cartas==92 && jugadores==45){					//CAMBIAR VALORESS
			
			for(i=0; i<60; i++){
				
				system("cls");
				printf("FELICIDADES!!! HA HALLADO LA SOLUCION SECRETA!!!");
				
				if(i<3)
					system("color c0");
				
				if(i>=3 && i<6 || i>=44 && i<47)
					system("color e0");
				
				if(i>=6 && i<9 || i>=47 && i<50)
					system("color 10");
				
				if(i>=9 && i<12 || i>=50 && i<53)
					system("color a0");
				
				if(i>=12 && i<15 || i>=53 && i<56)
					system("color 60");
				
				if(i>=15 && i<18 || i>=56 && i<60)
					system("color d0");
				
				if(i>=18 && i<21)
					system("color 50");
				
				if(i>=21 && i<24)
					system("color 70");
				
				if(i>=24 && i<27)
					system("color 30");
				
				if(i>=27 && i<30)
					system("color b0");
				
				if(i>=30 && i<33)
					system("color 90");
				
				if(i>=33 && i<36)
					system("color 80");
				
				if(i>=36 && i<39)
					system("color 07");
				
				if(i>=39 && i<41)
					system("color 20");
				
				if(i>=41 && i<44)
					system("color 40");
			}
		}else{
			
			nactual=rand()%13+1;
			pactual=rand()%4+1;
			p0=nactual*pactual;
			
			pc=(int)p1/10000;
			
			pc=(int)p1/100;
			pc=pc/100-(int)pc/100;
			pc=pc*100;
			
			pc=p1/100.0-(int)p1/100;
			pc=pc*100.0;
			
			if(p1!=0){
				
				pc=p1/100.0-(int)p1/100;
				pc=pc*100.0;	
				
				if(pc!=p0){
					
				pc=(int)p1/100;
				pc=pc/100-(int)pc/100;
				pc=pc*100;
				
				if(pc!=p0){
				
				pc=(int)p1/10000;
				
				if(pc!=p0){
					
					if(p2!=0){
						
						pc=p1/100.0-(int)p1/100;
						pc=pc*100.0;	
						
						if(pc!=p0){
							
						pc=(int)p1/100;
						pc=pc/100-(int)pc/100;
						pc=pc*100;
						
						if(pc!=p0){
						
						pc=(int)p1/10000;
						
						if(pc!=p0){
						
						
						}
					}else
					return 1;
					}else
					return 1;
						
					}else
					return 0;
					
				}else
				return 1;
				
				}else
				return 1;
				}else
				return 1;
				
			}else
			return 0;
			
			//1: SI lo encontro
			//0: NO lo encontro
			
			for(i=0; i<p0; i++){
				
				case 1: 
			}
			
		}	
		
		
	}else{
		printf("Para que todos tengan la cantidad de cartas, a cada jugador se les debe entregar un total de %i cartas",cant);
		
	}
	
	return 0;
}