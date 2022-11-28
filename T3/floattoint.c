/*Ejercicio 10. Aceptar dos numeros float, multiplicarlos y convertirlo en int*/
#include <stdio.h>

int main()
{
    float x = 6.3, y = 4.5, producto = 0;
    printf("Numeros a convertir: %f y %f\n", x, y);
    producto = x * y;
    printf("-->El producto de los numeros es: %f\n", producto);
    printf("-->El producto de los numeros sin decimales es: %d", (int)producto);

    return 0;
}