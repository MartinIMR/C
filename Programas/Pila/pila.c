#include "stdio.h"
#include "stdlib.h"
#include "pila.h"

void manejaError(int a)
{
 switch(a)
 {
     case -1:
         printf("La pila esta llena\n");
         break;
     case 0:
         printf("No hay memoria disponible \n Saliendo...\n");
         break;
     case 2:
         printf("La pila esta vacia \n");
         break;
     default:
         printf("Error desconocido\n Saliendo... \n");
         break;
 }


};

PILA crearPila()
{
 PILA tmp;
 tmp=(PILA) malloc(sizeof(Pila));
 tmp->tope=-1;
 return tmp;
};

int stackEmpty(PILA S)
{
    if( S->tope == -1)
    {
        return TRUE;
    }else
    {
        return FALSE;
    };
};

void push(PILA S,int e)
{
 if(S->tope == TAM-1)
 {
     manejaError(-1);
     exit(0);
 }else{
     S->tope++;
     S->cont[S->tope]=e;
 };

};

int pop(PILA S)
{
 int v;
 if(stackEmpty(S)==TRUE)
 {
     manejaError(2);
     exit(0);
 }else{
     v=S->cont[S->tope];
     S->tope--;
     return v;
 };

};

int stackTope(PILA S)
{
    int v;
    v=pop(S);
    push(S,v);
    return v;
}



