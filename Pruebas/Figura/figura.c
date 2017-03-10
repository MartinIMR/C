#include <stdio.h>
#include <stdlib.h>
#include "figura.h"

FIGURA crearFigura(int tfilas,int tcolumnas)
{
 FIGURA temp;
 temp=(FIGURA) malloc(sizeof(Figura));
 if(temp==NULL)
 {
 printf("No se ha podido reservar memoria");
 }else{
 	temp->m=(char **) malloc(sizeof(char *) * tfilas );
	if(temp->m == NULL)
	{
	printf("No se ha podido crear filas");
	}else{
 	int i;
		for(i=0;i<tfilas;i++){
		 temp->m[i]=(char *) malloc(sizeof(char) * tcolumnas);
		};
	temp->filas=tfilas;
	temp->columnas=tcolumnas;
	return temp;
	};

 }; 
};

 

int obtenFila(FIGURA A)
{
 return A->filas; 
};
int obtenColumna(FIGURA A)
{
 return A->columnas;
};

char obtenValor(FIGURA A,int posf,int posc)
{

 return A->m[posf][posc];

};

void ponValor(FIGURA A,int posf,int  posc,char valor)
{

 A->m[posf][posc]=valor;

};

