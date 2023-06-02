#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>

typedef struct Movimiento_Bancario{

	int dia;
	int mes;
	int anio;		//Fecha DD / MM / AAAA
	int hora;
	int min;			//Hora HH:MM:SS
	int seg; 
	
	float modif_saldo;
	int nro_referencia;		//6 digitos	
	char concepto [20];
	char CI_beneficiario[8];
	char nombre_beneficiario[30];
	char nroCuenta_beneficiario[20];	//Si es transferencia
	char banco_beneficiario[20];
	char tlf_beneficiario[11]; 		//Si es pago movil
	
}Movimiento;

typedef struct nodo{

    Movimiento *dato;
    struct nodo *siguiente;
}Nodo;

typedef struct pila{
	nodo *tope;
	int total;
}Pila;

Pila*CrearPila();
Nodo*CrearNodo(Movimiento *movimiento);
Movimiento *CrearMovimiento(float modif_saldo, int nro_referencia, char concepto [20], char CI_beneficiario[8], char nombre_beneficiario[30], char nroCuenta_beneficiario[20], char banco_beneficiario[20], char tlf_beneficiario[11]);
int estaVacia(Pila *pila);
void insertar (Pila *pila,Nodo *aux);
void imprimir(Pila *pila);
int fecha(int parametro);
int hora,min,seg,dia,mes,anio;
int main (){

	srand(time(NULL));

	time_t now;
	int n, s, flag, nro_referencia, bool_transccn, a;
	float saldoCuenta = 1000, modif_saldo;
	char user[10], password[20], password1[20], user1[20], concepto[20], CI_beneficiario[20], nombre_beneficiario[20], nroCuenta_beneficiario[20], banco_beneficiario[20], tlf_beneficiario[20];
	
	Pila *p = CrearPila();
	
	printf("Registrese o ingrese la cuenta predeterminada. Usuario: admin. Clave: 1234\n\n");
	system("pause>nul");
	printf("Ingrese su nombre de usuario: ");
    scanf("%s", &user);
    
    if(strcmp(user,"admin")){
		printf("\nIngrese su contrasena: ");
		scanf("%s", &password);
		system("cls");
		
		printf("Registro completo, bienvenido %s\n",user);
		
		flag=0;
	}else{
		
		printf("\nIngrese su contrasena: ");
		scanf("%s", &password);
		
		if(strcmp(password,"1234")){
			printf("Inicio de sesion exitoso");
			system("pause>nul");
			flag=1;
		}
	}

	do{
	   	if(flag==0){
		   	printf("Iniciando sesión...\n\n");
		   	
			if(flag=3)
		    	printf("Recuerde que el usuario y clave predeterminados son \"admin\" y \"1234\" \n\n");
		    	
		    printf("\nIngrese su nombre de usuario: ");
		    scanf("%s", &user1);
		    printf("\nIngrese su contrasena: ");
		    scanf("%s", &password1);
		    
		    if(strcmp(user,user1) && strcmp(password,password1)){
				system ("cls");
		    	printf ("Inicio de sesión incorrecto... Intente de nuevo por favor");
		    	system("pause>nul");
		    	flag=3;		    	

			}else{
				system ("cls");
		    	printf ("Inicio de sesión correcto");
		    	system("pause>nul");
		    	flag=0;				
			}   	
		}	
    }while(flag==3);

	do{
		printf("El saldo de su cuenta es $%f \n\nMenu: \n\n1.Imprimir movimientos \n2.Realizar una transaccion \n3.Salir\n\n>>", saldoCuenta);
		scanf ("%i",&n);
		switch(n){
		
			case 1:
				
				if(estaVacia){
					printf("Lo sentimos, la pila se encuentra vacia, no hay movimientos que imprimir...");
				}else{
					void imprimir(Pila *pila);
				}
				break;
			
			case 2:
								
				printf("Time is %02d:%02d:%02d am\n", hora, min, min);
				printf("Ingrese si desea realizar un pago movil (0) o una transferencia (1): ");
				scanf("%d",&bool_transccn);

				printf("Ingrese la cantidad de dinero a transferir: ");
				scanf("%f", &modif_saldo);
				
				nro_referencia=0;

				for(int i=0; i<6; i++){
					
					a=rand()%9;
					nro_referencia+=a*pow(10,i);
				}
				
				printf("Ingrese el concepto de la transacion: ");
				scanf("%s",&concepto);
				printf("Ingrese el documento (CI) del beneficiario: ");
				scanf("%s",&CI_beneficiario);
				printf("Ingrese el nombre del beneficiario: ");
				scanf("%s",&nombre_beneficiario);
				
				if(bool_transccn){
					printf("Ingrese el numero de cuenta del beneficiario: ");
					scanf("%s",&nroCuenta_beneficiario);
				}else{
					printf("Ingrese el numero de celular del beneficiario: ");
					scanf("%s",&tlf_beneficiario);
				}

				printf("Ingrese el banco del beneficiario: ");
				scanf("%s",&banco_beneficiario);
				
				insertar(p,CrearNodo(CrearMovimiento(modif_saldo,nro_referencia,concepto,CI_beneficiario,nombre_beneficiario,nroCuenta_beneficiario,banco_beneficiario,tlf_beneficiario)));
				break;
			
			default:
				printf ("Cerrando sesión...");
				system("pause>nul");
				s=0;
				break;
			}
		}while(s!=0);
	return 0;
}

