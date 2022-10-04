#ifndef ARCHIVOCUENTASBANCARIAS_H
#define ARCHIVOCUENTASBANCARIAS_H

#include "../ColaEstatica/ColaEstatica.h"

#define ERR_AP_ARCH 45

typedef struct
{
    int nro_cuenta,
        nro_operacion;
    char tipo_oper;
    float monto;
} t_cuenta;

int crearLoteDePruebaCuentaBancaria();
int abrirArch(FILE **pf, const char *nombreArch, const char *modoAp);
int procesarArchivo(FILE *pf_cuenta, FILE *pf_mayores, FILE *pf_menores,
                    t_cola *cola, float montoReferencia);
void mostrarArch (FILE * pf);

#endif // ARCHIVOCUENTASBANCARIAS_H
