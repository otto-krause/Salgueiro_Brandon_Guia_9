#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Ingresado un numero entero calcular su factorial.
     int BC=0, num1=0, h=1;
    printf("ingrese un numero: ");
    scanf("%d",&BC);
    while(BC>0)
    {
         num1=num1+1;
        h=h*num1;
        BC--;
    }
    printf("El factorial es: %d", h);
    return 0;
}
