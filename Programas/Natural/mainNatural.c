/*V1*/
/*Programa que crea dos numeros naturales y realiza operaciones con ellos */
#include <stdio.h>
#include <stdlib.h>
#include "Natural.h"
 
Corto_ent obtenerNumero();

void determinarMayoresMenores(struct Natural *,struct Natural *);
void determinarCeros(struct Natural *,struct Natural *);
void mostrarSucesor(struct Natural *,struct Natural *);
void mostrarPredecesor(struct Natural *,struct Natural *); 


void main(void)
{
 Corto_ent num1;
 Corto_ent num2;
 struct Natural * ptr_str_nat_1;
 struct Natural * ptr_str_nat_2;
   /*Pasar por referencia num1 y num2 en la proxima version*/
 num1=obtenerNumero();
 num2=obtenerNumero();
 ptr_str_nat_1=crearNatural(num1);
 ptr_str_nat_2=crearNatural(num2);
  /*Optimizar todo esto para la siguiente version ¬¬*/
 determinarCeros(ptr_nat_1,ptr_str_nat_2);
 determinarMayoresMenores(ptr_str_nat_1,ptr_str_nat_2);
 mostrarSucesor(ptr_str_nat_1,ptr_str_nat_2); 
 mostrarPredecesor(ptr_str_nat_1,ptr_str_nat_2);
 
 
};

Corto_ent obtenerNumero()
{
 Corto_ent a;
 do{
 printf("Ingresa un numero:\n")
 scanf("%hu",&a);
 }while( a >= 0);
 return a;
};

void determinarMayoresMenores(struct Natural * ps1,struct Natural * ps2)
{
 if(esMenor(ps1,ps2)==1)
 { 
 printf("EL numero 1 es menor que el dos\n");
 }else{ 
 printf("El numero 1 es igual al dos\n");
 }; 
 if(esMayor(ps1,ps2)==1)
 {
 printf("El numero 1 es mayor que el dos\n");
 }else{
 printf("El numero 1 es igual al dos\n");
 };

};

void determinarCeros(struct Natural * ps1,struct Natural * ps2)
{
 if(esCero(ps1)==1)
 {
 printf("En numero 1 es cero\n");
 }else{
 printf("El numero 1 no es cero\n");
 };

 if(esCero(ps2)==1)
 {
 printf("En numero 2 es cero\n");
 }else{
 printf("El numero 2 no es cero\n");
 };

};
void mostrarSucesor(struct Natural * ps1,struct Natural * ps2)
{
 printf("El sucesor del primer numero es:%hu \n",sucesor(ps1));
 printf("El sucesor del segundo numero es:%hu \n",sucesor(ps2));
};
void mostrarPredecesor(struct Natural * ps1,struct Natural * ps2)
{
printf("El predecesor del primer numero es:%hu \n",predecesor(ps1));
 printf("El predecesor del segundo numero es:%hu \n",predecesor(ps2));
};


