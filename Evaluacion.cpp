//
//  Evaluacion.cpp
//  obli
//
//  Created by Gonzalo Fleitas on 16/11/23.
//

#include "Evaluacion.h"
void cargarEvaluacion(evaluacion &a){
    int b;
    scanf("%d",&b);
    switch(b){
        case 1:a=EN_TRATAMIENTO;
            break;
        case 2:a=NECESITA_PROTESIS;
            break;
        case 3:a=SALUDABLE;
            break;
        default:printf("opcion incorrecta");
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
