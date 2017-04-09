#include <stdio.h>
#include "Algoritmos.h"

void recibir(char *);
void proceso(char *);
int elementos(char *);

int main(void)
{
 char lista[20];
 recibir(lista);
 proceso(lista);
	

};

int elementos(char *A)
{
 int i=1;
 while(A[i]!='\0')
 {
  i++;
 };
 return i;
};

void recibir(char *A)
{
 printf("Programa de ordenamiento de cadenas\n");
 printf("Primero introduce la cadena\n");
 scanf("%s",A);
};

void proceso(char *A)
{
 int opc;
 printf("Selecciona el algoritmo a utilizar\n");
 printf("1.-Burbuja\n2.-Seleccion\n3.-Quicksort\n");
 scanf("%d",&opc);
 switch(opc)
 {
  case 1:
  burbuja(A,elementos(A));
  printf("Cadena ordenada:\n %s \n",A);
  break;
  case 2:
  seleccion(A,elementos(A));
  printf("Cadena ordenada:\n %s \n",A);
  break;
  case 3:
  quicksort(A,elementos(A));
  printf("Cadena ordenada:\n %s \n",A);
  break;
  default:
  printf("Opcion No valida\n");
  break;
 };

};
