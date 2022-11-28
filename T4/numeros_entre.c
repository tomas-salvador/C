/*Ejercicio 4. Leer dos numeros e imprimir los numeros comprendidos entre ellos sin incluirlos*/
#include <stdio.h>

void main()
{
    int a = 0, b = 0, i = 1;
    printf("Ingrese el primer valor: ");
    scanf("%d", &a);
    printf("Ingrese el segundo valor mayor que el primero: ");
    scanf("%d", &b);
    if (a < b)
    {
        a++; /* Se comienza en a+1 y se termina en b-1 */
        while (a < b)
        {
            printf("Valor numero %d = %d \n", i, a);
            i++;
            a++;
        }
    }
    else if (a > b)
    {
        printf("El mayor debe ser el segundo valor");
    }
    else
    {
        printf("Son iguales");
    }
}