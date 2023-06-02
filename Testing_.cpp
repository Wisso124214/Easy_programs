#include <stdio.h>

int i,j,cambiar;
char A[7];
int menor=1000000;


int main(){
	
	printf("Ingrese: ");
	scanf("%s",&A);

	for(i=0;i<7;i++){
		A[i]=A[i]-48;
	}

		for(i+=j;i<7;i++){
			
			if(A[i]<=menor){
				menor=A[i];
			}
		}
			for(i=0;i<7;i++){
		printf("A[%d] = %d \n",i,A[i]);
	}
		printf("\n\n%d",menor);
		
		A[i-1]=10;
	
		if(A[i-1]==10){
			printf("\n\n SI ES!!!");
		}
	
}