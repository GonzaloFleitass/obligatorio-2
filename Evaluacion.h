//
//  Evaluacion.h
//  obli
//
//  Created by Gonzalo Fleitas on 16/11/23.
//

#ifndef Evaluacion_h
#define Evaluacion_h
#include <stdio.h>
typedef enum {EN_TRATAMIENTO, NECESITA_PROTESIS,
    SALUDABLE}evaluacion;

void cargarEvaluacion(evaluacion &a);
void mostrarEvaluacion(evaluacion a);
#endif /* Evaluacion_h */
