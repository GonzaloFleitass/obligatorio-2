#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include <stdio.h>

typedef enum {EN_TRATAMIENTO, NECESITA_PROTESIS,
    SALUDABLE}evaluacion;

void cargarEvaluacion(evaluacion &a);//Carga el tipo de evaluacion
void mostrarEvaluacion(evaluacion a);//Muestra el tipo de evaluacion

#endif // EVALUACION_H_INCLUDED
