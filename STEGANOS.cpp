#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

typedef struct nodo{
	
	int indice;
	int dato;
	struct nodo *sig;
}Nodo;

typedef struct serie{
	
	bool completa;
	Nodo *primero, *ultimo;
	int longitud;
	
}Subsecuencia;

typedef struct cola{
	
	Nodo *first, *last;
}Cola;

typedef struct colas{
	
	int indice;
	Subsecuencia posibilidad;
}Posibilidades;

Nodo *CrearNodo(int dato);
void AnadirAsubsecuencia(Subsecuencia** sub, int data, int pos_msj);
int Buscar(Cola** Msj, Cola** Clave, int pos_clave);
Cola *CrearCola();
void Encolar(int data, Cola **c);
int Desencolar(Cola** c);
void Recorrer(Cola** c);



int main(){
	
	int skip, opc, l_clave=0, l_msj=0, n=0, ran, primera_pos, fa;
	
	srand(time(NULL));
		
	printf("Bienvenido a STEGANOS un programa en donde puede aplicar la esteganografia para mandar mensajes \"ocultos\" (presionar ENTER)\n\n");
	system("pause>nul");
	printf("Desea una breve explicacion de la esteganografia y del funcionamiento del programa?: (0: NO \\ 1: SI)");
	printf("\n>>");
	scanf("%i",&skip);
	
	if(skip==1){
		system("cls");
		printf("Bienvenido a STEGANOS un programa en donde puede aplicar la esteganografia para mandar mensajes \"ocultos\" (presionar ENTER)\n\n");
		printf("\nLa esteganografia busca ocultar la existencia de un mensaje, en vez de su contenido (de esto se encarga la criptografia) (presione ENTER)");
		system("pause>nul");
		printf("\n\nEn este programa va a poder codificar y decodificar un numero a traves de una serie de numeros");
		system("pause>nul");
		printf("\n\nPara codificar un numero debe introducir el numero a codificar y la longitudes de dos series de numeros que seran la clave y el mensaje, el programa se encarga de generar estas series aplicando la esteganografia para que el numero que se oculta esta en la longitud de la subsecuencia mas corta del mensaje que contiene la clave. Al principio parece un poco abstracto, vayamos poco a poco...");
		system("pause>nul");
		printf("\n\nSupongamos una seria finita de numeros: 1, 5, 9, 7, 3, 8. Una subsecuencia de esta serie puede ser \"1, 5, 9\" (que tiene longitud 3, pues son 3 elementos) o \"3, 8\" (de longitud 2 claramente)");
		system("pause>nul");
		printf("\n\nAhora bien, usemos los terminos antes mencionados, la clave es una serie de numeros que se recomienda que su longitud sea entre 2 y 10 numeros, y el mensaje una serie de numeros, cuya longitud debe ser igual o mayor a la longitud de la clave");
		system("pause>nul");
		printf("\n\nEjemplo, tenemos el mensaje \"5, 7, 11, 35, 62, 12, 76, 27, 53, 49, 84, 99, 11\" y el objetivo es que la clave que se oculte en el mensaje genere una subsecuencia con la longitud del numero que se desea esconder, así si queremos encriptar un 5, las POSIBLES CLAVES podrian ser: ");
		system("pause>nul");
		printf("\n\n\"5, 7, 11, 35, 62\" directamente");
		system("pause>nul");
		printf("\n\n\"11, 62, 76\", pues no se necesita que los numeros esten seguidos, pero si en orden");
		system("pause>nul");
		printf("\n\n O simplemente que la clave sea \"27, 99\" pues la longitud entre el 27 y 99 (inbcluyendolos) en el mensaje es de 5");
		system("pause>nul");
		printf("\n\nLo que oculta el numero (5 en este caso) es la longitud de la subsecuencia del mensaje que contiene los datos de la clave en orden");
		system("pause>nul");
		printf("\n\nCon el mismo el mensaje, no es lo mismo una clave \"11, 76\" (de longitud 5 la subsecuencia en el mensaje), a la clave \"76, 11\", pues como se evaluan los digitos de la clave en orden este usaria el ultimo 11 del mensaje y su longitud seria de 7");
		system("pause>nul");
		printf("\n\nPor ultimo si ocurren varias subsecuencias en el mensaje con la misma clave, se toma la mas corta");
		system("pause>nul");
		printf("\n\nAsi pues, si tenemos el mensaje \"5, 1, 3, 2, 1, 7, 3, 2, 3, 8\" (se pueden repetir numeros) y la clave \"1, 2, 3\" (no se pueden repetir numeros) tenemos dos subescuencias de longitudes distintas que contienen la clave en orden");
		system("pause>nul");
		printf("\n\nTenemos la subseuencia \"1*, 3, 2*, 1, 7, 3*\" de longitud 6 (recordando que los numeros de la clave deben aparecer EN ORDEN) y la subsecuencia \"1*, 7, 3, 2*, 3*\" de longitud 5 (los asteriscos indican los numeros del mensaje que pertenecen a la clave y como se evalua en el mismo orden en que se escribe la clave no importa si aparecen varias veces los numeros de la clave, siempre y cuando no esten ordenados, no cuenta como una subsecuencia)");
		system("pause>nul");
		printf("\n\nPor lo que la menor de las longitudes es 5 y ese es el numero oculto. Ahora con esto claro pasemos al programa como tal. Gracias por leerlo");
		system("pause>nul");
		system("cls");
	}
	
	system("cls");
	printf("Bienvenido a STEGANOS un programa en donde puede aplicar la esteganografia para mandar mensajes \"ocultos\" (presionar ENTER)\n\n");
	
	do{

		printf("\nMenu: \n1. Codificar\n2. Decodificar\n3. Salir\n\n>>");
		scanf("%i",&opc);
		
		switch(opc){
			
			case 1:
			{	
				do{
					if(l_msj<l_clave){
						printf("\nLa longitud del mensaje debe ser mayor a la de la clave, pues el mensaje contiene a la clave\n\n");
						system("color 04");
					}

					printf("Ingrese la longitud que desea que posea la clave: ");
					scanf("%d",&l_clave);
					printf("Ingrese la longitud que desea que posea el mensaje: ");
					scanf("%d",&l_msj);
				}while(l_msj<l_clave);
				
				system("color 07");
				
				do{
					if(n>l_msj){
						
						printf("\nLo siento, pero el numero a ocultar debe ser menor o igual a la longitud del mensaje, pues la longitud de la subsecuencia que contenga la clave es la que representa al numero oculto\n\n");
						system("color 04");
					}					
					
					printf("Ingrese el numero que desea ocultar: ");
					scanf("%d",&n);
				}while(n>l_msj);
				
				Cola *Msj=CrearCola();
				Cola *Clave=CrearCola();
				
				for(int i=0; i<l_clave; i++){
					
					fa=0;
					
					ran=rand()%100;
					Nodo *actual=Clave->first;
					
					for(int j=Clave->last->indice; j=0; j--){
						
						if(ran==actual->dato)
							fa++;
						
						actual=actual->sig;
					}
					
					if(fa==0)
						Encolar(ran, &Clave);
					else
						i--;
				}
				
				Nodo *actualc=Clave->first;
				
				do{					
					do{
						ran=rand()%(l_msj-primera_pos);
					}while((l_clave-actualc->indice)>=(l_msj-primera_pos));

					primera_pos=ran;
					Encolar(actualc->dato,&Msj);
					
					actualc=actualc->sig;

				}while(actualc->indice<l_clave);
				
				Nodo *actualm=Msj->first;
				
				do{
					if(actualm->dato==NULL){
						do{
							ran=rand()%100;
						}while(ran==Clave->first->dato);
						
						actualm->dato=ran;
					}

					actualm=actualm->sig;
					
				}while(actualm->indice<l_msj);
				
				printf("Mensaje: ");
				Recorrer(&Msj);
				printf("\nClave: ");
				Recorrer(&Clave);			
			}		
				break;
				
			case 2:
			{
				//	Subsecuencia *sub=(Subsecuencia*) malloc(sizeof(Subsecuencia));
				//	if((*sub->ultimo==)
				int x=0;
			}
				break;
				
			default:
				
				printf("Graias por usar el programa!!!");
				system("pause>nul");
		}
	}while(opc==1 || opc==2);

	return 0;
}

