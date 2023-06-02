#include <stdio.h>
#include <math.h>


int const pi=3.1415926;

int main(){
	
	for(int i=0;i<20;i++){
		
		int k;
		
		for(int j=pow(pi,20-i);j>0;j=pow(pi,20-k)){
			
			printf(" ");
			k++;
		}
		
		printf("x\n");
	}
	
	return 0;
}