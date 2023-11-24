#ifndef ARBOLPACIENTES_H_INCLUDED
#define ARBOLPACIENTES_H_INCLUDED
#include "paciente.h"
#include <stdio.h>

typedef struct nodoA {
                    Paciente p;
                    nodoA * hizq;
                    nodoA * hder;
                    } nodo;

typedef nodo * ArboldePacientes;

void Crear (ArboldePacientes &a);

void Insert (ArboldePacientes &a, Paciente p);

boolean Pertenece (ArboldePacientes a, long int ci);

boolean EsVacio (ArboldePacientes a);

void printOrden(ArboldePacientes a);

void sinConsultas(ArboldePacientes a);

Paciente minimo (ArboldePacientes a);

void borrarminimo (ArboldePacientes &a);

void borrar (ArboldePacientes &a, Paciente p);
void buscarPacienteXcantConsu(ArboldePacientes a, int consulta);
void sumarConsultaPaciente (ArboldePacientes a, long int ci);
void darCiPacmasCons(ArboldePacientes a,long int &ci, int &cant);
void cargaCiPacmasCons (ArboldePacientes a,long int &ci, int &cant);// Obtener la cedula del paciente con mayor cantidad de consultas.
void bajarArbol (ArboldePacientes a, FILE * f);
void levantarArbol (ArboldePacientes &a, FILE * f);
void abrirArbol (ArboldePacientes &a);
void cerrarArbol (ArboldePacientes a);
#endif // ARBOLPACIENTES_H_INCLUDED

