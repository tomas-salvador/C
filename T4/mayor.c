/*Ejercicio 3. Leer dos numeros y escribir el mayor o un mensaje si son iguales*/
#include <stdio.h>
void main()
{
    int a = 0, b = 0;
    printf("Ingresar el primer valor: ");
    scanf("%d", &a);
    printf("Ingresar el segundo valor: ");
    scanf("%d", &b);
    if (a > b)
        printf("El mayor es: %d", a);
    else if (b > a)
        printf("El mayor es: %d", b);
    else
        printf("Son iguales");
}