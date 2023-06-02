//Luis Bustos. CI: 30.642.944. Laboratorio de Programacion II.
//Programa generador de Facturas.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>

struct datos_unicos_factura{  //Cada factura no requiere estos datos
	
	int dia;
	int mes;
	int anio;
	char direccion_negocio[90];
	int nro_facturas;
	int items;
	
}datosf;


struct lista_articulos_{
	
	int cant;
	char descripcion[150];
	int precio_unitario;
	int importe;
	float subtotal;
	float total;

};


struct clientes_{
	
	char nombre[15];
	unsigned long int CI;
	char direccion[90];
	int numero_telefonoI[11];
	char numero_telefonoC[11];
};


struct facturas{
	
	struct clientes_ clientes;
	struct lista_articulos_ lista_articulos [30];

} factura[15];

char c;
int i, j, opc, contadorfacturas, artFacturas[15], w, x, y, z, cuantas, desde, menus, coincidencias;
unsigned long int ran;
const float IVA = 0.21;

char buscarC[90];
long int buscarN;

void Ingresar_Datos();
void Imprimir_Facturas(int cuantas,int desde);
void Mostrar();
void Buscar();
void menu();
void salir();

char vacio[12];
char Nombres[19][15]={"Luis","Alejandro","Maria","Sarai","Jose","Andres","Mario","Elena","Hugo","Sergio","Grecia","Karen","Luz","Irene","Graciela","Marcial","Alejandro","Vanessa","Santiago"};
char Direcciones[15][90]={"Av. prolongacion michelena c.c. thema local 19 frente a protinal, Maracaibo,Venezuela","Edif. Fricalor Iruna PB Local 80, Maracaibo,Venezuela","Torre A Piso 9 Ofic. 905, Maracaibo,Venezuela","Ed Ctro Solano Plaza P-5 Of 5-C, Maracaibo,Venezuela","C. C. Siglo XXI PB Local A40, Maracaibo,Venezuela","Centro G Piso 1, Maracaibo,Venezuela","Res. Plaza 1 PB Ofic. 10, Maracaibo,Venezuela","Urb. San Ignacio Nvel. Jardín Loc. LV-15, Maracaibo,Venezuela","Parcelamiento Ind. Lebrun Ca. Secundaria Edf. Pacentro, Maracaibo,Venezuela","Av. 13a entre 69a Y 70 Casa Favinca Sector Tierra Negra, Maracaibo,Venezuela","Piso 2 Ofic. 2C Zona A-1, Maracaibo,Venezuela","Av Fco de Mda Edif. Tecoteca Piso 1, Maracaibo,Venezuela","Edif. Lion Piso 2 Ofic. 202, Maracaibo,Venezuela","9na. Transv. e/4ta. y 5ta. Av. Qta. Unifedo, Maracaibo,Venezuela","Zona Industrial Care, Maracaibo,Venezuela"};
char Adjetivos[14][12]={"salado ,","grande, ","juvenil, ","infantil, ","seco, ","caro, ","fuerte, ","acido, ","limpio, ","agradable, ","flexible, ","esponjoso, ","dulce, ","mucho, "};

//MAIN

int main(){
	
	srand(time(NULL));
	menu();
	
	return 0;
}

//INGRESAR DATOS

