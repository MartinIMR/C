#include <stdio.h>
#include "pilaDinaC.h"

void intPila (PILA);
void desMenu (PILA);
void n1 (PILA);
void n2 (PILA);
void n3 (PILA);
void n4 (PILA);


int
main (void)
{
  int opc;
  PILA pil;
  pil = crearPila ();
  intPila (pil);
  desMenu (pil);
  return 0;
};

void
n1 (PILA p)
{

  PILA aux;
  aux = crearPila ();
  int i;
  char c;
  i = 0;
  while (stackEmpty (p) != TRUE)
    {
      c = pop (p);
      push (aux, c);
      i++;
    };
  while (stackEmpty (aux) != TRUE)
    {
      c = pop (aux);
      push (p, c);
    };
  printf ("El numero de elementos en la pila es: %d \n", i);

};

void
n2 (PILA p)
{

  PILA aux;
  aux = crearPila ();
  char c;
  while (stackEmpty (p) != TRUE)
    {
      c = pop (p);
      push (aux, c);
    };
  printf ("El elemento al fondo de la pila es: %c\n", c);
  while (stackEmpty (aux) != TRUE)
    {
      c = pop (aux);
      push (p, c);
    };

};

void
n3 (PILA p)
{

  /*?? Hecho pero la segunda pila se pierde?? */ ;
  PILA aux, p2;
  aux = crearPila ();
  p2 = crearPila ();
  char c;
  while (stackEmpty (p) != TRUE)
    {
      c = pop (p);
      push (aux, c);
    };
  while (stackEmpty (aux) != TRUE)
    {
      c = pop (aux);
      push (p, c);
      push (p2, c);
    };

};

void
n4 (PILA p)
{
  printf ("Introduce la segunda pila a concatenar con la primera\n");
  PILA p2, aux;
  p2 = crearPila ();
  aux = crearPila ();
  intPila (p2);
  while (stackEmpty (p2) != TRUE)
    {
      push (aux, pop (p2));
    };
  while (stackEmpty (aux) != TRUE)
    {
      push (p, pop (aux));
    };

};


void
intPila (PILA P)
{
  char var;
  int condicion;
  printf ("Introduce una pila\n");
  do
    {
      printf ("Introduce el dato\n");
      scanf ("%c", &var);
      push (P, var);
      printf ("¿Deseas introducir otro dato?\n	Si=1	No=0\n");
      scanf ("%d", &condicion);
    }
  while (condicion != FALSE);

};

void
desMenu (PILA P)
{
  int a;
  do
    {
      printf ("Selecciona una opcion:\n");
      printf ("-Calcular el numero de elementos de la pila (1)\n");
      printf ("-Consultar el elemento de fondo de la pila  (2)\n");
      printf ("-Copiar una pila a otra                     (3)\n");
      printf ("-Concatenar dos Pilas                       (4)\n");
      printf ("-Salir                                      (5)\n");
      scanf ("%d", &a);
      switch (a)
	{
	case 1:
	  n1 (P);
	  break;
	case 2:
	  n2 (P);
	  break;
	case 3:
	  n3 (P);
	  break;
	case 4:
	  n4 (P);
	  break;
	case 5:
	  printf ("Saliendo...\n");
	  break;
	default:
	  printf ("No es una opcion valida\n");
	  break;
	};

    }
  while (a != 5);

};
