#include <stdio.h>

/*Como el titulo indica recorre la cadena para encontrar un '+' */

/* Hay aun un problema pues al encontrar el + no rompe el ciclo si no que continua hasta que termine, creo que esto se debe a que la condicion del while es !='\0' sin embargo segun yo se tendria que romper el ciclo al encontrar el primer + xD*/

int
main (int n, char **args)
{

	/*Declaramos la cadena y el contador de los chars*/

  int i = 0;
  char *cadena = *(args + 1);
	/*Hacemos el while para recorrer la cadena*/

	/*Y un if para checar en que posicion esta el simbolo + */
  while (*(cadena + i) != '\0')
    {
      if (*(cadena + i) == '+')
	{
	  printf ("El simbolo se encontro en la posicion:%d \n", i);
	}
      i = i + 1;
    }
  return 0;
}
