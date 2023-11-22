#include "menu.h"


void mostarmenu1(int &opcion){


    printf("\t\t\t\t\t*-------------------------------------*\n");
    printf("\t\t\t\t\t|           MENU PRINCIPAL            |\n");
    printf("\t\t\t\t\t|-------------------------------------|\n");
    printf("\t\t\t\t\t|         1. Pacientes                |\n");
    printf("\t\t\t\t\t|-------------------------------------|\n");
    printf("\t\t\t\t\t|         2. Consultas                |\n");
    printf("\t\t\t\t\t|-------------------------------------|\n");
    printf("\t\t\t\t\t|         3. Salir del programa       |\n");
    printf("\t\t\t\t\t*-------------------------------------*\n");

    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);
    printf("\n");
}

void submenualtasybajas (int &opcionsub1){
    printf("\t\t\t\t*---------------------------------------------------------*\n");
    printf("\t\t\t\t|                     Pacientes                           |\n");
    printf("\t\t\t\t|---------------------------------------------------------|\n");
    printf("\t\t\t\t|      1. Registrar nuevo paciente                        |\n");
    printf("\t\t\t\t|---------------------------------------------------------|\n");
    printf("\t\t\t\t|      2. Eliminar Paciente Existente                     |\n");
    printf("\t\t\t\t|---------------------------------------------------------|\n");
    printf("\t\t\t\t|      3. Listar todos los pacientes registrados          |\n");
    printf("\t\t\t\t|---------------------------------------------------------|\n");
    printf("\t\t\t\t|      4. Listar pacientes sin consultas registradas      |\n");
    printf("\t\t\t\t|---------------------------------------------------------|\n");
    printf("\t\t\t\t|      5. Volver al menu principal                        |\n");
    printf("\t\t\t\t*---------------------------------------------------------*\n");


    printf("Ingrese su opcion: ");
    scanf("%d", &opcionsub1);
    printf("\n");
    }

    void submenuconsultas(int &opcionsub2){

    printf("\t\t\t\t*---------------------------------------------------------------*\n");
    printf("\t\t\t\t|                      Consultas                                |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      1. Registrar nueva consulta                              |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      2. Listar todas las consultas de un paciente (Cedula)    |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      3. Listar todas las consultas (Fecha)                    |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      4. Buscar pacientes con X cantidad de consultas          |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      5. Obtener Cantidad de Consultas de cada tipo            |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      6. Obtener cantidad de consultas en X dia                |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      7. Obtener CI del paciente con mas consultas y su CI     |\n");
    printf("\t\t\t\t|---------------------------------------------------------------|\n");
    printf("\t\t\t\t|      8. Volver al menu principal                              |\n");
    printf("\t\t\t\t*---------------------------------------------------------------*\n");


    printf("Ingrese su opcion: ");
    scanf("%d", &opcionsub2);
    printf("\n");
}
