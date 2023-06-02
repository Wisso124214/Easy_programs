#include <stdio.h>

char saludar();
char saludo='Hola';

int main(){
	
	for(int i=0;i<10;i++){
		
		printf("%s",saludar());
	}
	
	return 0;
}

char saludar(){
		
	return 'Hola';
}