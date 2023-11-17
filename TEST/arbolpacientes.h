#ifndef ARBOLPACIENTES_H_INCLUDED
#define ARBOLPACIENTES_H_INCLUDED
#include "paciente.h"
#include <stdio.h>

typedef struct nodoA {
                    long int cedula;
                    nodoA * hizq;
                    nodoA * hder;
                    } nodo;

typedef nodo * ArboldePacientes;

void Crear (ArboldePacientes &a);

void Insert (ArboldePacientes &a, long int e);

boolean Pertenece (ArboldePacientes a, long int e);

boolean EsVacio (ArboldePacientes a);


#endif // ARBOLPACIENTES_H_INCLUDED
