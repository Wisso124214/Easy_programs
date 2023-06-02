#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include <math.h>
#include <windows.h>

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
	Nodo *tope;
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
	system("cls");
	srand(time(NULL));

	time_t now;
	int n, s, flag, nro_referencia, bool_transccn, a;
	float saldoCuenta = 1000, modif_saldo;
	char user[10], password[20], password1[20], user1[20], concepto[20], CI_beneficiario[20], nombre_beneficiario[20], nroCuenta_beneficiario[20], banco_beneficiario[20], tlf_beneficiario[20];
	
	Pila *p;
	p= CrearPila();
	
	printf("Registrese o ingrese la cuenta predeterminada. Usuario: admin. Clave: 1234\n\n");
	printf("Ingrese su nombre de usuario: ");
    scanf("%s", &user);
    
    if(!(strcmp(user,"admin"))){
		
		printf("\nIngrese su contrasena: ");
		scanf("%s", &password);
		
		if(!(strcmp(password,"1234"))){
			printf("Inicio de sesion exitoso\n");
			system("pause>nul");
			flag=1;
		}else{
			printf ("Inicio de sesion incorrecto... Intente de nuevo por favor\n");
			flag=0;
			system("pause>nul");
			
		}
	}else{
		printf("\nIngrese su contrasena: ");
		scanf("%s", &password);
		system("cls");
		
		printf("Registro completo, bienvenido %s\n",user);
		
		flag=0;
	}
	
	
	//do 
	//flag 1 predeterminado
	//flag 0 registrado
	do{

		
		
		if(flag==3){
		    printf("Recuerde que el usuario y clave predeterminados son \"admin\" y \"1234\" \n\n");
			flag=0;
		}
		
	   	if(flag==0){
		   	printf("Iniciando sesion...\n\n");

			printf("\nIngrese su nombre de usuario: ");
		    scanf("%s", &user1);
		    printf("\nIngrese su contrasena: ");
		    scanf("%s", &password1);
		    
		    if((!(strcmp(user,user1)) && !(strcmp(password,password1))) || (!(strcmp(password1,"1234")) && !(strcmp(user1,"admin")))){
	
				system ("cls");
		    	printf ("Inicio de sesion correcto\n");
		    	system("pause>nul");
			}else{
				system ("cls");
		    	printf ("Inicio de sesion incorrecto... Intente de nuevo por favor\n");
		    	system("pause>nul");
		    	flag=3;	
				
			}   	
		}
			
    }while(flag==3);

	system("cls");
	do{
			
		printf("El saldo de su cuenta es $%f \n\nMenu: \n\n1.Imprimir movimientos \n2.Realizar una transaccion \n3.Salir\n\n>>", saldoCuenta);
		scanf ("%i",&n);
		switch(n){
		
			case 1:
				
				if(estaVacia(p)){
					printf("Lo sentimos, la pila se encuentra vacia, no hay movimientos que imprimir...");
					system("pause>nul");
				}else{
					imprimir(p);
				}
				break;
			
			case 2:
								
				printf("Time is %02d:%02d:%02d \n",fecha(0), fecha(1), fecha(2));
				int sig=0;
				do{
				
				printf("Ingrese si desea realizar un pago movil (0) o una transferencia (1): ");
				scanf("%d",&bool_transccn);

				if (bool_transccn==0 || bool_transccn==1)
				{
					sig=1;
				}else{printf("\nEntrada no valida\n");
					system("pause>nul");}
				}while (sig!=1);
				
				

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
				
				if(bool_transccn==1){
					printf("Ingrese el numero de cuenta del beneficiario: ");
					scanf("%s",&nroCuenta_beneficiario);
				}else{
					printf("Ingrese el numero de celular del beneficiario: ");
					scanf("%s",&tlf_beneficiario);
				}

				printf("Ingrese el banco del beneficiario: ");
				scanf("%s",&banco_beneficiario);

				if (saldoCuenta<modif_saldo || modif_saldo==0)
				{
					printf("\nmonto no valido\n");
						system("pause>nul");
				}else{
				
				saldoCuenta-=modif_saldo;
					system("pause");
	printf("%s",nroCuenta_beneficiario);
	system("pause");

				insertar(p,CrearNodo(CrearMovimiento(modif_saldo ,nro_referencia ,concepto ,CI_beneficiario ,nombre_beneficiario ,nroCuenta_beneficiario,banco_beneficiario,tlf_beneficiario)));
				}
				break;
			
			default:
				printf ("Cerrando sesion...");
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
	system("pause");
	printf("%s",aux->nroCuenta_beneficiario);
	system("pause");
	


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
	Movimiento*c=(Movimiento*)malloc(sizeof(Movimiento));

		while(aux!=NULL){
		c=aux->dato;
		printf("Fecha:%d/%d/%d \nHora %d:%d:%d\nreferencia %d\nConcepto: %s\nCedula del Beneficiario: %s\n Nombre del beneficiario: %s\n Numero de cuenta: %s\n Banco: %s \n telefono: %s\n  ", c->dia,c->mes,c->anio,c->hora,c->min,c->seg,c->nro_referencia,c->concepto,c->CI_beneficiario,c->nombre_beneficiario,c->nroCuenta_beneficiario,c->banco_beneficiario,c->tlf_beneficiario );
		aux=aux->siguiente;
		printf ("\n----------\n ");
	}
	system("pause>nul");
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