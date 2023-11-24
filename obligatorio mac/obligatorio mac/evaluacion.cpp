#include "evaluacion.h"

void cargarEvaluacion(evaluacion &a){
    int b;
    printf("Opcion 1-En Tratamiento\n 2-Necesita Protesis\n 3-Saludable\nOpcion:");
    scanf("%d",&b);
    switch(b){
        case 1:a=EN_TRATAMIENTO;
            break;
        case 2:a=NECESITA_PROTESIS;
            break;
        case 3:a=SALUDABLE;
            break;
        default:printf("Opcion incorrecta");
    }
}
void mostrarEvaluacion(evaluacion a){
    switch(a){
        case EN_TRATAMIENTO:printf("Paciente en Tratamiento");
            break;
        case NECESITA_PROTESIS:printf("Paciente necesita protesis");
            break;
        case SALUDABLE:printf("Paciente Saludable");
            break;
    }
}
