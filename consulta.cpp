//
//  consulta.cpp
//  Obligatorio 2
//
//  Created by Gonzalo Fleitas on 15/11/23.
//

#include "consulta.h"
void cargarConsulta(consulta &a){
    printf("ingrese Fecha:");
    CargaFech(a.fech);
    printf("Ingrese Motivo de la consulta:");
    scan(a.motivoConsulta);
    printf("ingrese Ci:");
    scanf("%ld",&a.ci);
    cargarEvaluacion(a.eva);
}
void mostrarConsulta(consulta a){
    Desplegar(a.fech);
    print(a.motivoConsulta);
    printf("La cedula es:%ld",a.ci);
    MostrarEvaluacion(a.eva);
}
Fecha devolverFechConsulta(consulta a);
void devolverMotivoConsulta(consulta b,string &a);
long int devolverCiConsulta(consulta b);
evaluacion devolverEvaluacionConsulta(consulta b);/
