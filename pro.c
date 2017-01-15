#include <stdio.h>
#include <stdlib.h>

struct persona
{
  int edad;
  char genero;
  char nombre[46];
};

/* El modulo Menu parece funcionar */

int
Menu (void)
{
  int opc;
  printf ("\n 1.-Capturar 10 registros");
  printf ("\n 2.-Modificar 10 registros");
  printf ("\n 3.-Consultar 10 registros");
  printf ("\n 4.-Guardar BD");
  printf ("\n 5.-Salir \n");
  scanf ("%d", &opc);
  return opc;

}

void
Capturar (struct persona A[])
{
  int i;
  for (i = 0; i < 10; i++)
    {
      scanf ("%d,%c,%s", &(A[i].edad), &(A[i].genero), &(A[i].nombre));
    };
  return;

};

void
Modificar (struct persona A[])
{
  int i;
  scanf ("Introduce el registro a modificar: %d", &i);
  printf ("\n Introduce los valores \n");
  scanf ("%d,%c,%s", &(A[i].edad), &(A[i].genero), &(A[i].nombre));
  return;

};

void
Consultar (struct persona A[])
{
  int i;
  for (i = 0; i < 10; i++)
    {
      printf ("%d,%c,%s", A[i].edad, A[i].genero, A[i].nombre);
    };
  return;

};

void
GuardarBD (struct persona *A)
{

  FILE *bd;
  bd = fopen ("BD.dat", "wb+");
  fwrite (A, sizeof (struct persona), 10, bd);
  fclose (bd);
  return;
};

void
LeerBD (struct persona *Lista)
{
  FILE *bd;
  bd = fopen ("BD.dat", "rb");
/*rb para abrir en binario y lectura*/
  fread (Lista, sizeof (struct persona), 10, bd);
  fclose (bd);
  return;
};


int
main (void)
{
  struct persona BD[10];
  FILE *a;
  a = fopen ("BD.dat", "rb");
  int opcion;

  if (a != NULL)
    {
      fclose (a);
      LeerBD (BD);
    };
  do
    {
      opcion = Menu ();
      switch (opcion)
	{
	case 1:
	  Capturar (BD);
	  break;
	case 2:
	  Modificar (BD);
	  break;
	case 3:
	  Consultar (BD);
	  break;
	case 4:
	  GuardarBD (BD);
	  break;
	}
    }
  while (opcion != 5);
  return 0;
};

