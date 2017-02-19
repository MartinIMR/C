/* Programa ejemplo 3 de uso de funciones en linea
   Este calcula el volumen de un cono
*/

#include <stdio.h>
#define PI 3.1416
#define volCono(r,h) ((PI*r*r*h)/3.0)

int main(void)
{
 float radio;
 int altura;
 printf("Introduce el radio del cono en centimetros\n");
 scanf("%f",&radio);
 printf("Introduce la altura en entero\n");
 scanf("%d",&altura);
 printf("Este es el volulmen:\n %.4f \n",volCono(radio,(float)altura));

};