void Ingresar_Datos(){
	
	do{
		system("cls");
		printf("Digite cuantas facturas desea registrar (maximo 15, minimo 1): ");
		scanf("%d",&datosf.nro_facturas);
		
	}while(datosf.nro_facturas>15 || datosf.nro_facturas<1);
	
	do{
		system("cls");
		printf("Digite cuantas facturas desea registrar (maximo 15, minimo 1): %d",datosf.nro_facturas);
		printf("\n\nDecida si desea registrar las facturas aleatoriamente (0) o manualmente (1): ");
		scanf("%d",&opc);
		
	}while(opc!=1 && opc!=0);
		
	
	switch(opc){
		
		case 0:
			
			printf("Decide ahorrar tiempo autogenerando las facturas. Entiendo\n\n");
			system("pause");
			
			datosf.dia=rand()%31+1;
			datosf.mes=rand()%12+1;
			datosf.anio=rand()%20+2010;
			ran=rand()%15;
			datosf.direccion_negocio[90]=Direcciones[ran][90];
			
			for(i=0; i<datosf.nro_facturas; i++){
				
				ran=rand()%19;
				factura[i].clientes.nombre[15]=Nombres[ran][15];
				
				factura[i].clientes.CI=rand()%15000000+20000000;
				ran=rand()%15;
				factura[i].clientes.direccion[90]=Direcciones[ran][90];
				
				printf("\n\n%s",factura[i].clientes.direccion);
				printf("\n\n");
				system("pause");
				
				factura[i].clientes.numero_telefonoI[1]=4;
				factura[i].clientes.numero_telefonoI[2]=2;
				factura[i].clientes.numero_telefonoI[3]=4;
				
				for(z=4; z<11; z++){
					
					factura[i].clientes.numero_telefonoI[z]=rand()%10;
				}
				
				datosf.items=rand()%15;
				artFacturas[i]=datosf.items;
				
				for(y=0; y<datosf.items; y++){
					
					factura[i].lista_articulos[y].cant=rand()%30;
					ran=rand()%7;
					
					for(z=0;z<ran;z++){
					
						j=rand()%14;
						strcat(factura[z].lista_articulos[y].descripcion,Adjetivos[j]);
					}
					
					factura[i].lista_articulos[y].precio_unitario=rand()%500;
				}
				contadorfacturas++;
				Imprimir_Facturas(1,i+1);
				break;
			}
			
			break;
			
		case 1:
			
			system("cls");
			printf("Excelente. Aca tiene la disponibilidad de registrar manualmente los datos de las facturas. Comencemos");
			
			
			printf("\n\nDATOS DE LA FACTURA\n\n");
			printf("Ingrese el dia actual: ");
			scanf("%d",&datosf.dia);
			
			printf("Ingrese el mes vigente (numero): ");
			scanf("%d",&datosf.mes);
			
			printf("Ingrese el anio en curso: ");
			scanf("%d",&datosf.anio);
			
			printf("Ingrese la direccion del negocio (no use espacios por favor, se recomienda usar \"_\"): ");
//			scanf("%s",&datosf.direccion_negocio);
			gets(datosf.direccion_negocio);
			
						
			
			for(i=contadorfacturas; i<datosf.nro_facturas; i++){
				
				printf("\tINGRESE LOS DATOS DE LA FACTURA # %d",i+1);
				
				printf("\n\nDATOS DEL CLIENTE\n\n");
				
				printf("Ingrese el nombre del cliente: ");
				scanf("%s",&factura[i].clientes.nombre);
				
				printf("Ingrese el documento de identidad del cliente: ");
				scanf("%d",&factura[i].clientes.CI);
				
				printf("Ingrese la direccion del cliente (no use espacios por favor, se recomienda usar \"_\"): ");
				scanf("%s",&factura[i].clientes.direccion);
				
				printf("Ingrese el numero de celular del cliente: ");
				scanf("%s",&factura[i].clientes.numero_telefonoC);
				
				printf("\n\nLISTA DE ARTICULOS\n\n");
				printf("Ingrese la cantidad de items: ");
				scanf("%d",&datosf.items);
				
				artFacturas[i]=datosf.items;
				
				for(j=0; j<datosf.items; j++){
					
					printf("\nIngrese la cantidad de articulos del item %d: ",j+1);
					scanf("%d",&factura[j].lista_articulos[j].cant);
					
					printf("Ingrese la descripcion del item %d (no use espacios por favor, se recomienda usar \"_\"): ",j+1);
					scanf("%s",&factura[j].lista_articulos[j].descripcion);
					
					printf("Ingrese el precio unitario del item %d: ",j+1);
					scanf("%d",&factura[j].lista_articulos[j].precio_unitario);
				}
				
				contadorfacturas++;
				Imprimir_Facturas(1,i+1);
				break;
			}
			
			break;	
	}
	return;
}

//IMPRIMIR FACTURAS

