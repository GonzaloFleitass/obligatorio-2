//
//  ListaConsultas.cpp
//  OBfinal
//
//  Created by Miguel Lescano on 17/11/23.
//

#include <stdio.h>
#include "ListaConsultas.h"
#include "consulta.h"


typedef struct Nodol{
    consulta con;
    Nodol * sig;
    } Lista;

