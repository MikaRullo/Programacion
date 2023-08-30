#include "vectores.h"

int main()
{

    int vec[]={5,2,2,1};
    int ce=sizeof(vec)/sizeof(vec[1]);
    int dato;

    mostrarVector(vec,&ce);
    printf("\nIngrese el elemento a eliminar en todas sus apariciones: ");
    scanf("%d", &dato);
    elimTodAparElem(vec, dato, &ce);
    mostrarVector(vec,&ce);


    return 0;
}
