#include "postfija.h"
#include <stdio.h>
#include <stdlib.h>

void intro(char *);
void resultado(PILA,char *);

int main(void)
{
 char expresion[TAM];
 PILA pil;
 pil=crearPila();
 intro(expresion);
 resultado(pil,expresion);

 return 0;
};

void intro(char *A)
{
 printf("Introduce la expresion postfija para calcular \n");
 scanf("%s",A);
};

void resultado(PILA S,char *A)
{
 printf("El resultado de la operacion es:\n"); 
 printf("%d \n",evaluar(S,A));
};

