//Luis Bustos. CI: 30.642.944. Lógica Computacional.
//Convertidor de base decimal a cualquier base de un sistema de numeración.

#include <stdio.h>
#include <windows.h>

int baseX, base10, cociente, modulo, i, opc, x;
double y=1e9;
char NumeroBaseX[100];

int main(){
	
	do{
		do{
		
			system("cls");
			printf("Ingrese el numero en base 10 a convertir: ");
			scanf("%d",&base10);
			
			if(base10>y){
				system("color 04");
				printf("ERROR. NUMERO DEMASIADO GRANDE. INTENTE DE NUEVO\n\n");
				system("pause");
				system("color 07");
			}
		}while(base10<y);
		
		do{
			
			printf("Ingrese la base a convertir el numero de base 10 (debe ser entre 0 y 36): ");
			scanf("%d",&baseX);	
		
		}while(baseX<0 || baseX>36);
		
		i=0;
		
		do{
			
			cociente=base10/baseX;
			modulo=base10%baseX;
			base10=cociente;
			
			NumeroBaseX[i]=modulo;
			i++;
			
		}while(base10>=baseX);
		
		NumeroBaseX[i]=cociente;
		x=i;
		
		printf("El numero en base %d es:  ",baseX);
		
		for(i=x;i>=0;i--){
			
			if(NumeroBaseX[i]<=9 && NumeroBaseX[i]>=0){
				printf("%d",NumeroBaseX[i]);
			}else{
				printf("%c",NumeroBaseX[i]+55);
			}
		}
		
		printf("\n\nDesea convertir otro numero (SI:1/NO:0): ");
		scanf("%d",&opc);
		
	}while(opc!=0);
	
	system("color 0a");
	printf("\n\n\nGracias por usar el programa!");

	return 0;
}