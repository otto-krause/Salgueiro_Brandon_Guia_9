#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresan dos números por teclado mostrar por pantalla todos los intermedios.
    int num2=0, num1=0, I=0;
    printf("Ingrese un valor:\n");
    scanf("%d", &num1);
    printf("Ingrese un valor:\n");
    scanf("%d", &num2);
    if(num1>num2)
        {
            do
            {
                num2++;
                printf("\n%d", num2);

            }while(num1-1>num2);
        }
        else
            {
                do
                {
                     num1++;
                    printf("\n%d", num1);

                }while(num2-1>num1);
            }

    return 0;
}
