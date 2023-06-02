//Luis Bustos. CI: 30.642.944.Laboratorio de Programación I. Sección C
//Profesor: Mario Gonzalez
//Proyecto # 3; Aleatoriedad (CARTAS)

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

short unsigned int opc1,opc2;
short unsigned int num,simb,n,m,n1,m1,x,aciertos,intentos;
long unsigned int cant,i,veces;
float prob;

int main(){
	
	srand(time(NULL));
	
	do{
		system("cls");
		system("color 07");
		printf("Bienvenido al programa de las cartas RANDINNI. Que desea hacer? \n\nMenu: \n\n1. Adivinar\n2. Demostrar alteracion de las probabilidades\nX. Numero distinto para salir\n\n Ingrese: ");
		scanf("%d",&opc1);
		printf("\n");
		
		switch(opc1){
			case 1:
				aciertos=0;
				intentos=0;
				do{
					
					printf("\nLlevas %d aciertos y %d intentos. A los 3 aciertos ganas el juego de adivinar. Tienes 10 intentos!\n\n",aciertos,intentos);
					printf("Ingrese la carta que desea adivinar: \n");
					
					printf(" 1. A\n 2. 2\n 3. 3\n 4. 4\n 5. 5\n 6. 6\n 7. 7\n 8. 8\n 9. 9\n10. 10\n11. J\n12. Q\n13. K\n\n Ingrese: ");
					scanf("%d",&num);
					printf("\n\n");

							if(num<11 && num>0){
								
								printf("0. \3\n1. \4\n2. \5\n3. \6\n\n Ingrese: ");
								scanf("%d",&simb);
								
								if(simb<4 && simb>-1){
									
									printf("\nLa carta escogida es: ");
									
									switch(num){
										case 1: printf("A");
												break;
										case 11: printf("J");
												break;
										case 12: printf("Q");
												break;
										case 13: printf("K");
												break;
										default:
												if(num<11 && num>0){
													printf("%d",num);
												}
									}
										
										switch(simb){
											case 0: printf("\3");
													break;
											case 1: printf("\4");
													break;
											case 2: printf("\5");
													break;
											case 3: printf("\6");
													break;
											default:
													printf("ERR");
										}
										
										x=rand()%1000;
													
										if(0<=x && x<190){
											n1=1;
											m1=3;
										}
										
										if(190<=x && x<230){
											n1=11;
											m1=0;
										}
										
										if(230<=x && x<320){
											n1=10;
											m1=3;
										}
										
										if(320<=x && x<330){
											n1=3;
											m1=1;
										}
										
										if(330<=x && x<370){
											n1=7;
											m1=2;
										}
										
										if(370<=x && x<500){
											n1=5;
											m1=0;
										}
										
										if(500<=x && x<1000){
											n1=rand()%13+1;
											m1=rand()%4;
										}
										
										printf("\nLa carta aleatoria es: ");
										
										switch(n1){
											case 0:
													printf("NOO");
													break;
											case 1: printf("A");
													break;
											case 11: printf("J");
													break;
											case 12: printf("Q");
													break;
											case 13: printf("K");
													break;
											default:
													if(n1<11 && n1>0){
												
														printf("%d",n1);
													}else{
														printf("ERR");
													}
										}
													
										switch(m1){
											case 0: printf("\3");
													break;
											case 1: printf("\4");
													break;
											case 2: printf("\5");
													break;
											case 3: printf("\6");
													break;
											default: printf("?");
										}
										
											printf("\n\n");
									
									if(num==n1 && simb==m1){
										system("color 02");
										printf("CORRECTO HAS ACERTADO!!");
										getch();
										system("color 07");
										aciertos++;
									}else{
										system("color 0c");
										printf("No has acertado, intenta de nuevo.");
										getch();
										system("color 07");
									}
									
									intentos++;										
																				
								}else{
									system("color 04");
									printf("PALO INVALIDO\n\n");
									getch();
									system("color 07");									
									
								}
							}else{
								system("color 04");
								printf("CARTA INVALIDA\n\n");
								getch();
								system("color 07");							
							}
					
				}while(aciertos<3 && intentos<10);
				
				if(aciertos==3){

					printf("\n\n");
					system("color 02");
					printf("MUY BIEN, HAS GANADO EL JUEGO!!\n\n");
					system("pause");
					system("color 07");
					
				}else if(intentos==10){

					system("color 0c");
					printf("\n\n---------------- Has perdido... No te preocupes, yo tampoco soy muy bueno\n\n");
					system("pause");
					system("color 07");
				}
				break;
			
			case 2:
				
				printf("\nDEMOSTRACION\n\n");
				
				printf("Cartas del mazo trucado: \n\n1. A\6 (\36720%%) \n2. J\3 (\3675%%) \n3. 10\6 (\36710%%) \n4. 3\4 (\3672%%) \n5. 7\5 (\3675%%) \n6. 5\3 (\36714%%) \n\nCartas del mazo NO trucado: \n7. 6\5 \n8. K\4 \n9. Q\6\n\n10. Ingresar otra carta de mazo no trucado\n\n Ingrese: ");
				scanf("%d",&opc2);
	
				switch(opc2){
					case 1:
						
						n=1;
						m=3;
						break;
					case 2:
						
						n=11;
						m=0;
						break;
					case 3:
						
						n=10;
						m=3;
						break;
					case 4:
						
						n=3;
						m=1;
						break;
					case 5:
						
						n=7;
						m=2;
						break;
					case 6:
						
						n=5;
						m=0;
						break;
					case 7:
						
						n=6;
						m=2;
						break;
					case 8:
						
						n=13;
						m=1;
						break;
					case 9:
						
						n=12;
						m=3;
						break;
					case 10:
						
						printf("  Ingrese la carta: \n");
						printf(" 1. A\n 2. 2\n 3. 3\n 4. 4\n 5. 5\n 6. 6\n 7. 7\n 8. 8\n 9. 9\n10. 10\n11. J\n12. Q\n13. K\n\n Ingrese: ");
						scanf("%d",&n);
						printf("\n\n");
						printf("  Ingrese el palo: \n0. \3\n1. \4\n2. \5\n3. \6\n\n Ingrese: ");
						scanf("%d",&m);
						break;

					default:
						system("color 04");
						printf("\n\nOPCION INVALIDA!\n\n");
						getch();
						system("color 07");
						
				}
				
				printf("Ingrese la cantidad de cartas para calcular la probabilidad de aparicion de la carta ");
				
								switch(n){
									case 1: printf("A");
											break;
									case 11: printf("J");
											break;
									case 12: printf("Q");
											break;
									case 13: printf("K");
											break;
									default:
											printf("%d",n);
											break;
								}
											
								switch(m){
									case 0: printf("\3");
											break;
									case 1: printf("\4");
											break;
									case 2: printf("\5");
											break;
									case 3: printf("\6");
											break;
									default: printf("?");;
											break;
								}
								
								printf(": ");
								scanf("%d",&cant);
								printf("\n\n");
					
				if(1<=opc2 && opc2<=6){
					
					for(i=0;i<=cant;i++){
						
						x=rand()%1000;
						
						if(0<=x && x<190){
							n1=1;
							m1=3;
						}
						
						if(190<=x && x<230){
							n1=11;
							m1=0;
						}
						
						if(230<=x && x<320){
							n1=10;
							m1=3;
						}
						
						if(320<=x && x<330){
							n1=3;
							m1=1;
						}
						
						if(330<=x && x<370){
							n1=7;
							m1=2;
						}
						
						if(370<=x && x<500){
							n1=5;
							m1=0;
						}
						
						if(500<=x && x<1000){
							n1=rand()%13+1;
							m1=rand()%4;
						}
						

						if(n==n1 && m==m1){
							veces++;
						}
		
					}
					
				}else{
					
					for(i=0;i<=cant;i++){
						
						x=rand()%1000;
									
						n1=rand()%13+1;
						m1=rand()%4;
						
						if(n==n1 && m==m1){
							veces++;
						}
					}
				}
				
				prob=((float)veces/cant*100.0);
				
				printf("La razon de probabilidad es de %d/%d y en porcentaje es %.3f%%\n\n",veces,cant,prob);
				system("pause");
				break;
		}
		
	printf("\n\n\n");
	
	}while(opc1==2 || opc1==1);
	
	return 0;
}