/*V1*/
/*Programa hecho con TAD que resuelve ecuaciones de segundo grado siempre y cuando el discriminante de la ecuacion sea mayor o igual a 0 */
#include <stdio.h>
#include <math.h>
#include "ecuacion.h"

void solicitarDatos(ECUACION ec);
void mostrar(RAICES r);

void main(void)
{
 ECUACION e;
 RAICES r;
 int a;
 e=crearEcuac();
 r=crearRaices();
 solicitarDatos(e);
 r=resolver(e);
 mostrar(r);
};


void solicitarDatos(ECUACION e) 
{

 float a;
 printf(" Ingresa el coeficiente cuadratico:");
 scanf("%f",&a);
 ponA(e,a);

 printf("\n Ingresa el coeficiente lineal:");
 scanf("%f",&a);
 ponB(e,a);
 
 printf("\n Ingresa el coeficiente independiente:");
 scanf("%f",&a);
 ponC(e,a);

};


void mostrar(RAICES r)
{
 printf("La solucion positiva es: %f \n",obtenRPOS(r));
 printf("La solucion negativa es: %f \n",obtenRNEG(r));
};
 
 

