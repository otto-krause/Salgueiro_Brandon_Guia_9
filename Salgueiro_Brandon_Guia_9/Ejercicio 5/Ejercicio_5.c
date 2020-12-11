#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Se ingresan dos números, calcular la potencia a través de multiplicaciones sucesivas considerando el primero como la base y el segundo como exponente.
    int I=1, num1=0, num2=0, T=1;
    printf("ingrese un n base: ");
    scanf("%d", &num1);
    printf("ingrese un n exponente: ");
    scanf("%d", &num2);
    while(num2>=I)
    {
        T=T*num1;
        I++;
    }
    printf("El resultado de la potenciacion es: %d", T);
    return 0;
}

