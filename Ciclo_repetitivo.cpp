

	//Programa para calcular el factorial de un numero. Con ciclo repetitivo
	
	#include <stdio.h>
	
	int facto, n, i;
	
	int main(){
		
		printf("Ingrese el numero al cual le desea calcular el factorial: ");
		scanf("%d",&n);
		
		if(n>1){
		
			facto=n;
			
		 	for(i=n; i>0; i--){
				
				if(n>=2)			
					facto=facto*(n-1);
					
				if(n>1)
					printf("%d x ",n);
				else
					printf("1\n\nY el resultado es: %d",facto);
				
				n--;
				}
		}else
			printf("Error, el dato es negativo");
			
		return 0;
	}
	

