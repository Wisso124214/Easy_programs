//Luis Bustos. CI: 30.642.944. Laboratorio de Programacion. Seccion C
//Proyecto 4. FORMY

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

int i, j, num, cont, largo, ran, flag;
char letra, code, order, custom;
void jerigonza(), sorting();
char cadena[30];

int main (){
	
	system("color 0f");
	printf("Bienvenido al programa FORMY! Antes de comenzar, desea saber que hace este programa? (1:SI / 0:NO): ");
	
	//FUNCIONAMIENTO
	
	if(getch()=='1'){
		system("color 0b");
		printf("\n\n Bienvenido estimado usuario, en este programa podra llenar un formulario basico como se le antoje y se le mostrara los datos ingresados de forma misteriosa segun su escogencia.\n\n ");
		system("pause");
		printf("\nEl programa antes de mostrarle los campos a llenar, pregunta si desea CODIFICAR o DECODIFICAR las cadenas de caracteres segun el alfabeto ingles (sin \245).");
		getch();
		printf("\n\n Se refiere con codificar a \"sumarle\" a cada letra, 5 letras, es decir, si se ingresa A se devuelve F, debido a que A es la primera letra del alfabeto y F la sexta. Analogamente sucede lo mismo con la decodificacion, en donde a cada letra  se le \"restan\" 5 letras.");
		getch();
		printf("\n\n Cabe destacar que si el alfabeto se acaba, comienza de nuevo, por ejemplo, si se esta codificando y si se ingresa Z se devuelve E (y viceversa si se esta decodificando).");
		getch();
		printf("\n\n De esta manera, si una cadena que previamente ha codificado (sumandole 5 letras a cada letra) la ingresa de nuevo \t manualmente decodificando (habiendo escogido al inicio la opcion DECODIFICAR), esta le mostrara el mismo mensaje que\t codifico primero, puesto que simplemente se le resta lo que ya se le sumo (en letras). Pero si se escoje la opcion\t decodificar y se ingresa una cadena no codificada, esta se codificara a la inversa (restandole 5 letras a cada letra),  pues simplemente eso hace el programa, sumar o restar 5 letras a cada letra.");
		getch();
		printf("\n\n\n Ademas de escoger entre codificar o decodificar, tambien le permite decidir si las cadenas de digitos las desea ver en orden creciente (menor a mayor), orden decreciente (mayor a menor) o aleatorio (de manera desordenada). En esta ultima  opcion el programa toma una posicion al azar y la intercambia con la primera posicion, luego toma otra posicion al azar y la intercambia con la segunda posicion y asi sucesivamente...");
		getch();
		printf("\n\n Si a mitad del programa desea terminarlo y no quiere seguir llenando el formulario, puede simplemente ingresar dos pun-tos (..) y finalizara el programa. Espero que le haya servido de ayuda y haya entendido el funcionamiento practico del  programa (es decir, lo que hace). Que lo disfrute.");
		getch();
		system("color 0f");
	}
	
	system("cls");
	
	//CONFIGURACION RESULTADOS
	
	do{
		
		printf("\nDesea codificar (0) o decodificar (1) las cadenas de caracteres?: ");
		scanf("%s",&code);
		
		if(code>49 || code<48){
			system("color 04");
			printf("El numero ingresado es incorrecto.");
			getch();
			system("color 0f");
			system("cls");
		}
	}while(!(code=='0' || code=='1'));
	
	printf("\n");
	
	do{
		
		printf("Desea las cadenas numericas ordenadas de menor a mayor (0), de mayor a menor (1) o desordenadas (2)?: ");
		scanf("%s",&order);
		
		if(order>50 || order<48){
			system("color 04");
			printf("El numero ingresado es incorrecto.");
			getch();
			system("color 0f");
			system("cls");
			printf("Desea codificar (0) o decodificar (1) las cadenas de caracteres?: %c\n\n",code);
		}
		printf("\n");
		
	}while(!(order=='0' || order=='1' || order=='2'));
		
	do{
		
		for(i=0;i<30;i++){
			cadena[i]=0;
		}
		
		//LA VARIABLE cont ES UN CONTADOR PARA IR IMPRIMIENDO LOS DATOS PARA LLENAR
		
		switch(cont){
			case 0:{
				printf("Nombre: ");
				break;
			}
			case 1:{
				printf("Apellido: ");
				break;
			}
			case 2:{
				printf("CI: ");
				break;
			}
			case 3:{
				printf("Dias de vida: ");
				break;
			}
			case 4:{
				printf("Marca de carro: ");
				break;
			}
			case 5:{
				
				printf("Desea ingresar otro campo personalizado? (1:SI / 0:NO):");
				scanf("%i",&i);
				
				if(i==1){
					printf(">Ingrese el nombre de su informacion: ");
					scanf("%s",&cadena);
					
					printf(">>Ingrese %s: ",cadena);
					scanf("%s",&cadena);
					
					do{
						
						printf(">>>Ingrese (0) si el dato es una cadena de texto o (1) si es una cadena numerica: ");
						scanf("%s",&custom);
						
						if(custom=='0'){
							
							jerigonza();
						}else if(custom=='1'){
							
							sorting();
						}else{
							
							system("color 04");
							printf(">>>>Numero incorrecto. Intente de nuevo");
							getch();
							system("color 0f");
							printf("\n\n");
						}
						
		//???NI IDEA DE POR QUE ACA ACTUA COMO SI VOLVIERA A LLAMAR A LA FUNCION, Y ESPERA ALGO PARA CONTINUAR. NOTE QUE UNICAMENTE TENGO PRINTF PARA INDICARLE AL USUARIO QUE HACER
						
						printf("Introduzca cualquier valor para continuar...");
								
					}while(custom!='0' && custom!='1');
					
					cont--;
				}
				break;
			}
		}
		
		//SE USAN SENTENCIAS IF PARA AHORRAR LINEAS
			
			if(cont==0 || cont==1 || cont==4){
				scanf("%s",&cadena);
				jerigonza();
			}
			
			if(cont==2 || cont==3){
				scanf("%s",&cadena);
				sorting();
			}
			
		cont++;
		
		//PARA SALIR SI SE INGRESA ".."
		
		if(cadena[0]=='.' && cadena[1]=='.'){
			cont=6;
		}
		
	}while(cont<=5);
	
	//FIN DEL PROGRAMA
	
	system("color 0b");
	printf("\n\nMUCHAS GRACIAS POR USAR EL PROGRAMA :)");
	return 0;
}

