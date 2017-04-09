#include "cola.h"
#include <stdio.h>

void agregarDato(COLA);
void mostrar(COLA);
COLA ponAlaCola(COLA,COLA);

int main(void)
{
 COLA C1,C2,C3;
 C1=crearCola();
 C2=crearCola();
 printf("Introduce los valores de la primera cola\n");
 agregarDato(C1);
 printf("Introduce los valores de la segunda cola\n");
 agregarDato(C2);
 C3=crearCola();
 C3=ponAlaCola(C1,C2);
 mostrar(C3);
 

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

COLA ponAlaCola(COLA C1,COLA C2)
{

 COLA aux;
 aux=crearCola();
 while(colaVacia(C2) != TRUE)
 {
  encolar(aux,desencolar(C2));
 };
 while(colaVacia(C1) != TRUE)
 {
  encolar(aux,desencolar(C1));
 };

 return aux;
};
 
void mostrar(COLA C)
{
 printf("El resultado de poner los elementos de la cola 2 en la cola 1 es:\n");
 while(colaVacia(C) != TRUE)
 {
  printf("%d",desencolar(C));
 };
 
 printf("\n");
};
