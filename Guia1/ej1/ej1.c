#include "ej1.h"

int Factorial(int num)
{
    int i, fac=1;

    for(i=num; i>0; i--)
    {
        fac=fac*i;
    }

    return fac;
}

int Factorial1(int num)
{
    int i, fac=1;

    for(i=1; i<=num; i++)
    {
        fac=fac*i;
    }

    return fac;
}
