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

