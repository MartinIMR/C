#include <stdio.h>
#include <stdlib.h>
#include "Natural.h"

struct Natural * crearNatural(Corto_ent a)
{
 struct Natural * Creado;
 Creado=(struct Natural *) malloc(sizeof(struct Natural));
 if(Natural == NULL)
 {
  /*Se agregará funcion que maneje el error en la siguiente revision*/
  printf("No se ha podido reservar memoria \n");
  printf("El programa se cerrara");
  exit(-1);
 };
 Creado->numero=a;
 return Creado;

};

Corto_ent esCero(struct Natural * ptr_str)
{
 Corto_ent verdadero=1;
 Corto_ent falso=0;

 /*Definir una variable temporal de valor del numero de la estructura*/
 Corto_ent num_temp=ptr_str->numero; 
 if(num_temp == 0) 
 {
  return verdadero;
 }else{
  return falso;
 };
};

Corto_ent sucesor(struct Natural * ptr_str)
{

 /*Declaremos el sucesor*/ 
 struct Natural * sucesor;
 /*Hagamos la definicion del sucesor*/
 sucesor=crearNatural(0);
 sucesor->numero=(ptr_str->numero)+1;
 return sucesor->numero;

};

Corto_ent esMenor(struct Natural * ptr_str1,struct Natural * ptr_str2)
{

 Corto_ent verdadero=1;
 Corto_ent falso=0;

 Corto_ent natural1=ptr_str1->numero;
 Corto_ent natural2=ptr_str2->numero;
 if(natural1<natural2)
 {
 return verdadero;
 }else{
 return falso;
 };

};

Corto_ent esMayor(struct Natural * ptr_str1,struct Natural * ptr_str2)
{

 Corto_ent verdadero=1;
 Corto_ent falso=0;

 Corto_ent natural1=ptr_str1->numero;
 Corto_ent natural2=ptr_str2->numero;
 if(natural1>natural2)
 {
 return verdadero;
 }else{
 return falso;
 };

};

Corto_ent esMenorIgual(struct Natural * ptr_str1,struct Natural * ptr_str2)
{

 Corto_ent verdadero=1;
 Corto_ent falso=0;

 Corto_ent natural1=ptr_str1->numero;
 Corto_ent natural2=ptr_str2->numero;
 if(natural1<=natural2)
 {
 return verdadero;
 }else{
 return falso;
 };

};

Corto_ent esMayorIgual(struct Natural * ptr_str1,struct Natural * ptr_str2)
{

 Corto_ent verdadero=1;
 Corto_ent falso=0;

 Corto_ent natural1=ptr_str1->numero;
 Corto_ent natural2=ptr_str2->numero;
 if(natural1>=natural2)
 {
 return verdadero;
 }else{
 return falso;
 };

};
Corto_ent predecesor(struct Natural *)
{

 /*Declaremos el predecesor*/ 
 struct Natural * predecesor;
 /*Hagamos la definicion del predecesor*/
 predecesor=crearNatural(0);
 predecesor->numero=(ptr_str->numero)-1;
 return predecesor->numero;

};
