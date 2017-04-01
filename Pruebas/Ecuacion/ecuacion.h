#include <stdio.h>

typedef struct
{
 float ccuadratico;
 float clineal;
 float cindependiente;
 
}Ecuacion;

typedef struct
{
 float rpos;
 float rneg;
} Raices;


typedef Ecuacion * ECUACION;
typedef Raices * RAICES;
ECUACION crearEcuac();
RAICES crearRaices();
void ponA(ECUACION ec,float a);
void ponB(ECUACION ec,float b);
void ponC(ECUACION ec,float c);
float obtenA();
float obtenB();
float obtenC();

float obtenRPOS();
float obtenRNEG();
RAICES resolver(ECUACION e);







