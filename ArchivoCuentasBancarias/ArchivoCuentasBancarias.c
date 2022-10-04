#include "ArchivoCuentasBancarias.h"

int crearLoteDePruebaCuentaBancaria()
{
    t_cuenta cuenta[]= {{1, 1, 'D', 50},
        {1, 2, 'D', 20},
        {1, 3, 'E', 10},
        {1, 4, 'D', 40},
        {2, 1, 'E', 5},
        {2, 2, 'D', 10},
        {2, 3, 'E', 40},
        {3, 1, 'E', 5},
        {3, 2, 'D', 10},
        {3, 3, 'E', 60},
        {4, 1, 'D', 80},
        {4, 2, 'D', 50},
        {4, 3, 'E', 35}

    };

    FILE * pf=fopen("Archivo_cuentas_bancarias.dat","wb");
    if(!pf)
    {
        fclose(pf);
        return 0;
    }
    fwrite(cuenta, sizeof(cuenta), 1, pf);
    fclose(pf);
    return 1;
}

int abrirArch(FILE **pf, const char *nombreArch, const char *modoAp)
{
    *pf = fopen(nombreArch, modoAp);
    if(!*pf)
    {
        fclose(*pf);
        return 0;
    }
    return 1;
}

int procesarArchivo(FILE *pf_cuenta, FILE *pf_mayores, FILE *pf_menores,
                    t_cola *cola, float montoReferencia)
{
    t_cuenta cuenta, dato_cola;
    int nro_cuenta_actual;
    float monto_total;

    fread(&cuenta, sizeof(t_cuenta), 1, pf_cuenta);
    while(!feof(pf_cuenta))
    {
        nro_cuenta_actual = cuenta.nro_cuenta;
        monto_total=0;
        while(!feof(pf_cuenta) && cuenta.nro_cuenta == nro_cuenta_actual)
        {
            ///if(!colaLlena)?????
            monto_total += cuenta.tipo_oper == 'D' ? cuenta.monto : -cuenta.monto;
            ponerEnCola(cola, &cuenta, sizeof(t_cuenta));
            fread(&cuenta, sizeof(t_cuenta), 1, pf_cuenta);
        }

        if(monto_total >= montoReferencia)
            while(!colaVacia(cola))
            {
                sacarDeCola(cola, &dato_cola, sizeof(t_cuenta));
                fwrite(&dato_cola, sizeof(t_cuenta),1, pf_mayores);
            }
        else
            while(!colaVacia(cola))
            {
                sacarDeCola(cola, &dato_cola, sizeof(t_cuenta));
                fwrite(&dato_cola, sizeof(t_cuenta),1, pf_menores);
            }
    }

    return 1;
}

void mostrarArch (FILE * pf)
{
    t_cuenta cuenta;

    fread(&cuenta, sizeof(t_cuenta), 1, pf);

    while(!feof(pf))
    {
        printf(" %d\t\t%d\t\t%c\t%.2f\n", cuenta.nro_cuenta, cuenta.nro_operacion, cuenta.tipo_oper, cuenta.monto);
        fread(&cuenta, sizeof(t_cuenta), 1, pf);
    }
}
