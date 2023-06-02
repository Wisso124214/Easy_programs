#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int short unsigned n,i,j;
int short unsigned _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, _73, _74, _75, _76, _77, _78;

int main(){
	
	srand(time(NULL));

	printf("PROGRAMA PARA JUGAR HEDBANZ\n\n");
	printf("Presiona ENTER para continuar (termina en 0)\n\n\n");
	
	do{
		
		j=0; i=0; _1=0; _2=0; _3=0; _4=0; _5=0; _6=0; _7=0; _8=0; _9=0; _10=0; _11=0; _12=0; _13=0; _14=0; _15=0; _16=0; _17=0; _18=0; _19=0; _20=0; _21=0; _22=0; _23=0; _24=0; _25=0; _26=0; _27=0; _28=0; _29=0; _30=0; _31=0; _32=0; _33=0; _34=0; _35=0; _36=0; _37=0; _38=0; _39=0; _40=0; _41=0; _42=0; _43=0; _44=0; _45=0; _46=0; _47=0; _48=0; _49=0; _50=0; _51=0; _52=0; _53=0; _54=0; _55=0; _56=0; _57=0; _58=0; _59=0; _60=0; _61=0; _62=0; _63=0; _64=0; _65=0; _66=0; _67=0; _68=0; _69=0; _70=0; _71=0; _72=0; _73=0; _74=0; _75=0; _76=0; _77=0; _78=0;
				
		do{
			do{
				
				n=rand()%78+1;
				
				switch(n){
					case 1: _1=1; break; case 2: _2=1; break; case 3: _3=1; break; case 4: _4=1; break; case 5: _5=1; break; case 6: _6=1; break; case 7: _7=1; break; case 8: _8=1; break; case 9: _9=1; break; case 10: _10=1; break; case 11: _11=1; break; case 12: _12=1; break; case 13: _13=1; break; case 14: _14=1; break; case 15: _15=1; break; case 16: _16=1; break; case 17: _17=1; break; case 18: _18=1; break; case 19: _19=1; break; case 20: _20=1; break; case 21: _21=1; break; case 22: _22=1; break; case 23: _23=1; break; case 24: _24=1; break; case 25: _25=1; break; case 26: _26=1; break; case 27: _27=1; break; case 28: _28=1; break; case 29: _29=1; break; case 30: _30=1; break; case 31: _31=1; break; case 32: _32=1; break; case 33: _33=1; break; case 34: _34=1; break; case 35: _35=1; break; case 36: _36=1; break; case 37: _37=1; break; case 38: _38=1; break; case 39: _39=1; break; case 40: _40=1; break; case 41: _41=1; break; case 42: _42=1; break; case 43: _43=1; break; case 44: _44=1; break; case 45: _45=1; break; case 46: _46=1; break; case 47: _47=1; break; case 48: _48=1; break; case 49: _49=1; break; case 50: _50=1; break; case 51: _51=1; break; case 52: _52=1; break; case 53: _53=1; break; case 54: _54=1; break; case 55: _55=1; break; case 56: _56=1; break; case 57: _57=1; break; case 58: _58=1; break; case 59: _59=1; break; case 60: _60=1; break; case 61: _61=1; break; case 62: _62=1; break; case 63: _63=1; break; case 64: _64=1; break; case 65: _65=1; break; case 66: _66=1; break; case 67: _67=1; break; case 68: _68=1; break; case 69: _69=1; break; case 70: _70=1; break; case 71: _71=1; break; case 72: _72=1; break; case 73: _73=1; break; case 74: _74=1; break; case 75: _75=1; break; case 76: _76=1; break; case 77: _77=1; break; case 78: _78=1; break;
					default: printf("\n\n ERROR \n\n\n");
				}
			
				i=0;
				
				i=_1+_2+_3+_4+_5+_6+_7+_8+_9+_10+_11+_12+_13+_14+_15+_16+_17+_18+_19+_20+_21+_22+_23+_24+_25+_26+_27+_28+_29+_30+_31+_32+_33+_34+_35+_36+_37+_38+_39+_40+_41+_42+_43+_44+_45+_46+_47+_48+_49+_50+_51+_52+_53+_54+_55+_56+_57+_58+_59+_60+_61+_62+_63+_64+_65+_66+_67+_68+_69+_70+_71+_72+_73+_74+_75+_76+_77+_78;
				
			}while(i!=(j+1));
			
			
			printf("%i) %i\n",j,n);
			
		j++;
				
			if(getch()=='0'){
				j=80;
			}
			
				
		}while(j<=77);
		
		
		if(j!=80){
			
			printf("\n\n");
			printf("PRESIONE 0 PARA SALIR\n\n\n");
		}
		

		if(j!=80){
			if(getch()=='0'){
				j=80;
			}  	
		}
				
		
	}while(j!=80);
		
	return 0;
}

	/*		switch(n){
				
				
	        case 1:
	                if(_1){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 2:
	                if(_2){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 3:
	                if(_3){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 4:
	                if(_4){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 5:
	                if(_5){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 6:
	                if(_6){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 7:
	                if(_7){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 8:
	                if(_8){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 9:
	                if(_9){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 10:
	                if(_10){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 11:
	                if(_11){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 12:
	                if(_12){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 13:
	                if(_13){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 14:
	                if(_14){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 15:
	                if(_15){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 16:
	                if(_16){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 17:
	                if(_17){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 18:
	                if(_18){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 19:
	                if(_19){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 20:
	                if(_20){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 21:
	                if(_21){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 22:
	                if(_22){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 23:
	                if(_23){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 24:
	                if(_24){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 25:
	                if(_25){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 26:
	                if(_26){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 27:
	                if(_27){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 28:
	                if(_28){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 29:
	                if(_29){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 30:
	                if(_30){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 31:
	                if(_31){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 32:
	                if(_32){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 33:
	                if(_33){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 34:
	                if(_34){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 35:
	                if(_35){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 36:
	                if(_36){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 37:
	                if(_37){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 38:
	                if(_38){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 39:
	                if(_39){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 40:
	                if(_40){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 41:
	                if(_41){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 42:
	                if(_42){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 43:
	                if(_43){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 44:
	                if(_44){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 45:
	                if(_45){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 46:
	                if(_46){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 47:
	                if(_47){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 48:
	                if(_48){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 49:
	                if(_49){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 50:
	                if(_50){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 51:
	                if(_51){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 52:
	                if(_52){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 53:
	                if(_53){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 54:
	                if(_54){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 55:
	                if(_55){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 56:
	                if(_56){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 57:
	                if(_57){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 58:
	                if(_58){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 59:
	                if(_59){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 60:
	                if(_60){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 61:
	                if(_61){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 62:
	                if(_62){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 63:
	                if(_63){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 64:
	                if(_64){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 65:
	                if(_65){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 66:
	                if(_66){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 67:
	                if(_67){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 68:
	                if(_68){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 69:
	                if(_69){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 70:
	                if(_70){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 71:
	                if(_71){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 72:
	                if(_72){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 73:
	                if(_73){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 74:
	                if(_74){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 75:
	                if(_75){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 76:
	                if(_76){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 77:
	                if(_77){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
	
	        case 78:
	                if(_78){
	                        printf("--\t--REPETIDO\n");
	                }else{
	                        printf("\tDISPONIBLE\n");
	                }
	                break;
						                
		        default:
		        	
		        	printf("\n\n ERROR \n\n");
		        	break;
		        	}*/
				
	/*	if(getch()=='a'){
			
	        if(!_1){
	                printf("1, ");
	        }
	
	        if(!_2){
	                printf("2, ");
	        }
	
	        if(!_3){
	                printf("3, ");
	        }
	
	        if(!_4){
	                printf("4, ");
	        }
	
	        if(!_5){
	                printf("5, ");
	        }
	
	        if(!_6){
	                printf("6, ");
	        }
	
	        if(!_7){
	                printf("7, ");
	        }
	
	        if(!_8){
	                printf("8, ");
	        }
	
	        if(!_9){
	                printf("9, ");
	        }
	
	        if(!_10){
	                printf("10, ");
	        }
	
	        if(!_11){
	                printf("11, ");
	        }
	
	        if(!_12){
	                printf("12, ");
	        }
	
	        if(!_13){
	                printf("13, ");
	        }
	
	        if(!_14){
	                printf("14, ");
	        }
	
	        if(!_15){
	                printf("15, ");
	        }
	
	        if(!_16){
	                printf("16, ");
	        }
	
	        if(!_17){
	                printf("17, ");
	        }
	
	        if(!_18){
	                printf("18, ");
	        }
	
	        if(!_19){
	                printf("19, ");
	        }
	
	        if(!_20){
	                printf("20, ");
	        }
	
	        if(!_21){
	                printf("21, ");
	        }
	
	        if(!_22){
	                printf("22, ");
	        }
	
	        if(!_23){
	                printf("23, ");
	        }
	
	        if(!_24){
	                printf("24, ");
	        }
	
	        if(!_25){
	                printf("25, ");
	        }
	
	        if(!_26){
	                printf("26, ");
	        }
	
	        if(!_27){
	                printf("27, ");
	        }
	
	        if(!_28){
	                printf("28, ");
	        }
	
	        if(!_29){
	                printf("29, ");
	        }
	
	        if(!_30){
	                printf("30, ");
	        }
	
	        if(!_31){
	                printf("31, ");
	        }
	
	        if(!_32){
	                printf("32, ");
	        }
	
	        if(!_33){
	                printf("33, ");
	        }
	
	        if(!_34){
	                printf("34, ");
	        }
	
	        if(!_35){
	                printf("35, ");
	        }
	
	        if(!_36){
	                printf("36, ");
	        }
	
	        if(!_37){
	                printf("37, ");
	        }
	
	        if(!_38){
	                printf("38, ");
	        }
	
	        if(!_39){
	                printf("39, ");
	        }
	
	        if(!_40){
	                printf("40, ");
	        }
	
	        if(!_41){
	                printf("41, ");
	        }
	
	        if(!_42){
	                printf("42, ");
	        }
	
	        if(!_43){
	                printf("43, ");
	        }
	
	        if(!_44){
	                printf("44, ");
	        }
	
	        if(!_45){
	                printf("45, ");
	        }
	
	        if(!_46){
	                printf("46, ");
	        }
	
	        if(!_47){
	                printf("47, ");
	        }
	
	        if(!_48){
	                printf("48, ");
	        }
	
	        if(!_49){
	                printf("49, ");
	        }
	
	        if(!_50){
	                printf("50, ");
	        }
	
	        if(!_51){
	                printf("51, ");
	        }
	
	        if(!_52){
	                printf("52, ");
	        }
	
	        if(!_53){
	                printf("53, ");
	        }
	
	        if(!_54){
	                printf("54, ");
	        }
	
	        if(!_55){
	                printf("55, ");
	        }
	
	        if(!_56){
	                printf("56, ");
	        }
	
	        if(!_57){
	                printf("57, ");
	        }
	
	        if(!_58){
	                printf("58, ");
	        }
	
	        if(!_59){
	                printf("59, ");
	        }
	
	        if(!_60){
	                printf("60, ");
	        }
	
	        if(!_61){
	                printf("61, ");
	        }
	
	        if(!_62){
	                printf("62, ");
	        }
	
	        if(!_63){
	                printf("63, ");
	        }
	
	        if(!_64){
	                printf("64, ");
	        }
	
	        if(!_65){
	                printf("65, ");
	        }
	
	        if(!_66){
	                printf("66, ");
	        }
	
	        if(!_67){
	                printf("67, ");
	        }
	
	        if(!_68){
	                printf("68, ");
	        }
	
	        if(!_69){
	                printf("69, ");
	        }
	
	        if(!_70){
	                printf("70, ");
	        }
	
	        if(!_71){
	                printf("71, ");
	        }
	
	        if(!_72){
	                printf("72, ");
	        }
	
	        if(!_73){
	                printf("73, ");
	        }
	
	        if(!_74){
	                printf("74, ");
	        }
	
	        if(!_75){
	                printf("75, ");
	        }
	
	        if(!_76){
	                printf("76, ");
	        }
	
	        if(!_77){
	                printf("77, ");
	        }
	
	        if(!_78){
	                printf("78, ");
	        }
	
		printf("\n");
	}*/
	