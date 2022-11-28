/*Ejercicio 8. Mostrar por pantalla todos los numeros comprendidos entre 1 y 100 que son multiplos de 7 o de 13*/
#include <stdio.h>

void main()
{
    int i = 1;
    for (i = 1; i <= 100; i++)
    {
        if ((i % 7 == 0) || (i % 13 == 0))
            printf("%d\n", i);
    }
}