Pila *CrearPila(){
	Pila*aux=(Pila*)malloc(sizeof(Pila));
	aux->tope=NULL;
	aux->total=0;
	return aux;
}

Nodo *CrearNodo(Movimiento *movimiento){
	Nodo*aux=(Nodo*)malloc(sizeof(Nodo));
	aux->dato=movimiento;
	aux->siguiente=NULL;
	return aux;
}

Movimiento *CrearMovimiento(float modif_saldo, int nro_referencia, char concepto [20], char CI_beneficiario[8], char nombre_beneficiario[30], char nroCuenta_beneficiario[20], char banco_beneficiario[20], char tlf_beneficiario[11]){
	
	Movimiento *aux=(Movimiento*)malloc(sizeof(Movimiento));

	for(int x=0; x<6; x++){
		switch (x)
		{
		case 0:
			aux->hora=fecha(x);
			break;
		case 1:
			aux->min=fecha(x);
			break;
		case 2:
			aux->seg=fecha(x);
			break;
		case 3:
			aux->dia=fecha(x);
			break;
		case 4:
			aux->mes=fecha(x);
			break;
		case 5:
			aux->anio=fecha(x);
			break;
		}
	}
	strcpy(aux->concepto,concepto );
	strcpy(aux->nombre_beneficiario,nombre_beneficiario);
	aux->nro_referencia=nro_referencia;
	aux->modif_saldo=modif_saldo;
	strcpy(aux->CI_beneficiario,CI_beneficiario);
	strcpy(aux->nombre_beneficiario,nombre_beneficiario);
	strcpy(aux->banco_beneficiario,banco_beneficiario);
	strcpy(aux->nroCuenta_beneficiario,nroCuenta_beneficiario);
	strcpy(aux->tlf_beneficiario,tlf_beneficiario);

return aux;
}


int estaVacia(Pila *pila){
	if (pila->total==0){
		return 1;
	}else{
		return 0;
	}
}

void insertar (Pila *pila,Nodo *aux){
	if(estaVacia(pila)){
		pila->tope=aux;
	}else{
		aux->siguiente=pila->tope;
		pila->tope=aux;
	}
	pila->total++;
}

void imprimir(Pila *pila){
	
	Nodo *aux=pila->tope;
	Movimiento*c;
	while(aux!=NULL){
			c=aux->dato;
			printf("Fecha:%d/%d/%d \nHora %d:%d:%d\nreferencia %d\nConcepto: %s\nCedula del Beneficiario: %d\n Nombre del beneficiario: %s\n Numero de cuenta: %d\n Banco: %s \n telefono: %d\n  ", c->dia,c->mes,c->anio,c->hora,c->min,c->seg,c->nro_referencia,c->concepto,c->CI_beneficiario,c->nombre_beneficiario,c->nroCuenta_beneficiario,c->banco_beneficiario,c->tlf_beneficiario );
	}
	aux=aux->siguiente;
}

int fecha(int parametro)
{
	time_t now;
    time(&now); 

    struct tm *local = localtime(&now); 

	switch(parametro){
		case 0:
			return hora = local->tm_hour;
			break;
		case 1:
			return min = local->tm_min;
			break;
		case 2:
			return seg = local->tm_sec;       
			break;
		case 3:
			return dia = local->tm_mday;           
			break;
		case 4:
			return mes = local->tm_mon + 1;     
			break;
		case 5:
			return anio = local->tm_year + 1900;   
			break;
	}
	return 1;
}