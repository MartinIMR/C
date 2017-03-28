
#include <stdio.h>
#include <stdlib.h>
#include "postfija.h"

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
};

int evaluar(PILA S,char * cadena)
{

 int i;
 i=0;
 int a,b;
 while(cadena[i]!='\0')
 {
 	switch(cadena[i])
	{

	case '+':
	b=pop(S);
	a=pop(S);
	push( S , (a+b) );
	break;
	case '-':
	b=pop(S);
	a=pop(S);
	push(S,(a-b));
	break;
	case '*':
	b=pop(S);
	a=pop(S);
	push(S,(a*b));
	break;
	case '/':
	b=pop(S);
	a=pop(S);
	push(S,(int)(a/b));
	break;
	default:
	push( S , (cadena[i] - '0'));
	break;
	};

	i++;
 };

return stackTope(S);

};
