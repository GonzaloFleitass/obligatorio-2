#ifndef CONSULTA_H_INCLUDED
#define CONSULTA_H_INCLUDED

#include <stdio.h>
#include "fecha.h"
#include "string.h"
#include "evaluacion.h"

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

#endif // CONSULTA_H_INCLUDED
