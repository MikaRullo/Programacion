#include "Matrices.h"

void mostrarMatris(int mat[][COL], int fil, int col)
{
    int i,j;

    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }

}


void diagonalPrincipal(int mat[][COL], int filc)
{
    int i;

    for(i=0; i<filc; i++)
    {
        printf("\t%d\n", mat[i][i]);
    }
    printf("\n");
}


void diagonalSecundaria(int mat[][COL], int filc)
{
    int i;

    for(i=0; i<filc; i++)
    {
        printf("\t%d\n", mat[i][filc-i-1]);
    }
    printf("\n");
}


void triangularSup (int mat[][COL], int filc)
{
    int i,j;


    for(i=0; i<filc-1; i++)
    {
        for(j=i+1; j<filc; j++)
        {
            printf("\t%d\n", mat[i][j]);
        }
        printf("\n");

    }


}
