//Luis Bustos. CI: 30.642.944. Laboratorio de Programación I

#include <stdio.h>

float a1,a2,a3;

int main(){
	printf("Inserte el angulo 1 del triangulo: ");
	scanf ("%f",&a1);
	printf("Inserte el angulo 2 del triangulo: ");
	scanf ("%f",&a2);
	printf("Inserte el angulo 3 del triangulo: ");
	scanf ("%f",&a3);
	
	if (a1<90 && a2<90 && a3<90){
		printf ("El triangulo es acutangulo");
	}else{
		if ((a1==90)&&(a2!=90)&&(a3!=90)||(a1==90)&&(a3!=90)&&(a2!=90)||(a3==90)&&(a2!=90)&&(a1!=90)){
			printf ("El triangulo es rectangulo");
		}
		if ((a1>90)||(a2>90)||(a3>90)){
			printf ("El triangulo es obtusangulo");
		}
	}
	return 0;
}
