//Luis Bustos. 08.15.2022
//Primos hasta n

#include <stdio.h>

int cant,k,flag1,i,j,flag2,n,primos;

int main(){

	printf("Introduzca el numero maximo al cual quiere conocer los primos: ");
	scanf("%d",&cant);
	printf("\n");
	
	for(k=0;k<cant;k++){
	
		flag1=5;
	
		for(i=(n-1);i>1;i--){
			j = n%i;
			
			if (j==0){
				flag2=0;
			}else {
				flag2=1;
			}
			
			if(flag2<flag1){
				flag1=flag2;
			}
		}

		if (flag1==1){
			printf ("%d, ",n);
			primos++;
		}
		n++;
	}
	
	printf("\n\nDel 3 al %d hay %d numeros primos",cant,primos);
	
	return 0;
}