void jerigonza(){
	
	switch(code){
	
	case '0':
		
		printf(">");
		
		for(i=0;i<30;i++){
			letra=cadena[i];							//SE USA LA VARIABLE letra PARA OPERAR CARACTER A CARACTER LA CADENA
			
			if(letra<=122 && letra>=97){				//SE VALIDA SI ESTA EN EL RANGO DE LETRAS MINUSCULAS SEGUN EL CODIGO ASCII
				
				letra+=5;								//SE LE "SUMAN" 5 LETRAS A LA LETRA
	
				if(letra<=127 && letra>=123)			//SE VALIDA SI ESTA FUERA DE RANGO Y SE MODIFICA
					letra-=26;
	
			}else if(letra<=90 && letra>=65){			//SE VALIDA SI ESTA EN EL RANGO DE LETRAS MAYUSCULAS SEGUN EL CODIGO ASCII
	
				letra+=5;								//SE LE "SUMAN" 5 LETRAS A LA LETRA
	
				if(letra<=95 && letra>=91)				//SE VALIDA SI ESTA FUERA DE RANGO Y SE MODIFICA
					letra-=26;
			}
			
			printf("%c",letra);							//SE IMPRIME LA CADENA RESULTADO CARACTER A CARACTER
		}
		break;


	case '1':
		
		printf(">");

		for(i=0;i<30;i++){
			letra=cadena[i];							//OPERAR LETRA A LETRA
			
			if(letra<=122 && letra>=97){				//VALIDAR MINUSCULAS
				
				letra-=5;								//SE LE "RESTAN" 5 LETRAS A LA LETRA
	
				if(letra<=96 && letra>=92)				//VALIDAR FUERA DE RANGO
					letra+=26;
	
			}else if(letra<=90 && letra>=65){			//VALIDAR MAYUSCULAS
	
				letra-=5;								//SE LE "RESTAN" 5 LETRAS A LA LETRA
	
				if(letra<=64 && letra>=60)				//VALIDAR FUERA DE RANGO
					letra+=26;
			}
			printf("%c",letra);							//IMPRIMIR
		}
		break;
	}
	
	printf("\n\n");
}

