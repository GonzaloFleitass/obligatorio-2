#ifndef LISTACONSULTA_H_INCLUDED
#define LISTACONSULTA_H_INCLUDED
#include "consulta.h"

typedef struct Nodol{
    consulta con;
    Nodol * sig;
    } Nodo;
typedef Nodo * Lista;

#endif // LISTACONSULTA_H_INCLUDED
