//
//  Fecha.h
//  Pr4ej1
//
//  Created by Miguel Lescano on 1/9/23.
//

#ifndef Fecha_h
#define Fecha_h
#include "boolean.h"


typedef struct{
    int dia;
    int mes;
    int anio;
}Fecha;


void CargaFech (Fecha &fec);//Carga la fecha con dia/mes/año.
void Desplegado (Fecha fec);// Muestra la fecha por pantalla
int dardia (Fecha fec);// Devuelve el dia
int darmes (Fecha fec);// Devuelve mes
int daraño (Fecha fec);// Devuelve año
Boolean fechavalida (Fecha fec);//Valida fecha valida

#endif /* Fecha_h */
