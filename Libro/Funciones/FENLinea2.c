/*Ejemplo numero dos de funciones en linea. Este programa encuentra el mayor de tres numeros
  e imprime 1, si el primero introducido, 2 si fue el segundo y 3 el tercero
 */

#include <stdio.h>
#define MAYOR3(x,y,z)   {		\
			if( x>y && x>z)	\
			1; \
			else if(y>x && y>z) \
			2; \
			else \
			3;\
			} 
int main(void)
{
 int primero,segundo,tercero;
 printf("Introduce el primer numero:\n");
 scanf("%d",&primero);

 printf("\n Introduce el segundo numero:\n");
 scanf("%d",&segundo);

 printf("\n Introduce el tercer numero:\n");
 scanf("%d",&tercero);
 
 printf("El mayor fue: \n %d \n",MAYOR3(primero,segundo,tercero));
 
 return 0;

};
				

