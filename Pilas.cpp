#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

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
Movimiento *CrearMovimiento(float modif_saldo, int nro_referencia, char concepto [20], int CI_beneficiario[8], char nombre_beneficiario[30], int nroCuenta_beneficiario[20], char banco_beneficiario[20], int tlf_beneficiario[11]);
int estaVacia(Pila *pila);
void insertar (Pila *pila,Nodo *aux);
void imprimir(Pila *pila);

int main (){
	
	time_t now;
	int n, s, flag, nro_referencia;
	float saldoCuenta = 1000;
	char user, password, password1, user1, concepto, CI_beneficiario, nombre_beneficiario, nroCuenta_beneficiario, banco_beneficiario, tlf_beneficiario;
	
	Pila *p = CrearPila();
	
	printf("Registrese o ingrese la cuenta predeterminada. Usuario: admin. Clave: 1234\n\n");
	system("pause>nul");
	printf("Ingrese su nombre de usuario: ");
    scanf("%s", &user);
    
    if(user!="admin"){
		printf("\nIngrese su contrasena: ");
		scanf("%s", &password);
		system("cls");
		
		printf("Registro completo, bienvenido %s\n",user);
		
		flag=0;
	}else{
		
		printf("\nIngrese su contrasena: ");
		scanf("%s", &password);
		
		if(password=="1234"){
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
		    	printf ("Inicio de sesión correcto");
		    	system("pause>nul");
		    	flag=0;
			}else{
				system ("cls");
		    	printf ("Inicio de sesión incorrecto... Intente de nuevo por favor");
		    	system("pause>nul");
		    	flag=3;
			}   	
		}	
    }while(FLAG==3);

 
	printf("El saldo de su cuenta es $%f \n\nMenu: \n\n1.Imprimir movimientos \n2.Realizar una transaccion \n3.Salir\n\n>>", saldo);
	scanf ("%i",&n);
	
	do{
		switch(n){
		
			case 1:
				
				if(estaVacia){
					printf("Lo sentimos, la pila se encuentra vacia, no hay movimientos que imprimir...");
				}else{
					imprimir(p);
				}
				break;
			
			case 2:
								
			    time(&now); 
			
			    struct tm *local = localtime(&now); 
			    Movimiento->hora = local->tm_hour;         
			    Movimiento->min = local->tm_min;       
			    Movimiento->seg = local->tm_sec;       
			 
			    Movimiento->dia = local->tm_mday;           
			    Movimiento->mes = local->tm_mon + 1;     
			    Movimiento->anio = local->tm_year + 1900;
				
				
				
				insertar(p,CrearNodo(CrearMovimiento()))
				
				break;
			
			case 3: 
				printf ("Cual es el monto que desea retirar?");
				scanf ("%f", &retiro);
				saldo=saldo-retiro;
				break;
			
			default: 
				printf ("Cerrando sesión");
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

Movimiento *CrearMovimiento(float modif_saldo, int nro_referencia, char concepto [20], int CI_beneficiario[8], char nombre_beneficiario[30], int nroCuenta_beneficiario[20], char banco_beneficiario[20], int tlf_beneficiario[11]){
	
	Movimiento *aux=(Movimiento*)malloc(sizeof(Movimiento));
	strcpy(aux->concepto,concepto );
	strcpy(aux->nombre_beneficiario,nombre_beneficiario);
	aux->nro_referencia=nro_referencia;
	aux->modif_saldo=modif_saldo;

	for(int i=0; i<8; i++){
		aux->CI_beneficiario[i]=CI_beneficiario[i];}

	for(int i=0; i<30; i++){
		aux->nombre_beneficiario[i]=nombre_beneficiario[i];}

	for(int i=0; i<20; i++){
		aux->banco_beneficiario[i]=banco_beneficiario[i];}

	for(int i=0; i<20; i++){
		aux->nroCuenta_beneficiario[i]=nroCuenta_beneficiario[i];}

	for(int i=0; i<11; i++){
		aux->tlf_beneficiario[i]=tlf_beneficiario[i];}

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