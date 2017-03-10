#include <stdio.h>
#ifndef figura
#define figura
typedef struct
{
 char **m;
 int filas;
 int columnas;
}Figura;
typedef Figura* FIGURA;
FIGURA crearFigura(int,int);
int obtenFila(FIGURA);
int obtenColumna(FIGURA); 
char obtenValor(FIGURA,int,int);
void ponValor(FIGURA,int,int,char);
#endif
