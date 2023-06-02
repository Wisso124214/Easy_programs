#include <stdio.h>

int i,j,cambiar;
int A[7]={39,5,7,2,16,25,17};
int menor=1000000;


int main(){
	
	for(i=0;i<7;i++){
		printf("A[%d] = %d \n",i,A[i]);
	}
	
	for(j=0;j<7;j++){
		for(i=0;i<7;i++){
			
			if(A[i]<menor){
				menor=A[i];
			}
		}
		A[j]=cambiar;
		A[j]=menor;
		cambiar=A[i];
	}
	
	printf("\n\n");
	
	for(i=0;i<7;i++){
		printf("A[%d] = %d \n",i,A[i]);
	}
	
	return 0;
}