void Imprimir_Facturas(int cuantas,int desde){
	
	system("cls");
	
	if(contadorfacturas==0){
	
		printf("Lo sentimos, aun no hay ninguna factura registrada para imprimir. Ingrese alguna factura para poder visualizarlas. Gracias.\n\n");
		system("pause");
		return;
	}
	
	if(cuantas==0 && desde==0){
	
		do{
			
			if(w>contadorfacturas){
				printf("El numero de facturas registradas en esta sesion es de %d\n",contadorfacturas);
			}
			
			printf("Cuantas facturas desea imprimir?: ");
			scanf("%d",&w);
			
			if(w==-1){
				return;
				break;
			}			
		}while(w>contadorfacturas);
		
		printf("\nIngrese la factura por la cual desea comenzar a imprimir: ");
		scanf("%d",&x);

	}else{
		
		w=cuantas;
		x=desde;
	}
	
	for(i=x-1; i<15 && i<(x-1+w); i++){

		printf("--------------------------------------------------------------------------------------------------------------------\n");
		printf("--------------------------------------------------------------------------------------------------------------------\n");
		printf("                                                    FACTURA # %d\n",i+1);
		printf("--------------------------------------------------------------------------------------------------------------------\n");
		printf("--------------------------------------------------------------------------------------------------------------------\n");
		printf("Negocio: %s",datosf.direccion_negocio);
		printf("\n");
		printf("%d/%d/%d",datosf.dia,datosf.mes,datosf.anio);
		printf("\n\nNombre: %s",factura[i].clientes.nombre);
		printf("\nCI: %d",factura[i].clientes.CI);
		printf("\nDireccion: %s",factura[i].clientes.direccion);
		printf("\nTelefono: ");
		
		ran=0;
		for(y=0;y<11;y++){
			ran+=factura[i].clientes.numero_telefonoI[y];
		}
		
		if(ran>0){
			for(y=0;y<11;y++){
				printf("%d",factura[i].clientes.numero_telefonoI[y]);
			}
		}else{
			
			printf("%s",factura[i].clientes.numero_telefonoC);
		}
		
		printf("\n\n");
		printf("--------------------------------------------------------------------------------------------------------------------\n");
		printf("                                                 LISTA DE ARTICULOS\n");
		printf("--------------------------------------------------------------------------------------------------------------------\n");
		printf(" Cantidad |                                 Descripcion                                 | Precio unitario | Importe \n");
		printf("--------------------------------------------------------------------------------------------------------------------\n");
		
	for(j=0; j<artFacturas[i]; j++){
		
		factura[i].lista_articulos[j].importe=factura[i].lista_articulos[j].precio_unitario*factura[i].lista_articulos[j].cant;
		
		printf("    %d    | ",factura[i].lista_articulos[j].cant);
		
		ran=strlen(factura[i].lista_articulos[j].descripcion);
		
		for(y=0; y<((77-ran)/2); y++){printf(" ");}
		printf("%s",factura[i].lista_articulos[j].descripcion);
		for(y=0; y<((77-ran)/2); y++){printf(" ");}
		
		printf(" | %d | %d ",factura[i].lista_articulos[j].precio_unitario,factura[i].lista_articulos[j].importe);
		
		factura[i].lista_articulos[j].subtotal+=factura[i].lista_articulos[j].importe;
		printf("\n");
	}
		factura[i].lista_articulos[j-1].total=factura[i].lista_articulos[j-1].subtotal+(factura[i].lista_articulos[j-1].subtotal*IVA);
		
		printf("\n");
		printf("                                                                                        |      Subtotal     %d\n",factura[i].lista_articulos[j-1].subtotal);
		printf("                                                                                        |      IVA (21%%)    %d\n\n",factura[i].lista_articulos[j-1].subtotal*IVA);
		printf("                                                                                        |       TOTAL       %d\n",factura[i].lista_articulos[j-1].total);
		printf("\n\n\n");
		system("pause");
	}
	return;
}

//BUSCAR

