#include "matriz.h"

int main()
{
    int mat[][COL]={{0,1,3},{1,0,3},{0,0,0}};
    int vec[COL]={0,0,0};



    if(correctamenteIngresada(mat,COL)==0)
    {
        printf("\nIncorrecto");
    }
    else
    {
        printf("\nCorrecto");

        cargarVectorMat(mat,COL,vec);

        printf("\nPuntos equipo 1:%d", *vec);
        printf("\nPuntos equipo 2:%d", *(vec+1));
        printf("\nPuntos equipo 3:%d", *(vec+2));
    }



    return 0;
}
