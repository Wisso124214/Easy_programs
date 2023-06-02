

	//Programa para calcular el factorial de un numero. Con metodo recursivo.
	
	#include <stdio.h>
	
	int n;
	int facto(int x);
	
	int main(){
		
		printf("Ingrese el numero al cual le desea calcular el factorial: ");
		scanf("%d",&n);
		printf("\n\nEl factorial de %d es: %d",n,facto(n));
		
		return 0;
	}
	
	int facto(int x){
		
		if(x<0){
			printf("Error, el dato es negativo");
			return -1;
		}
		else if(x==0 || x==1){
			
			printf("1\n\nY el resultado es:");
			return 1;
		}else{
			
			printf("%d x ",x,x-1);
	
			return x * facto(x-1);
		}
	}
	
