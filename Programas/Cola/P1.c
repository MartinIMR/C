#include <stdio.h>
#include "cola.h"

void agregarDato(COLA);
COLA tamCola(COLA);
void mostrar(COLA);

int main(void)
{
 COLA col;
 col=crearCola();
 agregarDato(col);
 col=tamCola(col);
 mostrar(col);
 return 0;
};



void agregarDato(COLA C)
{
 int a,dato;
 do{
 printf("Introduce el dato\n");
 scanf("%d",&dato);
 encolar(C,dato);
 printf("¿Deseas introducir otro?\n Si=1	No=0\n");
 scanf("%d",&a);
 }while(a != 0);

};

COLA tamCola(COLA C)
{
 COLA aux;
 aux=crearCola();
 int vac,i;
 i=0;
 while(colaVacia(C) != TRUE)
 {
  vac=desencolar(C);
  encolar(aux,vac);
  i++;
 };
 printf("El tamaño de la cola es:\n%d\n",i);
 return aux;
   

};

void mostrar(COLA C)
{
 printf("Los datos son:\n");
 while(colaVacia(C) != TRUE)
 {
   printf("%d",desencolar(C));
 };
 printf("\n");


};
