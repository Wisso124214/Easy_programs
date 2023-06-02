#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int i;

main(){
	srand(time(NULL));
	
	printf("PRESS C TO CONTINUE: ");
	printf("\n\n");
		
	do{
		i=rand()%18+1;
		printf("%d\n",i);
	}while(getch()=='c' || getch()=='C');
		
	return 0;
}