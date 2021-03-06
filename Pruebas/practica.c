#include "pilaDina.h"
#include <stdio.h>

void menu(PILA);

int main(void)
{ 
 PILA almacen;
 almacen=crearPila();
 menu(almacen);
 return 0;
};

void ingresar(PILA P)
{ 
 int id,cp;
 Nodo_Pila *np;
 np=crearNodoPila(); 
 char nombre[100],forma[100];
 printf("Introduce los datos del contenedor\n");
 printf("Introduce el numero de indentificacion\n");
 scanf("%d",&id);
 printf("Introduce la capacidad de almacenamiento\n");
 scanf("%d",&cp);
 printf("Introduce  el nombre del producto \n");
 scanf("%s",nombre);
 printf("Introduce la forma del contenedor\n");
 scanf("%s",forma);
 guardar(np,id,cp,nombre,forma); 
 push(P,np);
};

void mostrar(PILA P)
{
 Nodo_Pila *np;
 np=crearNodoPila();
 PILA aux;
 aux=crearPila();
 printf("Mostrando los contenedores por id\n");
 while(stackEmpty(P) != TRUE)
 {
  np=pop(P);
  push(aux,np);
 };
 while(stackEmpty(aux) != TRUE)
 {
  np=pop(aux);
  push(P,np);
  printf(" %d ",nE(np));
 };
 printf("\n");
};

void sacar(PILA P)
{
 int cont,con,val;
 printf("Introduce el elemento a retirar\n");
 scanf("%d",&cont);
 con=0;
 while( con != TRUE)
 {
  val=pop(P);
  if(val == cont)
  {
   con = TRUE;
  };
 };

};



void menu(PILA P)
{
 int opc;
 do{
 printf("Selecciona una opcion\n");
 printf("Entrar contenedor			(1)\n");
 printf("Mostrar los contenedores almacenados	(2)\n");
 printf("Sacar un contendor			(3)\n");
 printf("Salir					(4)\n");
 scanf("%d",&opc);

 switch(opc)
 {
 case 1:
 ingresar(P);
 break;
 case 2:
 mostrar(P);
 break;
 case 3:
 sacar(P);
 break;
 case 4:
 printf("Saliendo...\n");
 break;
 default:
 printf("Opcion no valida\n");
 break;
 };
 
 }while(opc != 4);

};


