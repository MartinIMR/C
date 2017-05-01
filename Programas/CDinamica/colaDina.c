#include "colaDina.h"
#include <stdlib.h>

void
manejaError (int a)
{
  switch (a)
    {
    case 0:
      printf ("No hay memoria disponible \n Saliendo...\n");
      break;
    case 1:
      printf ("La pila esta vacia\n");
      break;
    case 2:
      printf ("La pila esta llena \n");
      break;
    case 3:
      printf ("La cola esta vacia");
      break;
    case 4:
      printf ("La cola esta llena");
      break;
    default:
      printf ("Error desconocido\n Saliendo... \n");
      break;
    }

};

COLA
crearCola ()
{
  COLA C;
  C = (COLA) malloc (sizeof (Cola));
  if (C == NULL)
    {
      manejaError (0);
      exit (0);
    };

  C->primero = NULL;
  C->ultimo = NULL;
  return C;

};

Nodo_Cola *
crearNodoCola ()
{
  Nodo_Cola *nc;
  nc = (Nodo_Cola *) malloc (sizeof (Nodo_Cola));
  if (nc == NULL)
    {
      manejaError (0);
      exit (0);
    };
  return nc;
};

int
esVaciaCola (COLA C)
{
  if (C->primero == NULL && C->ultimo == NULL)
    {
      return TRUE;
    }
  else
    {
      return FALSE;
    };

};

int
primero (COLA C)
{
  int v;
  if (esColaVacia (C) == TRUE)
    {
      manejaError (3);
      exit (0);
    };
  v = C->primero->dato;
  return v;
};

void
encolar (COLA C, int e)
{
  Nodo_Cola *nc;
  nc = crearNodoCola ();
  nc->dato = e;
  nc->siguiente = NULL;
  if (esColaVacia (C) == TRUE)
    {
      C->primero = nc;
    }
  else
    {
      C->ultimo->siguiente = nc;
    };
  C->ultimo = nc;

};

int
desencolar (COLA)
{
  int v;
  Nodo_Cola *nc;
  if (esColaVacia (C) == TRUE)
    {
      manejaError (3);
      exit (0);
    };
  v = C->primero->dato;
  nc = C->primero;
  C->primero = nc->siguiente;
  if (C->primero == NULL)
    {
      C->ultimo = NULL;
    };
  free (nc);

  return v;

};
