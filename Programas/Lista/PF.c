#include <stdio.h>
#include "Lista.h"

void solicitarLista(LISTA *);
int main(void)
{
    LISTA l;
    l=crearLista();
    printf("Programa para probar funciones de la lista \n");
    solicitarLista(&l);
    int a;
    printf("Introduce el elemento a buscar\n");
    scanf("%d",&a);
    buscarElemento(l,a);
    printf("Introduce el a borrar\n");
    scanf("%d",&a);
    borrarElemento(l,a);
    mostrarLista(l);

};

void solicitarLista(LISTA * l)
       {
                        int a;
                     do{
                               printf("Introduce un valor\n");
                                   scanf("%d",&a);
                                      *l=insertar(*l,a);
                                        printf("¿Deseas insertar mas elementos?\n Si=1    No=0\n");
                                          scanf("%d",&a);
                                               }while(a != FALSE);

};
