/*Ejercicio 9. Averiguar si un numero N es primo*/
#include <stdio.h>
void main()
{
    int n, i, a;
    a = 0;
    printf("Introduce un numero: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0) /*Si n modulo de i es 0, incrementamos a en 1*/
            a++;
    }
    if (a == 2)
        printf("El numero %d es primo", n);
    else
        printf("El numero %d no es primo", n);
}