#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I, num1, cont1=0, cont2=0;
    while (I<20)
    {
        printf("\nIngrese su saldo: ");
        scanf("%d", &num1);
        if (num1>2000)
        {
            cont1++;
        }
        else
        {
            cont2++;

        }
        I++;
    }
    printf("\nLos que ganan mas de 2000 son: %d", cont1);
    printf("\nLos que ganan menos de 2000 son: %d", cont2);
    return 0;
}

