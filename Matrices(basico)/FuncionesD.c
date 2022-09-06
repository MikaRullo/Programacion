#include "FuncionesP.h"

int menu()
{
    int op;

    printf("\n");
    printf("\n MENU \n");
    printf("\n 1: Ver matriz");
    printf("\n 2: Ver Diagonal Principal");
    printf("\n 3: Ver Diagonal Secundaria");
    printf("\n 4: Triangular Superior");
    printf("\n 5: Triangular Superior incluyendo la Diagonal Principal");
    printf("\n 6: Triangular Superior Respecto La Diagonal Secundaria");
    printf("\n 7: Triangular superior con la Diagonal Secundaria");
    printf("\n 8: Triangular Inferior:");
    printf("\n 9: Triangular ingerior incluyendo la Diagonal Principal");
    printf("\n 10: Triangulo 1");
    printf("\n 11: Triangulo 2");
    printf("\n 14: Es Simetrica");
    printf("\n 15: Es simetrica la diagonal principal");
    printf("\n 16: Es Matriz Identidad");
    printf("\n 17: Es una matriz Escalar");
    printf("\n 18: Transponer la matriz");
    printf("\n 19: Es diagonal");

    printf("\n 0: Salir");


    do
    {
        printf("\n Seleccione la operacion que desee realizar:");
        scanf("%d", &op);
        printf("\n");

    }while(op<0 || op>19);

    return op;

}


void mostrarMatriz (int mat [][COL], int fil, int col)
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

int diagonalPrincipal (int mat[][COL], int filc)
{
    int i, suma=0;

     printf("Diagonal principal:");

     for(i=0; i<filc; i++)
     {
         printf("\n \t  %d", mat[i][i]);
         suma+=mat[i][i];
     }

     return suma;

}


int diagonalSecundaria (int mat[][COL], int filc)
{
    int i,suma=0;

    printf("Diagonal Secundaria:");

    for(i=0; i<filc; i++)
    {
        printf("\n \t %d", mat[i][filc-1-i]);
        suma+=mat[i][filc-1-i];
    }
    return suma;
}


int triangularSup (int mat[][COL], int filc)
{
    int i,
        j,
        suma=0;

    printf("Triangular Superior:");

    for(i=0; i<filc-1; i++)
    {
        for(j=i+1; j<filc; j++)
        {
            printf("\n \t %d", mat[i][j]);
            suma+=mat[i][j];
        }
    }

    return suma;

}

int triangularSupDP (int mat[][COL], int filc)
{
    int i,
        j,
        suma=0;

    printf("Triangular Superior Inluyendo Diagonal principal:");

    for(i=0; i<filc; i++)
    {
        for(j=i; j<filc; j++)
        {
            printf("\n \t %d", mat[i][j]);
            suma+=mat[i][j];
        }
    }

    return suma;

}

int triangularSupDeDS (int mat[][COL], int filc)
{
    int i,
        j,
        suma=0;

    printf("Triangular Superior Respecto a la Diagonal Secundaria:");

    for(i=0; i<filc-1; i++)
    {
        for(j=0; j<filc-1-i; j++)
        {
            printf("\n \t %d", mat[i][j]);
            suma+=mat[i][j];

        }
    }
    return suma;

}

int triangularSupDS (int mat[][COL], int filc)
{
    int i,
        j,
        suma=0;

    printf("Triangular Superior con la Diagonal Secundaria:");

    for(i=0; i<filc; i++)
    {
        for(j=0; j<filc-i; j++)
        {
            printf("\n \t %d", mat[i][j]);
            suma+=mat[i][j];
        }
    }
    return suma;

}


int traingularInf (int mat[][COL], int filc)
{
    int i,
        j,
        suma;

    printf("Triangular Inferior:");

    for(i=1; i<filc; i++)
    {
        for(j=0; j<i; j++)
        {
            printf("\n \t %d", mat[i][j]);
            suma+=mat[i][j];

        }
    }
    return suma;
}

int triangularInfDP (int mat[][COL], int filc)
{
    int i,
        j,
        suma=0;

    printf("Triangular Inferior con la Diagonal Principal:");

    for(i=0; i<filc; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("\n \t %d", mat[i][j]);
            suma+=mat[i][j];
        }
    }

    return suma;
}

void triangulo1 (int mat[][COL], int filc)
{
    int i,
        j,
        medio= REDONDEO((float)filc/2);

    for(i=0; i<medio; i++)
    {

        for(j=i; j<filc-i; j++)
        {
            printf("\n \t %d", mat[i][j]);
        }

    }
}

void triangulo2 (int mat [][COL], int filc)
{
    int i,
        j,
        medio= REDONDEO((float)filc/2);

        for(i=0; i<medio; i++)
        {
            for(j=filc-1-i ; j<filc ; j++)
            {
                printf("\n \t %d", mat[i][j]);
            }
        }

        for(i=medio; i<filc; i++)
        {
            for(j=i; j<filc; j++)
            {
                printf("\n \t %d", mat[i][j]);
            }
        }

}


int simetrica (int mat[][COL], int filc)
{
    int i,
        j;

    for(i=0; i<filc; i++)
    {
        for(j=i+1; j<filc; j++)
        {
            if(mat[i][j]!=mat[j][i])
            {
                return FALSO;
            }
        }
    }
    return VERDADERO;
}

int simetricaDP (int mat[][COL], int filc)
{
    int i,
        j=filc-1;

    for(i=0; i<filc; i++)
     {
        if(mat[i][i]!=mat[j][j])
        {
            return FALSO;
        }
        j--;
     }
     return VERDADERO;

}

int identidad (int mat[][COL], int filc)
{
    int i,
        j;

    for(i=0; i<filc; i++)
    {
        for(j=i; j<filc; j++)
        {
            if(j==i)
            {
                if(mat[i][j]!=1)
                return FALSO;
            }
            else
            {
                if(mat[i][j]!=0 || mat [j][i]!=0)
                {
                    return FALSO;
                }
            }

        }
    }

    return VERDADERO;
}

int escalar (int mat[][COL], int filc)
{
    int i,
        j;

    for(i=0; i<filc; i++)
    {
        for(j=i; j<filc; j++)
        {
            if(j==i)
            {
                if(mat[i][j]!= mat[0][0])
                return FALSO;
            }
            else
            {
                if(mat[i][j]!=0 || mat [j][i]!=0)
                {
                    return FALSO;
                }
            }

        }
    }

    return VERDADERO;
}

void tranponerFilCOl (int mat[][COL], int filc)
{
    int i,
        j,
        copia;


    for(i=0; i<filc-1; i++)
    {
        for(j=i+1; j<filc; j++)
        {
            copia = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = copia;
        }

    }

    mostrarMatriz(mat, FIL,COL);
}


int diagonal (int mat[][COL], int filc)
{
    int i,
        j;

    for(i=0; i<filc; i++)
    {
        for(j=i; j<filc; j++)
        {
            if((j==i && mat[i][j]==0) ||(i!=j &&mat[i][j]!=0 ) )
            {
               return FALSO;

            }

        }
    }

    return VERDADERO;
}


