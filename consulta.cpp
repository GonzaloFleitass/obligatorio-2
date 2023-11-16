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
Fecha devolverFechConsulta(consulta a){
return a.fech;
}
void devolverMotivoConsulta(consulta b,string &a){
return a.print;
}
long int devolverCiConsulta(consulta b){
return b.ci;
}
evaluacion devolverEvaluacionConsulta(consulta b){
    return b.eva;
}
