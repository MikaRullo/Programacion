#ifndef MATRICES_H_INCLUDED
#define MATRICES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#define FIL 4
#define COL 4

void mostrarMatris(int mat[][COL], int fil, int col);
void diagonalPrincipal(int mat[][COL], int filc);
void diagonalSecundaria(int mat[][COL], int filc);
void triangularSup (int mat[][COL], int filc);



#endif // MATRICES_H_INCLUDED
