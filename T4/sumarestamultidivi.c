/*Ejercicio 10. Realizar suma resta multiplicacion y division de dos numeros*/
#include <stdio.h>
int main()
{
    int n1, n2, op, res;
    printf("Introduce el primer numero ");
    scanf("%d", &n1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &n2);
    printf("Introduce operacion suma(1), resta(2), producto(3), division(4): \n");
    scanf("%d", &op);
    if (op == 1)
    {
        res = n1 + n2;
        printf("%d + %d = %d", n1, n2, res);
    }
    else if (op == 2)
    {
        res = n1 - n2;
        printf("%d - %d = %d\n", n1, n2, res);
    }
    else if (op == 3)
    {
        res = n1 * n2;
        printf("%d * %d = %d\n", n1, n2, res);
    }
    else if (op == 4)
    {
        res = n1 / n2;
        printf("%d / %d = %d\n", n1, n2, res);
    }
    return 0;
}