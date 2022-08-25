#include "ej2.h"


int Factorial(int num)
{
    int i, fac=1;

    for(i=num; i>0; i--)
    {
        fac=fac*i;
    }

    return fac;
}


int Combinatorio(int m,int n)
{
   int facM, facN,facRes;

   facM=Factorial(m);
   facN=Factorial(n);
   facRes=Factorial(m-n);


    return (facM/(facN*facRes));

}
