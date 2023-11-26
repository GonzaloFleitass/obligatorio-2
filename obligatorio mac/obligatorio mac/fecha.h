#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
#include "boolean.h"


typedef struct fecha{
    int dia;
    int mes;
    int anio;
}Fecha;


void CargaFech (Fecha &fec);//Carga la fecha con dia/mes/año.
void Desplegado (Fecha fec);// Muestra la fecha por pantalla
int dardia (Fecha fec);// Devuelve el dia
int darmes (Fecha fec);// Devuelve mes
int daranio (Fecha fec);// Devuelve año
boolean fechavalida (Fecha fec);//Valida fecha valida
boolean comparaFecha(Fecha a, Fecha b);//compara dos fecha si son iguales o no
boolean comparaFechaPosterior(Fecha a, Fecha b);// Compara si una fechanes igual o posterior.


#endif // FECHA_H_INCLUDED
