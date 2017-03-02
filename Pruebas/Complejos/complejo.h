#include <stdio.h>
#ifndef complejo
#define complejo
typedef struct 
{
float real;
float imaginario;
} Complejo;

typedef Complejo * COMPLEJO;
COMPLEJO crearComplejo();
void asignaReal(COMPLEJO C,float r);
void asignaImaginario(COMPLEJO C,float ima);
float parteReal(COMPLEJO C);
float parteImaginaria(COMPLEJO C);
COMPLEJO suma(COMPLEJO C1,COMPLEJO C2);
void ManejaError(int);

#endif



