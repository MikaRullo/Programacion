#include "String.h"

int mistrlen (char *cad)
{
    int cantcarac=0;

    while(*cad)
    {
        cantcarac++;
        cad++;
    }
    return cantcarac;

}

char *mistrncat(char *caddestino, char *cadorigen)
{
    char *inicio=caddestino;

    while(*caddestino)
    {
        caddestino++;
    }

    while(*cadorigen)
    {
        *caddestino= *cadorigen;
        caddestino++;
        cadorigen++;
    }
    *caddestino='\0';
    return inicio;
}

char *mistrchr (char *cad, int c)
{
    char *inicio=NULL;
    while(*cad || *cad!=c)
    {

        if(*cad==c)
        {
            return cad;
        }
        cad++;

    }
    return inicio;

}

char *mistrrchr (char *cad, char c)
{
    int i,
        fin=mistrlen(cad);

    cad+=fin;

    for(i=0; i<=fin; i++)
    {
        if(*cad!= c)
        {
            cad--;
        }
        else
        {
            return cad;
        }
    }
    return NULL;
}



int mistrcmp ( const char *cad, const char *cad2)
{
    int resu=0;
    while(*cad==*cad2 && *cad)
    {
        cad++;
        cad2++;
        resu = *cad - *cad2;

    }

    return resu;

}
int mistricmp (const char *cad, const char *cad2)

{
    int resu;

    while(A_MINUSCULA(*cad) == A_MINUSCULA(*cad2) && *cad)
    {
        cad++;
        cad2++;
        resu= A_MINUSCULA(*cad) - A_MINUSCULA(*cad2);

    }
    return resu;
}

char *mistrupr ( char *cad)
{
    char *ini=cad;
    while(*cad)
    {
        if(*cad>='a' && *cad<='z')
        {
            *cad-=32;
        }
        cad++;
    }
    return ini;
}

char *mistrlwr( char *cad)
{
    char *ini=cad;
    while(*cad)
    {
        if(*cad>='A' && *cad<='Z')
        {
            *cad+=32;
        }
        cad++;
    }
    return ini;
}


int mitolower(int c)
{
    return A_MINUSCULA(c);

}
int mitoupper(int c)
{
    return A_MAYUSCULA(c);
}


int contienesubcadena(char* cad, char* subcad)
{
    while(*cad && *cad == *subcad)
    {
        cad++;
        subcad++;
    }

    return !*subcad;
}


char *mistrstr (char *cad, char *subcad)
{
    while(*cad && !contienesubcadena(cad,subcad))
    {
        cad++;
    }

    if(!*cad)
    {
        return NULL;
    }

    return cad;
}

int miatoi(const char *numptr)
{
    int val=0,b;
    while((*numptr==' ' && *numptr )|| *numptr=='\t' || *numptr=='\n'|| *numptr=='\r')
    {
        numptr++;
    }
    if(*numptr=='-' || *numptr=='+')
    {
        if(*numptr=='-')
            b=1;

        numptr++;
    }
    while(*numptr>='0' && *numptr<='9')
    {
        val*=10;
        val+=*numptr-'0';
        numptr++;
    }
    return (b==1)?(-1)*val:val;
}

char *mistrcpy(char *cadDest, char *cadOrig)
{
    char *inicioCad=cadDest;

    while(*cadOrig)
    {
        *cadDest = *cadOrig;
        cadOrig++;
        cadDest++;
    }
    *cadDest = '\0';

    return inicioCad;
}

