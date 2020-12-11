#include <stdio.h>
#include <stdlib.h>

int main()
{
int I=0, num1=0, num2=0;
 float cont=0;
 printf("Ingrese un valores: \n");
 scanf("%d", &num1);
 cont=cont+num1;
 while(I<=13)
 {
     printf("Ingrese otro valor:\n");
     scanf("%d", &num2);
     cont=cont+num1;
    if (num1>num2)
     {

     }
     else
     {
         num1=num2;
     }
     num2=0;
     I++;

 }
 cont=cont/15;
 printf("El mayor es: %d\nEl promedio es:%.3f", num1, cont);
 return 0;
}

