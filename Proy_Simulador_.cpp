#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <time.h>
#include <conio.h>

int jugadores, cartas, cant, sobra, nactual, pactual, c, t, c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25, c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36, c37, c38, c39, c40, c41, c42, c43, c44, c45, c46, c47, c48, c49, c50, c51, c52, i, j;
char s;

int main(){
	
	srand(time(NULL));
	
	printf("Bienvenido al simulador de cartas\n\n");
	printf("Por favor ingrese el numero de cartas a repartir: ");
	scanf("%i",&cartas);
	printf("Ingrese ahora la cantidad de jugadores en esta partida: ");
	scanf("%i",&jugadores);
	
	cant=(int)floor(cartas/jugadores);
	sobra=cartas%jugadores;
	
	if(cant==0){
		printf("Lo sentimos, no hay suficientes cartas para repartir a todos, la cantidad minima en el mazo debe ser de %i cartas, para que por lo menos cada uno tenga una carta",jugadores);
	
	}else{
		
		if(cartas==92 && jugadores==45){
			
			for(i=0; i<60; i++){
				
				system("cls");
				printf("FELICIDADES!!! HA HALLADO LA SOLUCION SECRETA!!!");
				{
				
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
			}
		}else{
						
			if(c1 + c2 + c3 + c4 + c5 + c6 + c7 + c8 + c9 + c10 + c11 + c12 + c13 + c14 + c15 + c16 + c17 + c18 + c19 + c20 + c21 + c22 + c23 + c24 + c25 + c26 + c27 + c28 + c29 + c30 + c31 + c32 + c33 + c34 + c35 + c36 + c37 + c38 + c39 + c40 + c41 + c42 + c43 + c44 + c45 + c46 + c47 + c48 + c49 + c50 + c51 + c52 == 52){
				
				c1=0; c2=0; c3=0; c4=0; c5=0; c6=0; c7=0; c8=0; c9=0; c10=0; c11=0; c12=0; c13=0; c14=0; c15=0; c16=0; c17=0; c18=0; c19=0; c20=0; c21=0; c22=0; c23=0; c24=0; c25=0; c26=0; c27=0; c28=0; c29=0; c30=0; c31=0; c32=0; c33=0; c34=0; c35=0; c36=0; c37=0; c38=0; c39=0; c40=0; c41=0; c42=0; c43=0; c44=0; c45=0; c46=0; c47=0; c48=0; c49=0; c50=0; c51=0; c52=0;
				
			}else{
			
			printf("Ingrese \"Y\" si desea imprimir las cartas repartidas a los jugadores: ");
			s=getch();
			
			if(s=='Y' || s=='y'){
				fflush(stdin);
				for(int z=0; z<jugadores; z++){
					
					printf("\n\n\nJugador %d:\n\n",z+1);
					
					for(int y=0; y<cant; y++){
					
						do{
							//pactual: palo actual
							
							nactual=rand()%13+1;							
							pactual=rand()%4+1;
							c=nactual*10+pactual;
							
							//Si tomamos los palos 3(♥), 4(♦), 5(♣), 6(♠) entonces 53, seria 5 de corazon
							
							switch(c){
								
								case 11:
								 if(c1==1){
								t=0;
								}else{
								c1=1;
								t=1;
								}break;
								
								case 21:
								 if(c2==1){
								t=0;
								}else{
								c2=1;
								t=1;
								}break;
								
								case 31:
								 if(c3==1){
								t=0;
								}else{
								c3=1;
								t=1;
								}break;
								
								case 41:
								 if(c4==1){
								t=0;
								}else{
								c4=1;
								t=1;
								}break;
								
								case 51:
								 if(c5==1){
								t=0;
								}else{
								c5=1;
								t=1;
								}break;
								
								case 61:
								 if(c6==1){
								t=0;
								}else{
								c6=1;
								t=1;
								}break;
								
								case 71:
								 if(c7==1){
								t=0;
								}else{
								c7=1;
								t=1;
								}break;
								
								case 81:
								 if(c8==1){
								t=0;
								}else{
								c8=1;
								t=1;
								}break;
								
								case 91:
								 if(c9==1){
								t=0;
								}else{
								c9=1;
								t=1;
								}break;
								
								case 101:
								 if(c10==1){
								t=0;
								}else{
								c10=1;
								t=1;
								}break;
								
								case 111:
								 if(c11==1){
								t=0;
								}else{
								c11=1;
								t=1;
								}break;
								
								case 121:
								 if(c12==1){
								t=0;
								}else{
								c12=1;
								t=1;
								}break;
								
								case 131:
								 if(c13==1){
								t=0;
								}else{
								c13=1;
								t=1;
								}break;
								
								case 12:
								 if(c14==1){
								t=0;
								}else{
								c14=1;
								t=1;
								}break;
								
								case 22:
								 if(c15==1){
								t=0;
								}else{
								c15=1;
								t=1;
								}break;
								
								case 32:
								 if(c16==1){
								t=0;
								}else{
								c16=1;
								t=1;
								}break;
								
								case 42:
								 if(c17==1){
								t=0;
								}else{
								c17=1;
								t=1;
								}break;
								
								case 52:
								 if(c18==1){
								t=0;
								}else{
								c18=1;
								t=1;
								}break;
								
								case 62:
								 if(c19==1){
								t=0;
								}else{
								c19=1;
								t=1;
								}break;
								
								case 72:
								 if(c20==1){
								t=0;
								}else{
								c20=1;
								t=1;
								}break;
								
								case 82:
								 if(c21==1){
								t=0;
								}else{
								c21=1;
								t=1;
								}break;
								
								case 92:
								 if(c22==1){
								t=0;
								}else{
								c22=1;
								t=1;
								}break;
								
								case 102:
								 if(c23==1){
								t=0;
								}else{
								c23=1;
								t=1;
								}break;
								
								case 112:
								 if(c24==1){
								t=0;
								}else{
								c24=1;
								t=1;
								}break;
								
								case 122:
								 if(c25==1){
								t=0;
								}else{
								c25=1;
								t=1;
								}break;
								
								case 132:
								 if(c26==1){
								t=0;
								}else{
								c26=1;
								t=1;
								}break;
								
								case 13:
								 if(c27==1){
								t=0;
								}else{
								c27=1;
								t=1;
								}break;
								
								case 23:
								 if(c28==1){
								t=0;
								}else{
								c28=1;
								t=1;
								}break;
								
								case 33:
								 if(c29==1){
								t=0;
								}else{
								c29=1;
								t=1;
								}break;
								
								case 43:
								 if(c30==1){
								t=0;
								}else{
								c30=1;
								t=1;
								}break;
								
								case 53:
								 if(c31==1){
								t=0;
								}else{
								c31=1;
								t=1;
								}break;
								
								case 63:
								 if(c32==1){
								t=0;
								}else{
								c32=1;
								t=1;
								}break;
								
								case 73:
								 if(c33==1){
								t=0;
								}else{
								c33=1;
								t=1;
								}break;
								
								case 83:
								 if(c34==1){
								t=0;
								}else{
								c34=1;
								t=1;
								}break;
								
								case 93:
								 if(c35==1){
								t=0;
								}else{
								c35=1;
								t=1;
								}break;
								
								case 103:
								 if(c36==1){
								t=0;
								}else{
								c36=1;
								t=1;
								}break;
								
								case 113:
								 if(c37==1){
								t=0;
								}else{
								c37=1;
								t=1;
								}break;
								
								case 123:
								 if(c38==1){
								t=0;
								}else{
								c38=1;
								t=1;
								}break;
								
								case 133:
								 if(c39==1){
								t=0;
								}else{
								c39=1;
								t=1;
								}break;
								
								case 14:
								 if(c40==1){
								t=0;
								}else{
								c40=1;
								t=1;
								}break;
								
								case 24:
								 if(c41==1){
								t=0;
								}else{
								c41=1;
								t=1;
								}break;
								
								case 34:
								 if(c42==1){
								t=0;
								}else{
								c42=1;
								t=1;
								}break;
								
								case 44:
								 if(c43==1){
								t=0;
								}else{
								c43=1;
								t=1;
								}break;
								
								case 54:
								 if(c44==1){
								t=0;
								}else{
								c44=1;
								t=1;
								}break;
								
								case 64:
								 if(c45==1){
								t=0;
								}else{
								c45=1;
								t=1;
								}break;
								
								case 74:
								 if(c46==1){
								t=0;
								}else{
								c46=1;
								t=1;
								}break;
								
								case 84:
								 if(c47==1){
								t=0;
								}else{
								c47=1;
								t=1;
								}break;
								
								case 94:
								 if(c48==1){
								t=0;
								}else{
								c48=1;
								t=1;
								}break;
								
								case 104:
								 if(c49==1){
								t=0;
								}else{
								c49=1;
								t=1;
								}break;
								
								case 114:
								 if(c50==1){
								t=0;
								}else{
								c50=1;
								t=1;
								}break;
								
								case 124:
								 if(c51==1){
								t=0;
								}else{
								c51=1;
								t=1;
								}break;
								
								case 134:
								 if(c52==1){
								t=0;
								}else{
								c52=1;
								t=1;
								}break;
							}
										
							//1: DISPONIBLE Y ALMACENADO
							//0: NO DISPONIBLE (esta en uso)
							
							fflush(stdout);
							
							if(t==1){
								switch(nactual){
									
									case 1:
										printf("A");
										break;
										
									case 11:
										printf("J");
										break;
									
									case 12:
										printf("Q");
										break;
										
									case 13:
										printf("K");
										break;
									
									default:
										printf("%d",nactual);
										break;						
								}
								
								switch(pactual){
									
									case 1:
										printf("\3");
										break;
										
									case 2:
										printf("\4");
										break;
										
									case 3:
										printf("\5");
										break;
										
									case 4:
										printf("\6");
										break;
								}
							}
						}while(t==0);
						
						printf(", ");
						system("pause>nul");
					}

					c1=0; c2=0; c3=0; c4=0; c5=0; c6=0; c7=0; c8=0; c9=0; c10=0; c11=0; c12=0; c13=0; c14=0; c15=0; c16=0; c17=0; c18=0; c19=0; c20=0; c21=0; c22=0; c23=0; c24=0; c25=0; c26=0; c27=0; c28=0; c29=0; c30=0; c31=0; c32=0; c33=0; c34=0; c35=0; c36=0; c37=0; c38=0; c39=0; c40=0; c41=0; c42=0; c43=0; c44=0; c45=0; c46=0; c47=0; c48=0; c49=0; c50=0; c51=0; c52=0;
			}
		}
		}
		}		
	}
	
	return 0;
}