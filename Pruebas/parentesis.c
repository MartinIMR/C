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

void leerExpresion(PILA S)
{
 char tmp[TAM];
 printf("Introduce la expresion\n");
 scanf("%s",tmp);
 while(tmp[i]!= '\0')

};

int checaParentesis(PILA S)
{ 
 PILA tmp;
 tmp=crearPila();
 int nizq=0;
 int nder=0;

 while(stackEmpty(S)!=TRUE)
 {
	char caracter;
	caracter=pop(S);
	if(caracter== '(')
	{
		nizq++;

	}else if(caracter == ')'){
		nder++;
	};

	push(tmp,caracter);
	
 };

 while(stackEmpty(tmp)!=TRUE)
 {
	push(S,pop(tmp));
 };

 if( nizq == nder)
 {
	return TRUE;

 }else if( nizq > nder){
	return FALSE;
 }else if( nder > nizq){
	return FALSE;
 };
 

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

void push(PILA S,char e)
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

char pop(PILA S)
{
 char v;
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

char stackTope(PILA S)
{
    char v;
    v=pop(S);
    push(S,v);
    return v;
}


