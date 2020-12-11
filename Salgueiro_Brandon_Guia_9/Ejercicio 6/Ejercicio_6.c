#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A=0, cont=0, cont2=0, numA=0, notas=0;
    float proA=0, proA_final=0, acu=0;
    while(cont<30)
    {
        numA++;
        while(cont2<10)
        {
            printf("Ingrese sus notas :");
            scanf("%d", &notas);
            acu=acu+notas;
            cont2++;
        }
        cont2=0;
        proA=acu/10;
        printf("El promedio del alumno %d es: %.3f \n", numA, proA);
        proA_final=proA_final+proA;
        cont++;
        acu=0;
    }
    proA_final=proA_final/30;
    printf("El promedio general del curso es: %.3f", proA_final);

    return 0;
}
