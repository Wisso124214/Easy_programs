#include <stdio.h>

int i,j,A[4][4];

main(){
	
	for(i=3;i>=0;i--){
		for(j=3;j>=0;j--){
			printf("\nA[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	
	printf("Ingrese fila: ");
	scanf("%d",&i);
	printf("Ingrese columna: ");
	scanf("%d",&j);
	
	printf("Vecinos: \n\n");
	printf("%d\n",A[i-1][j]);
	printf("%d\n",A[i+1][j]);
	printf("%d\n",A[i][j-1]);
	printf("%d\n",A[i][j+1]);

}