Nodo *CrearNodo(int data){
	
	Nodo *node = (Nodo*) malloc(sizeof(Nodo));
	
	node->dato=data;
	node->sig=NULL;
	
	return node;
};

void AnadirAsubsecuencia(Subsecuencia** sub, int data, int pos_msj){
		
	Nodo *node=CrearNodo(data);
	
	node=(*sub)->primero;
	
	for(int i=0; i<pos_msj; i++) node=node->sig;
	
	if((*sub)->ultimo==NULL){
		(*sub)->primero=(*sub)->ultimo=node;
		node->indice=0;
		return;
	}
	
	(*sub)->ultimo->sig=node;
	node->indice=(*sub)->ultimo->indice+1;
	(*sub)->ultimo=node;
};

int Buscar(Cola** Msj, Cola** Clave, int pos_clave){
	
	Nodo *msj=(*Msj)->first, *clave=(*Clave)->first;
	
	for(int i=0; i<pos_clave; i++){
		
		clave=clave->sig;
	}
							
	for(int i=0; i<(*Msj)->last->indice; i++){
		
		if(clave->dato==msj->dato){
			
			return i;
		}
		
		msj=msj->sig;
	}
	
	return -1;
};

Cola *CrearCola(){
	
	Cola *c =(Cola*) malloc(sizeof(Cola));
	
	c->first=c->last=NULL;
	
	return c;
};

void Encolar(int data, Cola **c){
	
	Nodo *node = CrearNodo(data);
	
	node->dato=data;
	
	if((*c)->first==NULL){
		(*c)->first=(*c)->last=node;
		node->indice=0;
		return;
	}
	
	(*c)->last->sig=node;
	node->indice=(*c)->last->indice+1;
	(*c)->last=node;	
};

int Desencolar(Cola** c){
	
	if((*c)->first=NULL)
		return INT_MIN;
	
	Nodo *node=(*c)->first;
	int data=node->dato;
	
	(*c)->first=(*c)->first->sig;
	
	if((*c)->first==NULL)
		(*c)->last=NULL;
		
	free(node);
	return data;	
};

void Recorrer(Cola** c){
	
	if((*c)->first==NULL){
		
		printf("La cola está vacía");
		return;
	}		
	
	Nodo *node;
	
	while(node!=NULL){
		
		printf("%d, ",node->dato);
		node=node->sig;
	}
}