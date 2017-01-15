/*Validar si un numero es primo
RECIBE: Numero "7"
REGRESA: "NO" o "SI"
*/

#include <stdio.h>
int
main (void)
{
  int a, i, re;
  scanf ("%d", &a);
  i = 1;
  re = 0;
  while (i <= a)
    {

      if (a % i == 0)
	{

	  re = re + 1;

	};

      i = i + 1;


    };

  if (re == 2)
    {
      printf ("SI \n");
    }
  else
    {
      printf ("NO \n");
    };
  return 0;
};
