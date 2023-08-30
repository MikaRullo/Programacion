#include "vectores.h"
int cargarVector(int *vec, int tam, int *ce, int dato)
{
    if((*ce+1)>tam)
    {
        return 0;
    }

    vec+=*ce;
    *vec=dato;
    (*ce)++;

    return1;
}

void mostrarVector(int *vec, int *ce)
{
    int i;
    for(i = 0; i < *ce; i++, vec++)
    {
        printf("\n[%d]", *vec);
    }
}

int insertar(int *vec, int pos, int dato, int *ce, int tam)
{
    int aux;

    if(pos > tam || pos <= 0)
        return 0;

    vec += pos-1;

    while(pos <= *ce)
    {
        aux = *vec;
        *vec = dato;
        dato = aux;

        vec++;
        pos++;
    }

    return 1;
}

void ejercicio22(int *vec, int dato, int pos, int *ce)
{

    int aux;

    if(pos > *ce)
        pos = *ce+1;

    vec += pos-1;
    (*ce)++;

    while(pos <= *ce)
    {
        aux = *vec;
        *vec = dato;
        dato = aux;
        vec++;
        pos++;
    }
}


int InsertarEnVecOrdAscen(int *vec, int dato, int *ce, int tam)
{
    int pos=1, *pVecpos=vec;

    ///se supone que ya esta ordenado

    while(dato>*pVecpos && pos<=*ce)
    {
        pos++;
        pVecpos++;
    }

    if(pos<=tam)
    {
        insertar(vec,pos,dato,ce,TAM);
    }
    else
    {
        return 0;
    }

    return 1;

}

int ejercicio23(int *vec, int dato, int *ce, int tam)
{
    int pos=1, *pVecPos=vec;

    ordenAscendente(vec, ce);

    while(dato > *pVecPos && pos <= *ce)
    {
        pos++;
        pVecPos++;
    }
    if(pos<=tam)
        ejercicio22(vec, dato, pos, ce);
    else
        return 0;

    return 1;
}

void ordenAscendente(int *vec, int *ce)
{
    int i=1, j, hubocambio=1, *pVec, *p2Vec;

    while(hubocambio && i<*ce)
    {
        pVec = vec;
        p2Vec = vec+1;
        hubocambio=0;

        for(j=0; j<(*ce-i); j++)
        {
            if(*pVec > *p2Vec)
            {
                intercambiar(pVec, p2Vec);
                hubocambio=1;
            }
            pVec++;
            p2Vec++;
        }
        i++;
    }
}

void intercambiar(int *a, int *b)
{
    int aCopia;

    aCopia = *a;
    *a = *b;
    *b = aCopia;
}



void elimElemSegunPos(int *vec, int pos, int *ce)
{
    int *SigElem;

    vec+= pos-1;
    SigElem = vec;

     if(pos <= *ce)
     {
         while(pos < *ce)
         {
             SigElem++;
             *vec=*SigElem;
             vec++;
             pos++;
         }

        (*ce)--;
     }

//    int cantElem = (int)sizeof(vec) / sizeof(int);
//
//    *ce = cantElem + 1;

}

void elimPrimAparElem(int *vec, int dato, int *ce)
{
    int i=1, *sigElem;


    while(*vec != dato && i <= *ce)
    {
       i++;
       vec++;
    }

    sigElem = vec;

    if(i <= *ce)
    {
        while(i < *ce)
        {
            sigElem++;
            *vec = *sigElem;
            vec++;
            i++;
        }
        (*ce)--;
    }

}

void elimTodAparElem(int *vec, int dato, int *ce)
{
    int i=1, *pVecSig, eliminados=0;

    while(*vec != dato && i <= *ce)
    {
       i++;
       vec++;
    }

    pVecSig = vec+1;

    if(i <= *ce)
    {
        eliminados++;
        while(i < *ce)
        {
          if(*pVecSig  != dato)
          {
              *vec = *pVecSig;
              vec++;
          }
          else
          {
              eliminados++;
          }

          i++;
          pVecSig++;
        }

        (*ce) -= eliminados;

    }

}


int esPalindromo(char palabra[], int cant)
{
    char *pIni, *pFin;


    pIni = palabra;
    pFin = palabra +(cant-1);

    while(pIni < pFin)
    {
        if((*pIni)!= (*pFin))
        {
            return 0;
        }
        else
        {
            pIni++;
            pFin--;
        }
    }

    return 1;
}


int ejercicio28(char palabra[], int cant)
{
   int i, suma=0;

   for(i=0; i<cant; i++)
   {
       suma+=palabra[i];
   }

   return suma;
}
