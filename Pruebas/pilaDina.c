#include <stdlib.h>
#include <stdio.h>
#include "pilaDina.h"
#include <string.h>

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
  np->ic=crearInfo();
  return np;

};

Info * crearInfo()
{
 Info *inf;
 inf=(Info *) malloc(sizeof(Info));
 if(inf == NULL)
 {
  manejaError(0);
  exit(0);
 };
  
 return inf;
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
 
void guardar(Nodo_Pila *np,int e,int cap,char nompro[],char frm[])
{
  np->ic->id=e;
  np->ic->cda=cap;
  strcpy(np->ic->nombrep,nompro);
  strcpy(np->ic->forma,frm);
};

void
push (PILA P,Nodo_Pila *npr )
{
  npr->anterior = P->tope;
  P->tope = npr;
};

Nodo_Pila *
stackTop (PILA P)
{
  Nodo_Pila *v;
  if (stackEmpty (P) == TRUE)
    {
      manejaError (1);
      exit (0);
    };
  v = P->tope;
  return v;
};

Nodo_Pila *
pop (PILA P)
{
  Nodo_Pila *np,*v;
  if (stackEmpty (P) == TRUE)
    {
      manejaError (1);
      exit (0);
    }
  else
    {
      v = P->tope;
      np = P->tope->anterior;
      free (P->tope);
      P->tope = np;
      return v;
    };
};

int nE(Nodo_Pila *np)
{
 int v;
 v=np->ic->id;
 return v;
};


