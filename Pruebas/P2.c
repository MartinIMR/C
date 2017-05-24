#include "Lista.h"
#include <stdio.h>

void solicitarLista(LISTA);
LISTA concatena(LISTA,LISTA);
void mostrar(LISTA);

int main(void)
{
 LISTA l1,l2,lc;
 l1=crearLista();
 l2=crearLista();
 lc=crearLista();
 printf("Este programa crea dos listas y las concatena\n");
 printf("Ingresa la primera lista \n");
 solicitarLista(l1);
 printf("Ingresa la segunda lista \n");
 solicitarLista(l2);
 lc=concatena(l1,l2);
 mostrarLista(lc);
 
 return 0;
};


LISTA concatena(LISTA l1,LISTA l2)
{
 LISTA l;
 l=crearLista();
 while(listaVacia(l1) != TRUE)
 {
  l=insertar(l,sacarElemento(l1));
 };
 while(listaVacia(l2) != TRUE)
 {
 l=insertar(l,sacarElemento(l2));
 };
 
 return l;
 
};


void solicitarLista(LISTA l)
{

 int a;
 do{
 printf("Introduce un valor\n");
 scanf("%d",&a);
 l=insertar(l,a);
 printf("¿Deseas insertar mas elementos?\n	Si=1	No=0\n");
 scanf("%d",&a);
 }while(a != FALSE);

};


