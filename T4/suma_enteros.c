/*Ejercicio 2. Sumar dos numeros enteros*/
#include <stdio.h>

void main()
{
    int a = 0, b = 0, s = 0;
    printf("Ingresar los valores de a y b: ");
    scanf("%d %d", &a, &b); /* leer desde el teclado a y b */
    s = a + b;
    printf("La suma es %d\n", s);
}