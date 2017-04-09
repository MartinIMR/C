#include "cola.h"
#include <stdio.h>
#include <stdlib.h>

void manejaError(int a)
{
 switch(a)
 {
     case 0:
         printf("No hay memoria disponible \n Saliendo...\n");
         break;
     case 1:
	 printf("La pila esta vacia\n");
	 break;
     case 2:
         printf("La pila esta llena \n");
         break;
     case 3:
	 printf("La cola esta vacia");
	 break;
     case 4:
	 printf("La cola esta llena");
	 break;
     default:
         printf("Error desconocido\n Saliendo... \n");
         break;
 }

};

COLA crearCola()
{

 COLA C;
 C=(COLA) malloc(sizeof(Cola));
 if(C == NULL)
 {
  manejaError(0);
  exit(0);
 };
 
};

int colaVacia(COLA C)
{

 if(C->elementos == 0)
 {
  return TRUE;
 }else{
  return FALSE;
 };

};

int primero(COLA C)
{
 int v;
 if(colaVacia(C) == TRUE)
 {
  manejaError(3);
  exit(0);
 }
 v=C->ac[C->primero];
 return v;
};

void encolar(COLA C, int e)
{
 if(C->elementos == TAM)
 {
  manejaError(4);
  exit(0);

 };
 C->ac[C->ultimo]=e;
 C->ultimo=sig(C->ultimo);
 C->elementos++;

};

int desencolar(COLA C)
{

 int v;
 if(colaVacia(C) == TRUE)
 {
  manejaError(3);
  exit(0);
 };
 v=C->ac[C->primero];
 C->primero=sig(C->primero);
 C->elementos--;
 return v;
 
};

int sig(int pos)
{
 int nvapos;
 nvapos=(pos + 1) % TAM;
 return nvapos;

};


