//
//  ListaConsultas.h
//  OBfinal
//
//  Created by Miguel Lescano on 17/11/23.
//

#ifndef ListaConsultas_h
#define ListaConsultas_h
#include "consulta.h"

typedef struct Nodol{
    consulta con;
    Nodol * sig;
    } Nodo;
typedef Nodo * Lista;





#endif /* ListaConsultas_h */
