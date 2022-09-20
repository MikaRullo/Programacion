#include "aluEmp.h"

int main()
{
    if(!loteDePrueba())
    {
        printf("\nAlgun archivo no se pudo crear");
        return -1;
    }

    FILE *pfEmp, *pfEstu;
    if(!abrirArchivo(&pfEmp,"empleados.dat","r+b"))
    {
        printf("\nNo se pudo abrir el archivo");
        return -1;
    }

    if(!abrirArchivo(&pfEstu,"estudiantes.dat","rb"))
    {
        printf("\nNo se pudo abrir el archivo");
        fclose(pfEmp);
        return -1;
    }


//    FILE *pfEmp = fopen("empleados.dat", "r+b");
//    if(!pfEmp)
//    {
//       printf("\n El archivo no se pudo abrir");
//       return -1;
//    }
//
//    FILE *pfEstu = fopen("estudiantes.dat", "rb");
//    if(!pfEstu)
//    {
//       fclose(pfEmp);
//       printf("\n El archivo no se pudo abrir");
//       return -1;
//    }



    //mostrarArch(&pfEmp, &pfEstu);

    printf("\nAlumnos");
    mostrarArchivoGenerico(pfEstu,sizeof(t_estudiantes),mostrarEstudiante);

    //rewind(pfEmp);

    printf("\nEmpleados actualizados");
    actualizar(pfEstu, pfEmp);
    mostrarArchivoGenerico(pfEmp,sizeof(t_empleados),mostrarEmpleado);

    fclose(pfEmp);
    fclose(pfEstu);

    return 0;
}

