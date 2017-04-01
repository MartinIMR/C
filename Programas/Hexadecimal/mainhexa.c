#include "hexa.h"
#include <stdlib.h>
#include <stdio.h>

void solicitar(int *);
void convertir(PILA,int);
void mostrar(PILA);

int main(void)
{
 PILA pil;
 pil=crearPila();
 int numero;
 solicitar(&numero);
 convertir(pil,numero);
 mostrar(pil);
 

return 0;
};

void solicitar(int *a)
{
printf("Ingresa el numero a convetir \n");
scanf("%d",a);
};

void convertir(PILA S,int num)
{

 int cociente=(int)(num/16);
 int residuo=num%16;
 
 if(cociente == 0)
 {
  switch(num)
  {
	case 10:
	push(S,'A');
	break;
	case 11:
	push(S,'B');
	break;
	case 12:
	push(S,'C');
	break;
	case 13:
	push(S,'D');
	break;
	case 14:
	push(S,'E');
	break;
	case 15:
	push(S,'F');
	default:
	push(S,(num + '0'));
	break;
  };

 }else{

  int cans;
  do{
  switch(residuo)
  {
	case 10:
	push(S,'A');
	break;
	case 11:
	push(S,'B');
	break;
	case 12:
	push(S,'C');
	break;
	case 13:
	push(S,'D');
	break;
	case 14:
	push(S,'E');
	break;
	case 15:
	push(S,'F');
	default:
	push(S,(residuo + '0'));
	break;
    };
 cans=cociente;
 residuo=cociente%16;
 cociente= (int) (cociente/16) ;
 }while(cociente > 0);

 switch(cans)
  {
	case 10:
	push(S,'A');
	break;
	case 11:
	push(S,'B');
	break;
	case 12:
	push(S,'C');
	break;
	case 13:
	push(S,'D');
	break;
	case 14:
	push(S,'E');
	break;
	case 15:
	push(S,'F');
	default:
	push(S,(cans + '0'));
	break;
    };

  };


};

void mostrar(PILA S)
{
 printf("El valor en hexadecimal es : \n");
 while(stackEmpty(S)!=TRUE)
 {
 printf("%c",pop(S));
 };
 printf("\n");
};






