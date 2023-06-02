#include <stdio.h>
#include <math.h>

float p1, pc, p0;

int main(){
	
	printf("Ingrese p1: ");
	scanf("%f",&p1);
	
//	pc=(int)p1/100;
//	
//	printf("pc: %f\n",pc);
//	
//	pc=pc/100-(int)pc/100;
//	printf("pc: %f\n",pc);
//	
//	pc=pc*100;
//	
//	printf("pc: %f\n",pc);
	
//	pc=(int)p1/100;
//	pc=pc/100-(int)pc/100;
//	pc=pc*100;
	
	pc=p1/100.0-(int)p1/100;
	pc=pc*100.0;
	
	printf("pc: %f",pc);
	
	

	
	
	return 0;
}

