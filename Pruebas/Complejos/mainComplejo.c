/*V1*/
/*Primera version del programa que hace suma de numeros complejos*/
#include <stdio.h>
#include "complejo.h"

void solicitarDatos(COMPLEJO C1,COMPLEJO C2);
void mostrar(COMPLEJO C);
void ManejaError(int);

void main(void)
{
 COMPLEJO C,C1,C2;
 C=crearComplejo();
 C1=crearComplejo();
 C2=crearComplejo();
 solicitarDatos(C1,C2);
 C=suma(C1,C2);
 mostrar(C);

}; 

void solicitarDatos(COMPLEJO C1,COMPLEJO C2)
{
 float r,im;
 printf("Introduzca la parte real e imaginaria del complejo 1\n");
 scanf("%f %f",&r,&im);
 asignaReal(C1,r);
 asignaImaginario(C1,im);
 printf("Introduzca la parte real e imaginaria del complejo 2\n");
 scanf("%f %f",&r,&im);
 asignaReal(C2,r);
 asignaImaginario(C2,im);
};

void mostrar(COMPLEJO C)
{
printf("La suma del complejo C1+C2 es:\n");
printf("Parte real: %f \n",C->real);
printf("Parte imaginaria: %f \n",C->imaginario);  
};

void ManejaError(int e)
{
char *errores[]={"No hay memoria disponible"};
 printf("%s",errores[e]);
};

