#ifndef VECTORES_H_INCLUDED
#define VECTORES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#define TAM 8
int cargarVector(int *vec, int tam, int *ce, int dato);
void mostrarVector(int *vec, int *ce);
void intercambiar(int *a, int *b);
int InsertarEnVecOrdAscen(int *vec, int dato, int *ce, int tam);
void ordenAscendente(int *vec, int *ce);
int ejercicio23(int *vec, int dato, int *ce, int tam);
void ejercicio22(int *vec, int dato, int pos, int *ce);
int insertar(int *vec, int pos, int dato, int *ce, int tam);
void elimElemSegunPos(int *vec, int pos, int *ce);
void elimPrimAparElem(int *vec, int dato, int *ce);
void elimTodAparElem(int *vec, int dato, int *ce);

int esPalindromo(char palabra[], int cant);
int ejercicio28(char palabra[], int cant);


#endif // VECTORES_H_INCLUDED
