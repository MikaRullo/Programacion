#ifndef FUNCIONESP_H_INCLUDED
#define FUNCIONESP_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>


#define FIL 4
#define COL 4
#define VERDADERO 1
#define FALSO 0

#define PARTEDECIMAL(X) (X)-(int)(X)
#define REDONDEO(X) (int)(PARTEDECIMAL(X) >= 0.5 ? (X+1) : (X))

int menu ();
void mostrarMatriz (int mat [][COL], int fil, int col);
int diagonalPrincipal (int mat[][COL], int filc);
int diagonalSecundaria (int mat[][COL], int filc);
int triangularSup (int mat[][COL], int filc);                           //triangular superior sin la diagonal principal
int triangularSupDP (int mat[][COL], int filc);                        //triangular superior con la diagonal principal
int triangularSupDeDS (int mat[][COL], int filc);                      //triangular superior de la diagonal secundaria
int triangularSupDS (int mat[][COL], int filc);                        //triangular superior con la diagonl secundaria
int traingularInf (int mat[][COL], int filc);                          //triangular inferior sin la diagonal principal
int triangularInfDP (int mat[][COL], int filc);                        //triangular inferior con la diagonal principal
void triangulo1 (int mat[][COL], int filc);
void triangulo2 (int mat [][COL], int filc);
void triangulo3 (int mat[][COL], int filc);
void triangulo4(int mat [][COL], int filc);
int simetrica (int mat[][COL], int filc);
int simetricaDP (int mat[][COL], int filc);
int identidad (int mat[][COL], int filc);
int escalar (int mat[][COL], int filc);
void tranponerFilCOl (int mat[][COL], int filc);
int diagonal(int mat[][COL], int filc);
#endif // FUNCIONESP_H_INCLUDED
