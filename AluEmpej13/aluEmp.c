#include "aluEmp.h"

int loteDePrueba()
{
    FILE *pfEmp = fopen("empleados.dat", "wb");
    FILE *pfEstu = fopen("estudiantes.dat", "wb");


    t_empleados vecEmp[]=
    {
        {10, "Alvarez", "Lucas", 100000},
        {15, "Alvarez", "Lucas", 52131},
        {20, "Gomez",   "Manuel", 12542},
        {12, "Stark",   "Tony",  63332145},
        {35, "Volt",    "Zoe",  1123654},
    };

    t_estudiantes vecEstu[]=
    {
        {10, "Alvarez", "Lucas", 6.9},
        {11, "Alvarez", "Simon", 10},
        {20, "Barnes", "Bucky", 9},
        {12, "Stark",  "Tony",  7.5},
        {35, "Volt",   "Zoe",   8.5},
    };

    if(!pfEmp || !pfEstu)
    {
        return 0;
    }

    fwrite(vecEmp, sizeof(vecEmp),1,pfEmp);
    fwrite(vecEstu, sizeof(vecEstu),1,pfEstu);


    fclose(pfEmp);
    fclose(pfEstu);

    return 1;

}


int abrirArchivo(FILE **arch, const char *nombreArch, const char *modo)
{
    *arch = fopen(nombreArch, modo);
    if(!arch)
        return 0;

    return 1;
}

//int cmpApeNomDni(const void *d1, const void *d2)
//{
//    t_estudiantes estu=*(t_estudiantes*)d1;
//    t_empleados emp=*(t_empleados*)d2;
//
//    int resu=strcmp(estu.ape, emp.ape);
//    if(!resu)
//    {
//        resu=strcmp(estu.ape, emp.nom);
//        if(!resu)
//        {
//            resu=estu.dni - emp.dni;
//        }
//    }
//
//    return resu;
//
//}


int cmpApNomDni(t_estudiantes *Estu,t_empleados *EmP)
{
    int result= strcmp(Estu->ape, EmP->ape);
    if(!result)
    {
        result= strcmp(Estu->nom, EmP->nom);
        if(!result)
        {
            result= Estu->dni - EmP->dni;
        }
    }

    return result;
}


void actualizar(FILE *pfEstu, FILE *pfEmp)
{
    t_empleados emp;
    t_estudiantes estu;

    float aumento = 1+(7.28/100);

    fseek(pfEstu, 0L, SEEK_SET);
    fseek(pfEmp, 0L, SEEK_SET);

    fread(&emp, sizeof(t_empleados),1,pfEmp);
    fread(&estu, sizeof(t_estudiantes),1,pfEstu);

    while(!feof(pfEmp) && !feof(pfEstu))
    {
        if(cmpApNomDni(&estu,&emp)==0)
        {
            if(estu.prom>7)
            {
                emp.sueldo*=aumento;
                fseek(pfEmp, (long int)-sizeof(t_empleados),SEEK_CUR);
                fwrite(&emp,sizeof(t_empleados),1,pfEmp);
                fseek(pfEmp,0L,SEEK_CUR);
            }
            fread(&estu, sizeof(t_estudiantes),1,pfEstu);
            fread(&emp, sizeof(t_empleados),1,pfEmp);
        }
        else
        {
            if(cmpApNomDni(&estu,&emp)>0)
            {
                fread(&emp, sizeof(t_empleados),1,pfEmp);
            }
            else
            {
                fread(&estu, sizeof(t_estudiantes),1,pfEstu);
            }
        }


    }

}



void mostrarEstudiante(const void *dato)
{
    t_estudiantes est = *(t_estudiantes*)dato;
    printf("\nDNI[%d], NOMBRE[%s], APELLIDO[%s], PROMEDIO[%.2f]\n", est.dni, est.nom, est.ape, est.prom);

}

void mostrarEmpleado(const void *dato)
{
    t_empleados emp = *(t_empleados*)dato;
    printf("\nDNI[%d], NOMBRE[%s], APELLIDO[%s], SUELDO[%.2f]\n", emp.dni, emp.nom, emp.ape, emp.sueldo);

}


void mostrarArchivoGenerico(FILE *pArch, unsigned tamBytes, void mostrar(const void *dato))
{
    rewind(pArch);

    void *dato = malloc(tamBytes);

    fread(dato, tamBytes, 1, pArch);

    while(!feof(pArch))
    {
        mostrar(dato);
        fread(dato, tamBytes, 1, pArch);
    }
    free(dato);
}



void mostrarArch(FILE **pfEmp, FILE **pfEstu)
{
    t_empleados emp;
    t_estudiantes estu;

    fseek(*pfEmp, 0L, SEEK_SET);
    fseek(*pfEstu, 0L, SEEK_SET);

    printf("\nEmpleados ya actualizados:\n");

    fread(&emp, sizeof(t_empleados), 1, *pfEmp);

    while(!feof(*pfEmp))
    {
        printf("Dni:%d\t Apellido:%-15s  Nombre:%-15s Sueldo:%.2f\n", emp.dni, emp.ape, emp.nom, emp.sueldo);
        fread(&emp, sizeof(t_empleados), 1, *pfEmp);
    }
    printf("\n");

    printf("\nEstudiantes:\n");
    fread(&estu, sizeof(t_estudiantes), 1, *pfEstu);

    while(!feof(*pfEstu))
    {
        printf("Dni:%d\t Apellido:%-15s  Nombre:%-15s Promedio:%.2f\n", estu.dni, estu.ape, estu.nom, estu.prom);
        fread(&estu, sizeof(t_estudiantes), 1, *pfEstu);
    }
}
