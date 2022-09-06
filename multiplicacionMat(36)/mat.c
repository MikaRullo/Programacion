#include "mat.h"
void multiplicacion(int mat1[][COL1], int mat2[][COL1],int matp[][COL1], int fil1, int col1, int fil2,int col2)
{
    int i,j,k;

    if(col1!= fil2)
    {
        return;
    }

    for(i=0; i<fil1; i++)
    {
        for(j=0; j<col2;j++)
        {
            for(k=0; k<col1; k++)
            {
                matp[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }

    }
}


void mostrarMatriz (int mat [][COL1], int fil, int col)
{
    int i,
        j;

    printf("MATRIZ\n");
    for(i=0; i<fil; i++)
    {
        for(j=0; j<col; j++)
        {

            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
}
