#include "mat.h"

int main()
{
    int mat1[][COL1] =
    {
        {3, 2, 1},
        {1, 1, 3},
        {0, 2, 1},
    };

    int mat2[][COL2] =
    {
        {2, 1},
        {1, 0},
        {3, 2},
    };


    int prod[][COL2] =
    {
        {0, 0},
        {0, 0},
        {0, 0},
    };

      int mat3[][COL1] =
    {
        {3, 2, 1},
        {1, 1, 3},
        {0, 2, 1},
    };

      int prod1[][COL1] =
    {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0},
    };



    multiplicacion(mat1,mat3,prod1,FIL1,COL1,FIL1,COL1);
    mostrarMatriz(prod1,FIL1,COL1);

    return 0;




}