void sorting(){
	
	i=0;
	num=0;
	largo=strlen(cadena);								//SE CUENTA LA LONGITUD DE LA CADENA PARA OPTIMIZAR TIEMPO
														//PD: SE QUE USTED NO ENSEÑO ESTA FUNCION PERO LA USO POR SIMPLICIDAD. DISCULPE
	for(i=0;i<largo;i++){
		if(cadena[i]<48 || cadena[i]>57){				//VALIDO SI LOS CARACTERES INGRESADOS SON NUMEROS.
			flag=1;										//PORQUE SI NO ERAN NUMEROS IMPRIMIA EL CODIGO ASCII QUE LE CORRESPONDIA Y TERMINABA EL PROGRAMA
		}
	}
	
	if(flag==1){
		
		printf("\nERROR");								//IMPRIMO ERROR DE EXISTIR AL MENOS UN CARACTER QUE NO ES NUMERO EN LA CADENA INGRESADA
	}else{
		
		printf(">");
		for(i=0;i<largo;i++){
			cadena[i]=cadena[i]-48;						//TRANSFORMO POR MEDIO DEL CODIGO ASCII DE CARACRTER A NUMERO ENTERO
		}
	
		switch(order){
			
			case '0':									//SE ORDENAN LOS NUMEROS DE MENOR A MAYOR POR BUBBLE SORTING (INTENTE QUICK SORTING PERO NO FUE TAN FACIL Y POR TIEMPO LO HICE ASI)
				for(j=(largo-1);j>=0;j--){
					
					num=0;
					for(i=j;i>=0;i--){					//SE BUSCA Y ALMACENA EL NUMERO MAYOR Y SU POSICION
						
						if(cadena[i]>=num){
							num=cadena[i];
							ran=i;
						}
					}
				
				cadena[ran]=cadena[j];					//SE INTERCAMBIA EL NUMERO MAYOR CON EL NUMERO DE LA ULTIMA POSICION
				cadena[j]=num;
				}
				break;
				
			case '1':									//SE ORDENAN LOS NUMEROS DE MAYOR A MENOR POR BUBBLE SORTING
				for(j=0;j<=(largo-1);j++){
					
					num=0;
					for(i=j;i<=(largo-1);i++){
						
						if(cadena[i]>=num){					//SE BUSCA Y ALMACENA EL NUMERO MAYOR Y SU POSICION
							num=cadena[i];
							ran=i;
						}
					}
				
				cadena[ran]=cadena[j];					//SE INTERCAMBIA EL NUMERO MAYOR CON EL NUMERO DE LA PRIMERA POSICION
				cadena[j]=num;
				}
				break;				
				
				
			case '2':									//SE ORDENAN LOS NUMEROS ALEATORIAMENTE. INTERCAMBIANDO DE DOS EN DOS, POR POSICION ALEATORIA
			
				for(i=0;i<=largo;i++){
					
					ran=rand()%largo+1;					//SE ESCOGE UNA POSICION ALEATORIA
					num=cadena[ran];					//SE GUARDA EN UNA VARIABLE AUXILIAR EL VALOR DE ESA POSICION DE LA CADENA
					cadena[ran]=cadena[i];				//SE REEMPLAZA POR EL VALOR DE LA POSICION ACTUAL i
					cadena[i]=num;						//SE LE DEVUELVE EL VALOR DE LA VARIABLE AUXILIAR A LA POSICION ACTUAL i
				}
				break;
		}
				
		for(i=0;i<largo;i++){							//SE IMPRIME LA CADENA
			
			printf("%i",cadena[i]);
		}
	}
		
	printf("\n\n");
}														//FIN DEL CODIGO. 
														//PD: CON FUNCIONES LAS LINEAS SE REDUCEN CONSDERABLEMENTE JAJAJAJAJAJAJAJAJAJAJAJJAJAJ...