void Buscar(){
	
	if(contadorfacturas==0){
		
		system("cls");
		printf("Lo sentimos, aun no hay ninguna factura registrada para buscar un dato. Ingrese alguna factura para poder buscar un dato. Gracias.\n\n");
		system("pause");
		return;
	}
	
	coincidencias=0;
	
	do{
		system("cls");
		printf("Que desea buscar?: ");
		printf("\n1. CI del cliente\n2. Direccion del cliente\n3. Nombre del cliente\n4. Numero de telefono del cliente\n5. Cantidad de articulos (de un item) en una factura\n6. Descripcion de un item en la factura\n7. Total de la factura\n\n>>");
		scanf("%d",&opc);
	}while(opc>8 || opc<0);
	
	
	if(opc==1 || opc==5 || opc==7){
		
		printf("\nIngrese la cantidad que busca: ");
		scanf("%d",&buscarN);
	}
	
	if(opc==2 || opc==3 || opc==6 || opc==4){
		
		printf("Ingrese el texto a buscar: ");
		scanf("%s",&buscarC);
	}
	
	switch(opc){
		
		case 1:
			for(i=0; i<=contadorfacturas; i++){
				
				if(buscarN==factura[i].clientes.CI){
					
					printf("Se ha encontrado una coincidencia\n\n\n");
					coincidencias++;
					Imprimir_Facturas(1,i+1);
					break;
				}
			}
			break;

		case 2:
			for(i=0; i<=contadorfacturas; i++){
				
				if(strstr(buscarC,factura[i].clientes.direccion)){
					
					printf("Se ha encontrado una coincidencia\n\n\n");
					coincidencias++;
					Imprimir_Facturas(1,i+1);
					break;
				}
			}
			break;

		case 3:
			for(i=0; i<=contadorfacturas; i++){
				
				if(strstr(buscarC,factura[i].clientes.nombre)){
					
					printf("Se ha encontrado una coincidencia\n\n\n");
					coincidencias++;
					Imprimir_Facturas(1,i+1);
					break;
				}
			}
			break;

		case 4:
			for(i=0; i<=contadorfacturas; i++){
			
				ran=0;
				for(j=0; j<11; j++){
					
					ran=factura[i].clientes.numero_telefonoI;
				}
				
				if(ran>0){
					
					for(j=0; j<11; j++){
											
						buscarN[j]=int(buscarC[j])-48;
					}
					
					for(j=0; j<=contadorfacturas; j++){
						
						if(buscarN==factura[i].clientes.numero_telefonoI){
							
							printf("Se ha encontrado una coincidencia\n\n\n");
							coincidencias++;
							Imprimir_Facturas(1,i+1);
							break;
						}
					}
				}else{
					
					if(strstr(buscarC,factura[i].clientes.numero_telefonoC)){
						
						printf("Se ha encontrado una coincidencia\n\n\n");
						Imprimir_Facturas(1,i+1);
						coincidencias++;
					}
				}
			}
			break;

		case 5:
			for(i=0; i<=contadorfacturas; i++){
				
				for(j=0; j<artFacturas[i]; j++){
					
					if(buscarN==factura[i].lista_articulos[j].cant){
						
						printf("Se ha encontrado una coincidencia\n\n\n");
						coincidencias++;
						Imprimir_Facturas(1,i+1);
						break;
					}
				}
			}
			break;

		case 6:
			for(i=0; i<=contadorfacturas; i++){
				
				for(j=0; j<artFacturas[i]; j++){
					
					if(strcmp(buscarC,factura[i].lista_articulos[j].descripcion)){
						
						printf("Se ha encontrado una coincidencia\n\n\n");
						Imprimir_Facturas(1,i+1);
						coincidencias++;
					}
				}
			}
			break;

		case 7:
			for(i=0; i<=contadorfacturas; i++){
				
				for(j=0; j<artFacturas[i]; j++){
				
					if(buscarN==factura[i].lista_articulos[j].total){
						
						printf("Se ha encontrado una coincidencia\n\n\n");
						coincidencias++;
						Imprimir_Facturas(1,i+1);
						break;
					}
				}
			}
			break;
	}
	
	if(coincidencias==0){
		
		printf("\n\nLa variable ingresada fue buscada y no se encontro ninguna coincidencia...\n\n");
	}
	return;
}

//MENU

void menu(){
		
	do{
		system("cls");
		printf("MENU: \n\n1. Ingresar Datos de la factura\n2. Imprimir facturas\n3. Buscar en la base de datos\n4. Salir\n\n>>");
		scanf("%d",&menus);
		
		switch(menus){
			
			case 1: Ingresar_Datos(); break;
			case 2: Imprimir_Facturas(0,0); break;
			case 3: Buscar(); break;
			case 4: salir(); break;
		}
	}while(menus!=4);	
	
	return;
}

//SALIR

void salir(){
	
	system("cls");
	printf("\n\n\nMUCHAS GRACIAS POR USAR ESTE PROGRAMA!!! Espero haber sido de utilidad\n\n\n");
	system("pause");
	return;
}