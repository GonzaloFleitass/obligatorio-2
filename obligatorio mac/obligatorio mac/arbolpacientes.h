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
Paciente buscarPaciente (ArboldePacientes a, long int ci);

#endif // ARBOLPACIENTES_H_INCLUDED
