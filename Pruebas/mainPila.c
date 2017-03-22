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
 int aux[5];
 int ttmp=S->tope;
 for(int i=5;i>0;i--)
 {
  aux[i-1]=pop(S);
 };
 for(int j=0;j<=ttmp;j++)
 {
   printf("El elemento numero %d es : %d \n",j+1,aux[j]);
   push(S,aux[j]);
 };

};

