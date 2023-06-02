//Luis Bustos. CI: 30.642.944. Laboratorio de Programación


#include <stdio.h>

int cargo,dept,mult,flag;
float salario, bono;
char cdep;


main (){
	printf ("BIENVENIDO A PROGRAM.INC\n\n\n");
	printf ("Usted desea calcular el bono dependiendo del departamento, cargo y salario\n\n");
	printf ("Para ingresar el departamento tenemos que debe ingresar: \n \ta: Para Departamento Predeterminado\n \tb: Para Departamento de Recursos Humanos\n \tc: Para Departamento de Administracion\n\n");
	printf ("Ingrese el departamento: ");
	scanf ("%c", & cdep);

	flag=1;
	
	switch(cdep){
		case 'a':
			printf ("Departamento Predeterminado. Entendido\n");
			mult=1;
			break;
			
		case 'b':
			printf ("Departamento de Recursos Humanos. Entendido\n");
			mult=2;
			break;
			
		case 'c':
			printf ("Departamento de Administración. Entendido\n");
			mult=3;
			break;
			
		default:
			printf ("Disculpe, el departamento ingresado no es valido\n");
			flag=0;
	}
	
	printf ("\n");
	
	if (flag){
		
		printf ("Para el cargo tenemos que: \n \t0: Pasante\n \t1: Empleado\n \t2: Supervisor\n \t3: Gerente\n \t4: Director\n \t5: CEO\n\n");
		printf ("Ingrese el cargo: ");
		scanf ("%d",& cargo);
	
		printf ("Ingrese el salario: ");
		scanf ("%f",& salario);
		printf ("\n");
		
		switch(cargo){
			case 0:
				bono = salario*0.2*mult;
				printf ("  OK Pasante, estamos calculando su bono...\n");
				break;	
					
			case 1:
				bono=salario*0.25*mult;
				printf ("  OK Empleado, estamos calculando su bono...\n");
				break;
				
			case 2:
				bono=salario*0.3*mult;
				printf ("  OK Supervisor, estamos calculando su bono...\n");
				break;
				
			case 3:
				bono=salario*0.35*mult;
				printf ("  OK Gerente, estamos calculando su bono...\n");
				break;
				
			case 4:
				bono=salario*0.4*mult;
				printf ("  OK Director, estamos calculando su bono...\n");
				break;
				
			case 5:
				bono=salario*0.7*mult;
				printf ("  OK CEO, estamos calculando su bono...\n");
				break;
				
			default:
				printf ("  Disculpe, el cargo ingresado NO existe\n");
			}
	
	if (0>=cargo || cargo<=5){
	
		printf ("  Su bono es de: %.2f \n", bono);
		}
	
	}

	return 0;
}
