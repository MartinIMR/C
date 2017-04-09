#include <stdio.h>

/*Funcion que ordena de menor a mayor la cadena, recibe esta cadena y cuantos elementos tiene*/

void burbuja(char cadena[],int n)
{

 int ciclos=n-1;
 for(int i=0;i<ciclos;i++)
 {
	for(int j=0; j <= n; j++)
	{	
		int elemento_actual = cadena[j] - '0';
		int elemento_siguiente = cadena[j+1] - '0';
		if( elemento_actual > elemento_siguiente )
		{
			char tmp;
			tmp=cadena[j+1];
			cadena[j+1]=cadena[j];
			cadena[j]=tmp;
		};


	};

 };

};

void seleccion(char cadena[],int n)
{

};

void quicksort(char cadena[],int n)
{


};
