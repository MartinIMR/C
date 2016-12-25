#include <stdio.h>
	/* Programa que cuenta las cadenas introducidas desde el sistema y 
muestra los mensajes*/

int
main (int n, char **args)
{
	/*El entero n nos dice cuantas cadenas hay y luego las imprimo*/
  printf ("Numero de cadenas:\n %d \n", n);
  int i = 1;

/*Se convierte el doble puntero a uno simple que es lo mismo que una cadena
 y se controla con el contador para pasar entre las distintas cadenas*/

/*Empezamos desde uno por que el compilador cuenta a el 'a.out' como el primer argumento, y mientras haya mas cadenas aumentara*/

  while (i < n)
    {
      printf ("Mensaje %d:\n %s \n", i, *(args + i));
      i = i + 1;
    }
  return 0;
}
