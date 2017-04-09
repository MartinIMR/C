#include "cola.h"
#include <stdio.h>

void agregarDato(COLA);
void ultimoCola(COLA,int *);
void mostrar(int);

int main(void)
{
 int uv;
 COLA col;
 col=crearCola();
 agregarDato(col);
 ultimoCola(col,&uv);
 mostrar(uv);
 return 0;
};

void agregarDato(COLA C)
{
  int c,dato;

  do{
  printf("Introduce el dato\n");
  scanf("%d",&dato);
  encolar(C,dato);
  printf("¿Deseas introducir más?\n Si=1	No=0\n");
  scanf("%d",&c);
  }while(c != 0);
};

void ultimoCola(COLA C,int *v)
{

 while(colaVacia(C) != TRUE)
 {
  *v = desencolar(C);
 };

};

void mostrar(int v)
{
 printf("El ultimo valor es: %d \n",v);
};
