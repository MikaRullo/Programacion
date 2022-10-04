#include "ArchivoCuentasBancarias.h"

int main()
{
    FILE * pf_cuenta, * pf_mayores, * pf_menores;
    t_cola cola;
    float montoReferencia = 85.5;

    if(!crearLoteDePruebaCuentaBancaria())
        puts("No se pudo crear lote...");

    if(! abrirArch(&pf_cuenta, "Archivo_cuentas_bancarias.dat", "rb"))
        return ERR_AP_ARCH;
    if(! abrirArch(&pf_mayores, "ArchMayores.dat", "w+b"))
        return ERR_AP_ARCH;
    if(! abrirArch(&pf_menores, "ArchMenores.dat", "w+b"))
        return ERR_AP_ARCH;

//    mostrarArch(pf_cuenta);
    crearCola(&cola);
    procesarArchivo(pf_cuenta, pf_mayores, pf_menores, &cola, montoReferencia);

    rewind(pf_mayores);
    rewind(pf_menores);

    printf("Movimientos de las cuentas con saldo acumulado mayor a $%.2f :\n",
           montoReferencia);
    puts(" CUENTA\t\tOPERACION\tMOV\tMONTO");
    mostrarArch(pf_mayores);

    printf("\n\nMovimientos de las cuentas con saldo acumulado menor a $%.2f :\n",
           montoReferencia);
    puts(" CUENTA\t\tOPERACION\tMOV\tMONTO");
    mostrarArch(pf_menores);

    fclose(pf_cuenta);
    fclose(pf_mayores);
    fclose(pf_menores);

    return 0;
}
