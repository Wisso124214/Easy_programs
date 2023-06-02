#include <stdio.h>
#include <math.h>

float W, T, v;

int main(){
	
	do{
		
	printf("T: ");
	scanf("%f",&T);
	printf("v: ");
	scanf("%f",&v);

	W=13.12+0.6215*T-11.37*pow(v,0.16)+0.3965*T*pow(v,0.16);
	
	printf("W= %.4f\n\n",W);
	
}while(T!=0);

	return 0;
}