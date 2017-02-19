/*Ejemplo de programa donde se usa una funcion en linea
  o macro con argumentos*/
#include <stdio.h>
#define PI 3.1416
#define areaCirculo(x) (PI * x * x)

main(void)
{
 float r;
 r=10.7;
 printf("El area del circulo es: \n %.3f \n",areaCirculo(r));

 return 0;
};

