#include <stdio.h>
#include <conio.h>

int x,y,z;

int main(){
	
	do{
		
	printf("\n\nX: ");
	scanf("%d",&x);
	
	printf("Y: ");
	scanf("%d",&y);
	
	z=x%y;
	printf("X %%Y: %d",z);
	
	}while(getchar()!='s');
	return 0;	
}