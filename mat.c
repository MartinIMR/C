#include <stdio.h>
#include <stdlib.h>

int main(void)
{

 int d1,d2,i,j;
 int **m1,**m2,**mr;
 scanf("%d,%d",&d1,&d2);
 m1=malloc(sizeof(int *)*d2);
 m2=malloc(sizeof(int *)*d2);
 mr=malloc(sizeof(int *)*d2);
 

 	for(i=0;i<d2;i++)
	{	
	m1[i]=malloc(sizeof(int)*d1);
	m2[i]=malloc(sizeof(int)*d1);
	mr[i]=malloc(sizeof(int)*d1);
	};
	
	for(i=0;i<d2;i++)
	{
		for(j=0;j<d1;j++)
		{
		scanf("%d",&(m1[i][j]));
		};	
	};

	for(i=0;i<d2;i++)
	{
		for(j=0;j<d1;j++)
		{
		scanf("%d",&(m2[i][j]));
		};	
	};
	
	for(i=0;i<d2;i++)
	{
	printf("\n");
		for(j=0;j<d1;j++)
		{
		if(i==(d2-1) && j==(d1-1))
		{
		mr[i][j]=m1[i][j]+m2[i][j];
		printf("\t %d \n",mr[i][j]);
		}
		else
		{
		mr[i][j]=m1[i][j]+m2[i][j];
		printf("\t %d",mr[i][j]);
		
		};
			
		};	
	};
	

	
};
