#include <stdio.h>
#include "pila.h"
#include <stdlib.h>

void insertar(PILA);
void mostrar(PILA);

int main(void)
{
    PILA pil;
    pil=crearPila();
    insertar(pil);
    mostrar(pil);
 return 0;
};

void insertar(PILA A)
{

 int a;
 printf("Inserta el primer valor:\n");
 scanf("%d",&a);
 push(A,a);
 printf("Inserta el segundo valor:\n");
 scanf("%d",&a);
 push(A,a);
 printf("Inserta el tercer valor:\n");
 scanf("%d",&a);
 push(A,a);
 printf("Inserta el cuarto valor:\n");
 scanf("%d",&a);
 push(A,a);
 printf("Inserta el quinto valor:\n");
 scanf("%d",&a);
 push(A,a);

};

void mostrar(PILA S)
{

 PILA tmp;
 tmp=crearPila();
 int i=1; 
 while(stackEmpty(S)!=TRUE)
 {
	push(tmp,pop(S));
 };

 while(stackEmpty(tmp)!=TRUE)
 {
	int val=pop(tmp);
	printf("El elemento %d es: %d\n",i++,val);
	push(S,val);
 };

 

};
