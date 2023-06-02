//Luis Bustos. CI: 30.642.944.Laboratorio de Programación I. Sección C
//Profesor: Mario Gonzalez
//Proyecto # 3; Aleatoriedad (CARTAS) VERSION 2 EXPANDIDO CON ARREGLOS

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

short unsigned int opc1,opc2,opc3;
short unsigned int num,simb,n,m,n1,m1,x,aciertos,intentos;
long unsigned int cant,i,veces;
float prob;

int main(){
	
	perc=100;
	srand(time(NULL));
	
	do{
		system("cls");
		if(opc3==3){
			system("color 0f");
		}else{
			system("color 07");
		}
		printf("Bienvenido al programa de las cartas RANDINNI. Que desea hacer? \n\nMenu: \n\n1. Ejecutar el juego de adivinar\n2. Demostrar alteracion de las probabilidades\nX. Numero distinto para salir\n\n Ingrese: ");
		scanf("%d",&opc1);
		printf("\n");
		
		switch(opc1){
			case 1:{
				aciertos=0;
				intentos=0;
				do{
					
					printf("\nLlevas %d aciertos y %d intentos. A los 3 aciertos ganas el juego de adivinar. Tienes 15 intentos!\n\n",aciertos,intentos);
					printf("Ingrese la carta que desea adivinar: \n");
					
					printf(" 1. A\n 2. 2\n 3. 3\n 4. 4\n 5. 5\n 6. 6\n 7. 7\n 8. 8\n 9. 9\n10. 10\n11. J\n12. Q\n13. K\n14. Salir del juego\n\n Ingrese: ");
					scanf("%d",&num);
					printf("\n\n");

							if(num<14 && num>0){
								
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
												
												if(0<=x && x<320){
													n1=1;
													m1=3;
												}
												
												if(320<=x && x<460){
													n1=11;
													m1=0;
												}
												
												if(460<=x && x<500){
													n1=10;
													m1=3;
												}
												
												if(500<=x && x<1000){
													n1=rand()%13+1;
													m1=rand()%4;
												}
										
										printf("\nLa carta aleatoria es: ");
										
										switch(n1){
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
											if(opc3==3){
												system("color 0f");
											}else{
												system("color 07");
											}										
										aciertos++;
									}else{
										system("color 0c");
										printf("No has acertado, intenta de nuevo.");
										getch();
											if(opc3==3){
												system("color 0f");
											}else{
												system("color 07");
											}
									}
									
									intentos++;										
																				
								}else{
									system("color 04");
									printf("PALO INVALIDO\n\n");
									getch();
										if(opc3==3){
											system("color 0f");
										}else{
											system("color 07");
										}
									
								}
							}else if (num==14){
								system("color 0b");
								printf("Gracias por jugar!! Vuelva pronto!");
								getch();
									if(opc3==3){
										system("color 0f");
									}else{
										system("color 07");
									}
								intentos=16;
							}else{
								system("color 04");
								printf("CARTA INVALIDA\n\n");
								getch();
									if(opc3==3){
										system("color 0f");
									}else{
										system("color 07");
									}
							}
					
				}while(aciertos<3 && intentos<15);
				
				if(aciertos==3){

					printf("\n\n");
					system("color 02");
					printf("MUY BIEN, HAS GANADO EL JUEGO!!\n\n");
					system("pause");
						if(opc3==3){
							system("color 0f");
						}else{
							system("color 07");
						}
					
				}else if(intentos==15){

					system("color 0c");
					printf("\n\n----- Has perdido... No te preocupes, yo tampoco soy muy bueno\n\n");
					system("pause");
						if(opc3==3){
							system("color 0f");
						}else{
							system("color 07");
						}
				}
				break;}
			
			case 2:
				
				printf("\nDEMOSTRACION");
				printf("\n\n  Muy bien, desea:\n  1. Ver las probabilidades del mazo trucado\n  2. Ver las probabilidades del mazo no trucado \n  3. Crear un mazo trucado perzonalizado \n  X. Otro numero para salir\n\n  Ingrese: ");
				scanf("%d",&opc3);
				
				switch(opc3){
					case 1:{
							cant=0; prob=0.0; veces=0;
							printf("Cartas del mazo trucado: \n\n1. A\6 (\36733%%) \n2. J\3 (\36715%%) \n3. 7\5 (\3675%%) \n\nOtras cartas con \3671%% de probabilidad (las cartas con probabilidad se llevan el 50%%): \n4. 6\5 \n5. K\4 \n6. Q\6\n\n7. Ingresar otra carta\n\n Ingrese: ");
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
										
										n=7;
										m=2;
										break;
									case 4:
										
										n=6;
										m=2;
										break;
									case 5:
										
										n=13;
										m=1;
										break;
									case 6:
										
										n=12;
										m=3;
										break;
									case 7:
										
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
											if(opc3==3){
												system("color 0f");
											}else{
												system("color 07");
											}
										
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
									
									for(i=0;i<=cant;i++){
										
										x=rand()%1000;
										
										if(0<=x && x<320){
											n1=1;
											m1=3;
										}
										
										if(320<=x && x<460){
											n1=11;
											m1=0;
										}
										
										if(460<=x && x<500){
											n1=10;
											m1=3;
										}
										
										if(500<=x && x<1000){
											n1=rand()%13+1;
											m1=rand()%4;
										}
										
				
										if(n==n1 && m==m1){
											veces++;
										}
						
									}									
								
								prob=((float)veces/cant*100.0);
								
								printf("La razon de probabilidad es de %d/%d y en porcentaje es %.3f%%\n\n",veces,cant,prob);
								system("pause");
								break;						
						
						break;}
						
					case 2:{
						
							cant=0; prob=0.0; veces=0;
							printf("Cartas del mazo NO trucado: \n\n1. A\6 \n2. J\3 \n3. 7\5 \n4. 6\5 \n5. K\4 \n6. Q\6\n\n7. Ingresar otra carta\n\n Ingrese: ");
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
										
										n=7;
										m=2;
										break;
									case 4:
										
										n=6;
										m=2;
										break;
									case 5:
										
										n=13;
										m=1;
										break;
									case 6:
										
										n=12;
										m=3;
										break;
									case 7:
										
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
											if(opc3==3){
												system("color 0f");
											}else{
												system("color 07");
											}
										
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
									
									for(i=0;i<=cant;i++){
										
										x=rand()%1000;
													
										n1=rand()%13+1;
										m1=rand()%4;
										
										if(n==n1 && m==m1){
											veces++;
										}
									}
								
								prob=((float)veces/cant*100.0);
								
								printf("La razon de probabilidad es de %d/%d y en porcentaje es %.3f%%\n\n",veces,cant,prob);
								system("pause");
								break;
						
						break;}
						
					case 3:
						
						system("color 0f");
						printf("\nAh!, te parecio curioso? Pues sí, acá podrás crear tu mazo trucado personalizado solo que use arreglos (por eso lo envio aparte)\n\nPrimero ingresa la cantidad de cartas trucadas que desea ingresar: ");
						scanf("%d",&csT);
						
							for(i=0;i<csT;i++){
																
								printf("\n\nIngrese la carta a la cual desea alterarle su probabilidad: ");
	{
									printf(" 1. A\n 2. 2\n 3. 3\n 4. 4\n 5. 5\n 6. 6\n 7. 7\n 8. 8\n 9. 9\n10. 10\n11. J\n12. Q\n13. K\n14. Salir del juego\n\n Ingrese: ");
									scanf("%d",&num);
									printf("\n\n");
				
											if(num<14 && num>0){
												
												printf("0. \3\n1. \4\n2. \5\n3. \6\n\n Ingrese: ");
												scanf("%d",&simb);
												
												if(simb<4 && simb>-1){
													
													printf("\nLa carta escogida #%d es: ",i);
													
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
														
														numCT[csT][num]=1;
														simbCT[csT][simb]=1;
														
													}else{
														system("color 04");
														printf("PALO INVALIDO\n\n");
														getch();
															if(opc3==3){
																system("color 0f");
															}else{
																system("color 07");
															}
														
													}
												}else{
													system("color 04");
													printf("CARTA INVALIDA\n\n");
													getch();
														if(opc3==3){
															system("color 0f");
														}else{
															system("color 07");
														}
												}
	
												printf("\n");
	}
							}
							for(i=0;i<csT;i++){

								printf("\n\nIngrese el porcentaje de probabilidad que desea asignarle a la carta, aún te queda %d%%, el restante se repartirá uniformemente: ",perc);
{
								if(perc>=percT){
									
									for(j=0;j<num;j++){
										n=numCT[i][j];
										
										if(n==1){
											n1=n;
										}
									}
									
									for(j=0;j<num;j++){
										m=simbCT[i][j];
										
										if(m==1){
											m1=m;
										}
									}
									
									printf("\n\n%d) ")
									
								scanf("%d"&percT[csT]);									
									perc-=percT[csT];
									
									difRg[csT]=percT[csT]
								}else{
									
									
								}
}
							}
							
						
								if(0<=x && x<320){
									n1=1;
									m1=3;
								}
								
								if(320<=x && x<460){
									n1=11;
									m1=0;
								}
								
								if(460<=x && x<500){
									n1=10;
									m1=3;
								}
								
								if(500<=x && x<1000){
									n1=rand()%13+1;
									m1=rand()%4;
								}						
						
						break;
						
					default:
						
						break;
				}
				

		}
		
	printf("\n\n\n");
	
	}while(opc1==2 || opc1==1);
	
	return 0;
}