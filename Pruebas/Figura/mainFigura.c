/*Aun tiene bastantes fallas pero esta version funciona 
se pueden mejorar varias cosas*/
#include <stdio.h>
#include "figura.h"
#include <string.h>

FIGURA darDim(FIGURA);
void datosEntrada(FIGURA,FIGURA);
void invertirFigura(FIGURA,FIGURA);
void mostrarFigura(FIGURA,FIGURA); 

void main(void)
{
 FIGURA A,inv;
 A=darDim(A);
 inv=crearFigura(obtenFila(A),obtenColumna(A));
 datosEntrada(A,inv);
 invertirFigura(A,inv); 
 mostrarFigura(A,inv);
 
};

FIGURA darDim(FIGURA A)
{
 int a,b;
 printf("Introduce el numero de filas\n");
 scanf("%d",&a);
 printf("Introduce el numero de columnas\n");
 scanf("%d",&b);
 A=crearFigura(a,b);
 return A;
};

void datosEntrada(FIGURA A,FIGURA inv)
{
 int a,b,i,j;
 a=obtenFila(A);
 b=obtenColumna(A);
 getchar();
 for(i=0;i<A->filas;i++)
 {
  
	for(j=0;j<A->columnas;j++)
	{ char val;
	printf("Introduce el valor de la posicion \n Fila %d Columna %d \n",i+1,j+1);
	scanf("%c",&val);
 	ponValor(A,i,j,val);
	ponValor(inv,i,j,val);
	getchar();
	};	
 };

};

void invertirFigura(FIGURA A,FIGURA inv)
{
 char a[9];
 printf("Introduce que quieres cambiar filas o columnas \n");
 scanf("%s",a);
 if(strcmp(a,"filas")==0)
 {
  int f1,f2; 
  printf("Introduce las filas a cambiar \n");
  printf("Fila 1: \n");
  scanf("%d",&f1);
  printf("Fila 2: \n");
  scanf("%d",&f2);
  strcpy(&(inv->m[f1-1][0]),&(A->m[f2-1][0]));
  strcpy(&(inv->m[f2-1][0]),&(A->m[f1-1][0]));
 }else if(strcmp(a,"columnas")==0){
 int c1,c2;
 printf("Introduce las columnas a cambiar \n");
 printf("Columna 1:\n");
 scanf("%d",&c1);
 printf("Columna 2:\n");
 scanf("%d",&c2);
 int i; 
	for(i=0;i<A->filas;i++){
         inv->m[i][c1-1]=A->m[i][c2-1];
	 inv->m[i][c2-1]=A->m[i][c1-1];
	};
 }else{
 printf("Opcion no valida \n");
 printf("No se cambiaron filas ni columnas\n");
};
 
};

void mostrarFigura(FIGURA A,FIGURA inv)
{
 int i,j; 
 printf("Original \n");
 for(i=0;i< A->filas;i++)
 {
	  for(j=0;j< A->columnas;j++)
	  {
	  printf("	%c",A->m[i][j]);
	 }; 
 printf("\n");
 };
 	printf("Invertida \n");

for(i=0;i< inv->filas;i++)
 {
          for(j=0;j< inv->columnas;j++)
          {
          printf("      %c",inv->m[i][j]);
         };
 printf("\n");
 };

 printf("\n");
};

