#include <stdio.h>
#include <stdlib.h>

int main()
{
     int I=0, num1=0, cont1=0, cont2=0, cont3=0;
    while (I<10)
    {
        printf("Ingrese un numero: ");
            scanf("%d", &num1);
        if (num1==0)
            {
                cont1++;
            }
        else
        {
            if(0<num1)
            {
                cont2++;;
            }
            else
            {
                cont3++;;
            }
        }
        I++;
    }
    printf("\nLos iguales a cero son: %d", cont1);
    printf("\nLos positivos son: %d", cont2);
    printf("\nLos negativos son: %d", cont3);
    return 0;
}
