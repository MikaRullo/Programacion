#include "ej2.h"

int main()
{
    int n,m;

    do
    {
        printf("\nIngrese un numero mayor o igual a 0: ");
        scanf("%d",&n);
    }
    while(n<0);

    do
    {
        printf("\nIngrese un numero mayor o igual al anterior ingresado(%d): ",n);
        scanf("%d", &m);

    }
    while(m<n);


    printf("\nEl combinatorio de %d sobre %d es:%d ", m,n,Combinatorio(m,n));

    return 0;


}
