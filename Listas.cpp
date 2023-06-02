#include<stdio.h>
#include<stdlib.h>
#include <conio.h>


typedef struct nodo{

    char dato;
    struct nodo * siguiente;

}NODO;

 NODO * CrearNodo(char dato);
 int InsertarInicio(NODO **cabeza, char dato);
 int InsertarFinal(NODO **cabeza, char dato);
 void ImprimirLista(NODO *cabeza);
 int EstaVacia(NODO *cabeza);
 int ExisteElemento(NODO *, char dato );
 char c;

int main (){

    NODO *cabeza = NULL ;
    int res ;

//    InsertarInicio(&cabeza, '5');
//    InsertarInicio(&cabeza,'4');
//    InsertarFinal(&cabeza, '6');
//    InsertarFinal(&cabeza, '7');
//    ImprimirLista(cabeza);
//    res=  ExisteElemento(cabeza , '4' );

	do{	
		c=getch();
		
		if (c<58 && c>47){
			
			if(InsertarFinal(&cabeza,c))
				printf("%c",c);
		}
	}while(c!='+');

    if(res ==1 ){
        printf("\nEl elemento esta en la lista ...");
    }else{
        printf("\nEl elemento NO esta en la lista ...");
    }

    return 0 ;
}

NODO * CrearNodo(char dato){

    NODO *nuevo = NULL;

    nuevo = (NODO*)malloc (sizeof(NODO));

    if (nuevo != NULL){
        nuevo ->dato = dato;
        nuevo ->siguiente = NULL;
    }

    return nuevo;
}
 int InsertarInicio(NODO **cabeza, char dato){

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

    while( nAux != NULL){
        printf("%c ", nAux ->dato);
        nAux= nAux ->siguiente;
    }

  }

int InsertarFinal(NODO **cabeza, char dato){

   NODO  *nuevo = NULL, *nAux= * cabeza;

   nuevo = CrearNodo(dato);

   if( nuevo != NULL){
        while(nAux ->siguiente!=NULL){
            nAux  = nAux ->siguiente;
        }
        nAux ->siguiente= nuevo;
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

 int ExisteElemento(NODO * cabeza, char dato ){
    NODO *nAux = cabeza;

    while(nAux != NULL){
        if(nAux ->dato== dato){
			return 1;
		}
		nAux  = nAux ->siguiente;
	}

 return 0;
}