/*Ejercicio 7. Leer un numero N e imprimir la suma de los N primeros numeros*/
#include <stdio.h>

int n1 = 0, n2 = 0;

int main()
{

    printf("Introduce el numero\n");
    scanf("%i", &n1);
    for (int i = 0; i < (n1 + 1); i++)
    {
        printf("%i\n", n2);
        n2 = n2 + 1;
    }
    return 0;
}