
#include <stdio.h>
long int fibonacci(void);
int main(void)
{
int n,i;
printf("CUanto numeros:\n");
scanf("%d",&n);
printf("\nSecuencia de fibonacci:0,1");
for(i=2;i<n;i++)
{
printf(",%ld",fibonacci());
};
return 0;
};

long int fibonacci(void)
{
static int x=0;
static int y=1;
y += x;
x =y -x;
return y;

};

