//Luis Bustos. CI: 30.642.944. Laboratorio de Programación

#include <stdio.h>
#include <conio.h>

int cargo;
float salario, bono;


main (){
	printf ("Ingrese el salario: ");
	scanf ("%f",& salario);
	printf ("Ingrese el cargo: ");
	scanf ("%d",& cargo);
	printf ("\n");
	
	if (cargo==0){
		bono = salario*0.2;
		printf ("OK pasante, estamos calculando su bono...\n");
	}else if(cargo==1){
		bono=salario*0.25;
		printf ("OK empleado, estamos calculando su bono...\n");
	}	else if(cargo==2){
		bono=salario*0.3;
		printf ("OK supervisor, estamos calculando su bono...\n");
	}else if(cargo==3){
		bono=salario*0.35;
		printf ("OK gerente, estamos calculando su bono...\n");
	}else if(cargo==4){
		bono=salario*0.4;
		printf ("OK director, estamos calculando su bono...\n");
	}else if(cargo==5){
		bono=salario*0.7;
		printf ("OK CEO, estamos calculando su bono...\n");
	}else{
		printf ("Disculpe, el cargo ingresado no existe\n");
	}

if (0>=cargo || cargo<=5){
	
	printf ("Su bono es de: %.2f \n", bono);
}

return 0;	
}

