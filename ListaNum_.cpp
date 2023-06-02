#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


typedef struct nodo{

    int dato;
    struct nodo * siguiente;

}NODO;

 NODO * CrearNodo(int dato);
 int InsertarInicio(NODO **cabeza, int dato);
 int InsertarFinal(NODO **cabeza, int dato);
 void ImprimirLista(NODO *cabeza);
 int EstaVacia(NODO *cabeza);
 int ExisteElemento(NODO *, int dato );


int main (){

    NODO *cabeza = NULL ;
    int res ;

    if(res ==1 ){
        printf("\nEl elemento esta en la lista ...");
    }else{
        printf("\nEl elemento NO esta en la lista ...");
    }
	
	printf("\n\n");
	
    InsertarInicio(&cabeza, 5);
    InsertarFinal(&cabeza,4 );
    InsertarFinal(&cabeza, 6 );
    InsertarFinal(&cabeza, 7);


    ImprimirLista(cabeza);
	
    printf("\n\nIngrese el caracter para comparar si se encuentra en la lista enlazada: ");
	scanf("%d",&res);
	
    if(ExisteElemento(cabeza, res)){
        printf("\nEl caracter esta en la lista ...");
    }else{
        printf("\nEl caracter NO esta en la lista ...");
    }
		

    return 0 ;
}

NODO * CrearNodo(int dato){

    NODO *nuevo = NULL;

    nuevo = (NODO*)malloc (sizeof(NODO));

    if (nuevo != NULL){
        nuevo ->dato = dato;
        nuevo ->siguiente = NULL;
    }

    return nuevo;
}
 int InsertarInicio(NODO **cabeza, int dato){

     NODO  *nuevo = NULL;
     nuevo = CrearNodo(dato);
     if(nuevo != NULL){
        nuevo ->siguiente = *cabeza;
        *cabeza =nuevo;
        return 1;
     }

     return 0 ;
 }

void ImprimirLista(NODO *cabeza){

    NODO *nAux = cabeza;
        printf("\n");
    while( nAux != NULL){

		printf("%d ", nAux ->dato);
        nAux= nAux ->siguiente;
    }

  }

int InsertarFinal(NODO **cabeza, int dato){

   NODO  *nuevo = NULL, *nAux= * cabeza;

   nuevo = CrearNodo(dato);
        printf("\n nuevo:%d \n", nuevo ->dato);
   if( nuevo != NULL){
        while(nAux ->siguiente!=NULL){
            nAux  = nAux ->siguiente;
            printf("%d ", nAux ->dato);
        }
        nAux ->siguiente= nuevo;
        printf("\n nAux:%d ", nAux ->dato);
        return 1;
   }

   return 0 ;
   }


int EstaVacia(NODO *cabeza){
    if(cabeza == NULL){
        return 1 ;
    }else {
        return 0 ;
    }
}

 int ExisteElemento(NODO * cabeza, int dato ){
    NODO *nAux = cabeza;

    while(nAux != NULL){
        if(nAux ->dato== dato){
            return 1;
		}
		nAux  = nAux ->siguiente;
	}

	return 0;
}