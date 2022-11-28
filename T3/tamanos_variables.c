/*Ejercicio 4. Imprimir tamanos de una variable tipo float y de una tipo int*/
#include <stdio.h>

int main()
{
    float f;
    short int i;

    f = 12.121212;
    i = 9;

    printf("Tamano float f: %d \n", sizeof f);
    printf("Tamano de tipo float es %d \n", sizeof(float));
    printf("Tamano entero corto i: %d \n", sizeof i);

    return 0;
}