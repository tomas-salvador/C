/*Ejercicio 5. Mostrar tabla de multiplicar de un numero entero*/
#include <stdio.h>

void main()
{
    int a = 0, c = 1, r = 0;
    printf("Calculo de la tabla de multiplicar del numero: ");
    scanf("%d", &a);
    while (c <= 10)
    {
        r = a * c;
        printf("El resultado de multiplicar %d por %d es: %d \n", a, c, r);
        c++;
    }
}