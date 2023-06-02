#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

int i;
char c, e;

int main(){
	
	time_t start, finish;
	
	do{
		printf("%d\n",i);
		i++;
		
		start=time(NULL);
		
		do{
			finish=time(NULL);
		}while(difftime(finish,start)<1);
		
//		c=getch();
	}while(c!='s');
}