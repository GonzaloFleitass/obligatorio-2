#include "menu.h"


void mostarmenu1(int &opcion){


    printf("*-------------------------------------*\n");
    printf("|           MENU PRINCIPAL            |\n");
    printf("|-------------------------------------|\n");
    printf("|         1. Pacientes                |\n");
    printf("|-------------------------------------|\n");
    printf("|         2. Consultas                |\n");
    printf("|-------------------------------------|\n");
    printf("|         3. Salir del programa       |\n");
    printf("*-------------------------------------*\n");

    printf("Ingrese su opcion: ");
    scanf("%d", &opcion);
    printf("\n");
}

void submenualtasybajas (int &opcionsub1){
    printf("*---------------------------------------------------------*\n");
    printf("|                     Pacientes                           |\n");
    printf("|---------------------------------------------------------|\n");
    printf("|      1. Registrar nuevo paciente                        |\n");
    printf("|---------------------------------------------------------|\n");
    printf("|      2. Eliminar Paciente Existente                     |\n");
    printf("|---------------------------------------------------------|\n");
    printf("|      3. Listar todos los pacientes registrados          |\n");
    printf("|---------------------------------------------------------|\n");
    printf("|      4. Listar pacientes sin consultas registradas      |\n");
    printf("|---------------------------------------------------------|\n");
    printf("|      5. Volver al menu principal                        |\n");
    printf("*---------------------------------------------------------*\n");


    printf("Ingrese su opcion: ");
    scanf("%d", &opcionsub1);
    printf("\n");
    }

    void submenuconsultas(int &opcionsub2){

    printf("*---------------------------------------------------------------*\n");
    printf("|                      Consultas                                |\n");
    printf("|---------------------------------------------------------------|\n");
    printf("|      1. Registrar nueva consulta                              |\n");
    printf("|---------------------------------------------------------------|\n");
    printf("|      2. Listar todas las consultas de un paciente (Cedula)    |\n");
    printf("|---------------------------------------------------------------|\n");
    printf("|      3. Listar todas las consultas (Fecha)                    |\n");
    printf("|---------------------------------------------------------------|\n");
    printf("|      4. Buscar pacientes con X cantidad de consultas          |\n");
    printf("|---------------------------------------------------------------|\n");
    printf("|      5. Obtener Cantidad de Consultas de cada tipo            |\n");
    printf("*---------------------------------------------------------------|\n");
    printf("|      6. Obtener cantidad de consultas en X dia                |\n");
    printf("*---------------------------------------------------------------|\n");
    printf("|      7. Obtener el paciente con la mayor cantidad de consulta |\n");
    printf("*---------------------------------------------------------------*\n");


    printf("Ingrese su opcion: ");
    scanf("%d", &opcionsub2);
    printf("\n");
}
