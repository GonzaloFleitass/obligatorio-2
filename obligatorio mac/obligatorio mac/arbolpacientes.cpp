#include "arbolpacientes.h"

void Crear (ArboldePacientes &a)
{
    a = NULL;
}


void Insert (ArboldePacientes &a, long int e)
{
    if (a == NULL)
    {
        a = new nodo;
        a -> cedula = e;
        a -> hizq = NULL;
        a -> hder = NULL;
    }
    else
    {
        if (e < a->cedula)
            Insert (a -> hizq, e);
        else
            Insert (a -> hder, e);
    }
}

boolean Pertenece (ArboldePacientes a, long int e)
{
    if (a == NULL)
        return FALSE;
    else
    {
       if (a -> cedula == e)
            return TRUE;
        else
        {
            if (e < a -> cedula)
                return Pertenece (a -> hizq, e);
            else
                return Pertenece (a -> hder, e);
        }
    }
}

boolean EsVacio (ArboldePacientes a)
{
    return (boolean) (a == NULL);
}
