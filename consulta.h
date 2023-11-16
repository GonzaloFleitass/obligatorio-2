//
//  consulta.h
//  Obligatorio 2
//
//  Created by Gonzalo Fleitas on 15/11/23.
//

#ifndef consulta_h
#define consulta_h
#include <stdio.h>
#include "Fecha.h"
#include "String.h"
#include "Evaluacion.h"
typedef struct {
    Fecha Fech;
    string motivoConsulta;
    long int ci;
    evaluacion eva;
}consulta;


void cargarConsulta(consulta &a);/*carga todos los datos de la consulta*/
void mostrarConsulta(consulta a); /*muestra todos los datos de consulta*/
Fecha devolverFechConsulta(consulta a);/*devuelve el valor de fecha adentro de consulta*/
void devolverMotivoConsulta(consulta b,string &a);/*devuelve el valor de motivo adentro de consulta*/
long int devolverCiConsulta(consulta b);/*devuelve el valor de la cedula */
evaluacion devolverEvaluacionConsulta(consulta b);/*devuelve el valor de la evaluacion dentro de consulta*/
#endif /* consulta_h */
