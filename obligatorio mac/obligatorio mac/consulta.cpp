//
//  consulta.cpp
//  Obligatorio 2
//
//  Created by Gonzalo Fleitas on 15/11/23.
//

#include "consulta.h"

void cargarConsulta(consulta &a,long int ci,Fecha b){

    printf("Ingrese Motivo de la consulta:");
    strcrear (a.motivoConsulta);
    scan(a.motivoConsulta);
    a.ci=ci;
    cargarEvaluacion(a.eva);
    a.Fech=b;
   
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


void bajarConsulta (consulta b, FILE * f){
    fwrite (&b.Fech, sizeof(fecha), 1, f);
    Bajar_String(b.motivoConsulta, f);
    fwrite(&b.ci, sizeof(long int), 1, f);
    fwrite(&b.eva, sizeof(evaluacion), 1, f);
}

void levantarConsulta (consulta b, FILE * f){
    fread (&b.Fech, sizeof(fecha), 1, f);
    Levantar_String(b.motivoConsulta, f);
    fread(&b.ci, sizeof(long int), 1, f);
    fread(&b.eva, sizeof(evaluacion), 1, f);
}
