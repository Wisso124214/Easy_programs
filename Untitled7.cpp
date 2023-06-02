#include <stdio.h>

int n;
char i[20];
char Array[20][20]={"Luis","Vero","Ale","Juan","Jose","Claudio","Astro","Estrella","Nay","Ivan"};;

int main(){
	
	//i=Array[3];
	
	for(n=0;n<20;n++){
		printf("%c",i[n]);
	}
	
	printf("\n\n%s",Array[5]);
	
	return 0;
}

