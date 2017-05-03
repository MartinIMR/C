/*Codigo de la pila Dinamica usando chars */
#include <stdlib.h>
#include <stdio.h>
#include "pilaDinaC.h"

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

PILA
crearPila ()
{
  PILA P;
  P = (PILA) malloc (sizeof (Pila));
  if (P == NULL)
    {
      manejaError (0);
      exit (0);
    };
  P->tope = NULL;
  return P;
};

Nodo_Pila *
crearNodoPila ()
{
  Nodo_Pila *np;
  np = (Nodo_Pila *) malloc (sizeof (Nodo_Pila));

  if (np == NULL)
    {
      manejaError (0);
      exit (0);
    };

  return np;

};

int
stackEmpty (PILA P)
{
  if (P->tope == NULL)
    {
      return TRUE;
    }
  else
    {
      return FALSE;
    };
};

void
push (PILA P, char e)
{
  Nodo_Pila *np;
  np = crearNodoPila ();
  np->dato = e;
  np->anterior = P->tope;
  P->tope = np;
};

char
stackTop (PILA P)
{
  char v;
  if (stackEmpty (P) == TRUE)
    {
      manejaError (1);
      exit (0);
    };
  v = P->tope->dato;
  return v;
};

char
pop (PILA P)
{
  char v;
  Nodo_Pila *np;
  if (stackEmpty (P) == TRUE)
    {
      manejaError (1);
      exit (0);
    }
  else
    {
      v = P->tope->dato;
      np = P->tope->anterior;
      free (P->tope);
      P->tope = np;
      return v;
    };
};
