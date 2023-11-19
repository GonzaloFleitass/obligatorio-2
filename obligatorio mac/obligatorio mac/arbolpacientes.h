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

void orden(ArboldePacientes a);

#endif // ARBOLPACIENTES_H_INCLUDED
