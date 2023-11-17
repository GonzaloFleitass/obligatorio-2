#ifndef ARBOLDEPACIENTES_H_INCLUDED
#define ARBOLDEPACIENTES_H_INCLUDED

typedef struct nodoA {
                    int cedula;
                    nodoA * hizq;
                    nodoA * hder;
                    } nodo;

typedef nodo * ArboldePacientes;

void Crear (ArboldePacientes &a);

void Insert (ArboldePacientes &a, long int e);

boolean Pertenece (ArboldePacientes a, long int e);

boolean EsVacio (ArboldePacientes a);


#endif // ARBOLDEPACIENTES_H_INCLUDED
