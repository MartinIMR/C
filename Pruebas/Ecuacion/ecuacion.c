#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ecuacion.h"
 
ECUACION crearEcuac()
{
 ECUACION ec;
 ec=(ECUACION) malloc(sizeof(Ecuacion));
 if(ec==NULL)
 {
  printf("No se ha reservado memoria");
  exit(0);
 };
 return ec;
};

RAICES crearRaices()
{
 RAICES r;
 r=(RAICES) malloc(sizeof(Raices));
 if(r==NULL)
 {
  printf("No se ha reservado la memoria");
  exit(0);
 };
 return r;
};
 
void ponA(ECUACION ec,float a)
{
 ec->ccuadratico=a;
};

void ponB(ECUACION ec,float b)
{
 ec->clineal=b;
};

void ponC(ECUACION ec,float c)
{
 ec->cindependiente=c;
};

float obtenA(ECUACION ec)
{
 return ec->ccuadratico;
};

float obtenB(ECUACION ec)
{
 return ec->clineal;
};

float obtenC(ECUACION ec)
{
 return ec->cindependiente;
};

float obtenRPOS(RAICES r)
{
 return r->rpos;
};
 
float obtenRNEG(RAICES r)
{
 return r->rneg;
};

RAICES resolver(ECUACION e)
{
 RAICES r;
 r=crearRaices(); 
 float a,b,c;
 a=obtenA(e);
 b=obtenB(e);
 c=obtenC(e);
 float p1=(-b)/(2*a);
 float discriminante=pow(b,2)-(4*a*c);
 float p2=sqrt(discriminante)/(2*a);
 r->rpos=p1+p2;
 r->rneg=p1-p2;
 return r;

};

