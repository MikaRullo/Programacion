#include "matriz.h"

int correctamenteIngresada(int mat[][COL], int filc)
{
    int i,j;

    for(i=0; i<filc; i++)
    {
        for(j=0; j<filc; j++)
        {
            if(i==j)
            {
                if(mat[i][j]!=0)
                {
                    return 0;
                }

            }
            else
            {
                switch(mat[i][j])
                {
                case 0:
                    if(mat[j][i]!=3)
                    {
                        return 0;
                    }
                    break;
                case 1:
                    if(mat[j][i]!=1)
                    {
                        return 0;
                    }
                    break;
                case 3:
                    if(mat[j][i]!=0)
                    {
                        return 0;
                    }
                    break;

                default:
                    return 0;
                }
            }
        }
    }

    return 1;
}


void cargarVectorMat(int mat[][COL],int filc, int *vec)
{
    int i,j;

    for(i=0; i<filc; i++)
    {
        for(j=0; j<filc; j++)
        {
            if(i==0)
            {
                vec[i]+=mat[i][j];
            }
            if(i==1)
            {
                vec[i]+=mat[i][j];
            }
            if(i==2)
            {
                vec[i]+=mat[i][j];
            }
        }
    }
}
