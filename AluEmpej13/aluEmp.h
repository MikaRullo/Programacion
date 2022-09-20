#ifndef ALUEMP_H_INCLUDED
#define ALUEMP_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    unsigned dni;
    char ape[30],
         nom[30];
    double sueldo;

} t_empleados;


typedef struct
{
    unsigned dni;
    char ape[30],
         nom[30];
    float prom;

} t_estudiantes;

int loteDePrueba();
int abrirArchivo(FILE **arch, const char *nombreArch, const char *modo);
int cmpApNomDni(t_estudiantes *Estu,t_empleados *EmP);
//int cmpApeNomDni(const void *d1, const void *d2);
void actualizar(FILE *pfEstu, FILE *pfEmp);
void mostrarEstudiante(const void *dato);
void mostrarEmpleado(const void *dato);
void mostrarArchivoGenerico(FILE *pArch, unsigned tamBytes, void mostrar(const void *dato));
void mostrarArch(FILE **pfEmP, FILE **pfEstu);
#endif // ALUEMP_H_INCLUDED
