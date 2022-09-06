#include "FuncionesP.h"

int main()
{
    int mat[FIL][COL] = {{7,5,6,1}, {5,7,6,3}, {1,2,3,6}, {7,5,1,3}};
    int mat1[FIL][COL] = {{1,0,0,0}, {0,5,0,0}, {0,0,7,0}, {0,0,0,4}};

    int operacion;



    operacion= menu();

    while(operacion!=0)
    {
        switch(operacion)
        {
        case 1:
        {
            mostrarMatriz(mat, FIL, COL);
            break;
        }
        case 2:
        {
            printf("\nTraza:%d",diagonalPrincipal(mat,FIL));
            break;
        }
        case 3:
        {
            printf("\nTraza:%d",diagonalSecundaria(mat,FIL));
            break;
        }
        case 4:
        {
            printf("\nSuma:%d",triangularSup(mat, FIL));
            break;
        }
        case 5:
        {
            printf("\nSuma:%d",triangularSupDP(mat,FIL));
            break;
        }
        case 6:
        {
            printf("\nSuma:%d",triangularSupDeDS(mat,FIL));
            break;
        }
        case 7:
        {
            printf("\nSuma:%d",triangularSupDS(mat,FIL));
            break;
        }
        case 8:
        {
             printf("\nSuma:%d",traingularInf(mat,FIL));
             break;
        }
        case 9:
        {
            printf("\nSuma:%d",triangularInfDP(mat,FIL));
            break;
        }
        case 10:
        {
            triangulo1(mat,FIL);
            break;
        }
        case 11:
        {
            triangulo2(mat,FIL);
            break;
        }
        case 14:

        {

            if(simetrica(mat1,FIL))
            {
                printf("\n La matriz es simetrica");
            }
            else
            {
                printf("\n La matriz no es simetrica");
            }
            break;
        }
        case 15:
        {

            if(simetricaDP(mat,FIL))
            {
                printf("\n La Diagonal es simetrica");
            }
            else
            {
                printf("\n La Diagonal no es simetrica");
            }
            break;
        }
        case 16:
        {

            if(identidad(mat,FIL))
            {
                printf("\n Es una Matriz Identidad");
            }
            else
            {
                printf("\n No es una Matriz Identidad");
            }
            break;
        }
        case 17:
        {

            if(escalar(mat,FIL))
            {
                printf("\n Es una Matriz Escalar");
            }
            else
            {
                printf("\n No es una Matriz Escalar");
            }
            break;
        }
        case 18:
        {
            tranponerFilCOl(mat,FIL);
            break;
        }
        case 19:
        {

            if(diagonal(mat1,FIL))
            {
                printf("\n Es una Matriz Diagonal");
            }
            else
            {
                printf("\n No es una Matriz Diagonal");
            }
            break;
        }






        }

        operacion=menu();
    }


    return 0;
}
