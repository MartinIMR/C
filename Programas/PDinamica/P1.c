#include <stdio.h>
#include "pilaDina.h"

void solicitar(PILA);
void cambiar(PILA);

int main(void)
{
 PILA pil;
 pil=crearPila();
 solicitar(pil);
 cambiar(pil);
 return 0;

};

void solicitar(PILA p)
{
 int var;
 printf("Introduce los elementos de la Pila\n");
 do{
 printf("Introduce el elemento\n");
 scanf("%d",&var);
 push(p,var);
 printf("¿Deseas introducir mas?\n	SI=1	NO=0\n");
 scanf("%d",&var);
 }while(var != FALSE);

};

void cambiar(PILA p)
{
 PILA aux;
 aux=crearPila();
 int primero,ultimo;
 ultimo=pop(p);
 while(stackEmpty(p) != TRUE)
 {
  primero=pop(p);
  push(aux,primero);
 };
 primero=pop(aux);

 printf("La pila modificada es:\n");
 printf("%d",ultimo);
 while(stackEmpty(aux) != TRUE)
 {
 printf("%d",pop(aux));
 };
 printf("%d\n",primero);


 

};
