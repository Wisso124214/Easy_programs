#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <math.h>

char nombre[60], apellido[60],aux,x;
float muertos, horas,e=2.718281828;
int a,n,c;

int main(){
	
	srand(time(NULL));
	
	printf("Nombre: ");
	scanf("%s",&nombre);	
	printf("Apellido: ");
	scanf("%s",apellido);
	printf("Horas luego del accidente de las torres gemelas (no mayor a 24): ");
	scanf("%f",&horas);
	
	for(a=0;a<60;a++){
		n=rand()%60;
		
		aux=nombre[n];
		nombre[n]=nombre[a];
		
		aux=apellido[n];
		apellido[n]=nombre[a];
		
	}
	if(horas<=24 && horas>=0)
		muertos=pow(e,horas*0.6);
	
	printf("Nombre: ");
	for(a=0;a<60;a++){
		if(nombre[a]!=x)
			printf("%c",nombre[a]);
	}
	printf("\n");
	
	printf("Apellido: ");
	for(a=0;a<60;a++){
		if(apellido[a]!=x)
			printf("%c",apellido[a]);
	}
	
	printf("\nMuertos: %f\n",muertos);
}