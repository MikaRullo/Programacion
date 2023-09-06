#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define A_MINUSCULA(x) (((x)>='A' && (x)<='Z') ? ((x)+32) : (x))
#define A_MAYUSCULA(x) (((x)>='a' && (x)<='z') ? ((x)-32) : (x))



int mistrlen (char *cad);                                  // cuenta cantidad de caracteres validos, sin contar el \0

char *mistrncat(char *caddestino, char *cadorigen);        // copia cadoriginal al final de caddestino

char *mistrchr (char *cad, int c);                         // muestra a partir de la primera aparicion de un caracter

char *mistrrchr (char *cad, char c);                       // muestra a partir de la ultima aparicion de un caracter

int mistrcmp (const char *cad, const char *cad2);          // compara 2 cadenas y da un entero que dice si es menor, mayor o igual

int mistricmp (const char *cad, const char *cad2);         // como la anterior pero necesito pasar todo a minusculas

char *mistrupr (char *cad);                                // Convierte toda la cadena en mayus

char *mistrlwr (char *cad);                                // Convierte toda la cadena en minus

int mitolower (int c);                                     // Convierte un caracter a minuscula

int mitoupper  (int c);                                    // Convierte un caracter en mayusculas

int contienesubcadena (char* cad, char* subCad);           // complementaria para strstr

char *mistrstr (char *cad, char *subcad);                  // Mustra una cadena a partir de el contenido de otra cadena

int miatoi (const char *numptr);                           // Convierte la porción inicial de la cadena apuntada por numPtr a una representación de int

char *mistrcpy(char *cadDest, char *cadOrig);              // Copia una cadena en otra




#endif // STRING_H_INCLUDED
