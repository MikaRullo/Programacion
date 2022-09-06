#include "Matrices.h"

int main()
{
    int mat[][COL]=
    {
        {7,5,6,1},
        {5,7,6,3},
        {1,2,3,6},
        {7,5,1,3},
    };

    printf("\nMatris:\n");
    mostrarMatris(mat,FIL,COL);

    printf("\nDiagonal Principal:\n");
    diagonalPrincipal(mat,FIL);

    printf("\nDiagonal secundaria:\n");
    diagonalSecundaria(mat,FIL);


    printf("\nTriangulo Superior sin Diagonal principal:\n");
    triangularSup(mat,FIL);













    return 0;
}
