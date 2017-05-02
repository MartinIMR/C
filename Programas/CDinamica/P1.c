#include "colaDina.h"
#include <stdio.h>

void agregarDato (COLA);
int tamCola (COLA);
void mostrar (int);

int
main (void)
{
  int tam;
  COLA col;
  col = crearCola ();
  agregarDato (col);
  tam = tamCola (col);
  mostrar (tam);
  return 0;
};

void
mostrar (int datos)
{
  printf ("El numero de datos en la cola es:\n %d\n", datos);
};

int
tamCola (COLA C)
{
  int i, x;
  i = 0;
  while (esColaVacia (C) != TRUE)
    {
      x = desencolar (C);
      i++;
    };

  return i;
};

void
agregarDato (COLA C)
{

  int var;
  printf ("Introduce los datos de la cola\n");
  do
    {
      printf ("Introduce el dato\n");
      scanf ("%d", &var);
      encolar (C, var);
      printf ("¿Deseas introducir otro dato?\n	SI=1	NO=0\n");
      scanf ("%d", &var);
    }
  while (var != FALSE);

};
