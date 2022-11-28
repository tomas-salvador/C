/*Ejercicio 6. Generar numeros enteros de 2 en 2 comenzando por el 2 hasta el valor maximo menor que 30 y sume los divisibles por 2*/
#include <stdio.h>

void main()
{
    int suma = 0, i = 2;
    for (i = 2; i < 30; i += 2)
    {
        printf("%d\n", i);
        if (i % 2 == 0)
            suma += i;
    }
    printf("La suma de los valores divisibles por 2 es: %d", suma);
}