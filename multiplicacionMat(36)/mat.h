#ifndef MAT_H_INCLUDED
#define MAT_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define FIL1 3
#define COL1 3


#define FIL2 3
#define COL2 2

#define FIL3 3
#define COL3 2

void multiplicacion(int mat1[][COL1], int mat2[][COL1],int matp[][COL1], int fil1, int col1, int fil2,int col2);
void mostrarMatriz (int mat [][COL1], int fil, int col);

#endif // MAT_H_INCLUDED
