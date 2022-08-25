#include "ej1.h"

int main()
{
    int num;

    printf("\nIngrese un numero para calcular su factorial:");
    scanf("%d",&num);

    printf("\nEl Factorial de %d es %d", num, Factorial(num));

    printf("\nEl Factorial de %d es %d", num, Factorial1(num));


    return 0;
}
