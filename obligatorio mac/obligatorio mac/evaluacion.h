#ifndef EVALUACION_H_INCLUDED
#define EVALUACION_H_INCLUDED
#include <stdio.h>

typedef enum {EN_TRATAMIENTO, NECESITA_PROTESIS,
    SALUDABLE}evaluacion;

void cargarEvaluacion(evaluacion &a);
void mostrarEvaluacion(evaluacion a);

#endif // EVALUACION_H_INCLUDED
