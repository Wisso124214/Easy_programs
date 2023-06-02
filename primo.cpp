#include <stdio.h>

int n,i,j,flag1,flag2;

int main (){
	
	do{
	
	printf ("Introduzca el numero para saber si es primo o no (0 para salir): ");
	scanf ("%d",&n);
	printf ("\n");
	
	flag1=1000000;
	
	if(n==0){
		printf ("\n\nGracias por usar el programa\n");
		
	}else{
		for(i=(n-1);i>1;i--){
			j = n%i;
			
			if (j==0){
				flag2=1;
			}else {
				flag2=2;
			}
			
			if(flag2<flag1){
				flag1=flag2;
			}
		}
			
		if (flag1==1){
			printf ("No es primo\n");
		}
		if (flag1==2){
			printf ("Es primo\n");
		}
		
		printf ("\n");	
	
		}
		
	}while (n!=0);
	
	return 0;
}
