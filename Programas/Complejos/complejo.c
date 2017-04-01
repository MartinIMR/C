#include <stdlib.h>
#include "complejo.h"

COMPLEJO crearComplejo()
{
COMPLEJO C;
C=(COMPLEJO) malloc(sizeof(Complejo));
if(C==NULL)
{
ManejaError(0);
exit(0);
};
return C;
};

void asignaReal(COMPLEJO C,float r)
{
 C->real=r;
};

void asignaImaginario(COMPLEJO C,float ima)
{
C->imaginario=ima;
};

float parteReal(COMPLEJO C)
{
return (C->real);
};

float parteImaginaria(COMPLEJO C)
{
return (C->imaginario);
};


COMPLEJO suma(COMPLEJO C1,COMPLEJO C2)
{
COMPLEJO C;
C=crearComplejo();
C->real=C1->real+C2->real;
C->imaginario=C1->imaginario+C2->imaginario;
return C;
};



