#include <stdio.h>
int main(int n,char **args){
printf("Numero de cadenas:\n %d \n",n);
int i=1;
while(i<n){
printf("Mensaje %d:\n %s \n",i,*(args+i));
i=i+1;
}
return 0;
}
