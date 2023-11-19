//
//  consulta.cpp
//  Obligatorio 2
//
//  Created by Gonzalo Fleitas on 15/11/23.
//

#include "consulta.h"

void cargarConsulta(consulta &a){
    printf("ingrese Fecha:");
    CargaFech(a.Fech);
    printf("Ingrese Motivo de la consulta:");
    scan(a.motivoConsulta);
    printf("ingrese Ci:");
    scanf("%ld",&a.ci);
    cargarEvaluacion(a.eva);
}
void mostrarConsulta(consulta a){
    printf("Fecha: ");
    Desplegado(a.Fech);
    printf("Motivo de Consulta: ");
    print(a.motivoConsulta);
    printf("Cedula Id: %ld",a.ci);
    printf("Evaludacion: ");
    mostrarEvaluacion(a.eva);
}
Fecha devolverFechConsulta(consulta b){
return b.Fech;
}
void devolverMotivoConsulta(consulta b,string &a){
    strcop(b.motivoConsulta,a);
}
long int devolverCiConsulta(consulta b){
return b.ci;
}
evaluacion devolverEvaluacionConsulta(consulta b){
    return b.eva;
}
