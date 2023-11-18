#include "arbolpacientes.h"

void Crear (ArboldePacientes &a)
{
    a = NULL;
}


void Insert (ArboldePacientes &a, Paciente p)
{
    if (a == NULL)
    {
        a = new nodo;
        a -> p = p;
        a -> hizq = NULL;
        a -> hder = NULL;
    }
    else
    {
        if (darCedPac(p) < darCedPac(a->p))
            Insert (a -> hizq, p);
        else
            Insert (a -> hder, p);
    }
}

boolean Pertenece (ArboldePacientes a, Paciente p)
{
    if (a == NULL)
        return FALSE;
    else
    {
       if (darCedPac(a -> p) == darCedPac(p) )
            return TRUE;
        else
        {
            if (darCedPac(p) < darCedPac(a->p))
                return Pertenece (a -> hizq, p);
            else
                return Pertenece (a -> hder, p);
        }
    }
}

boolean EsVacio (ArboldePacientes a)
{
    return (boolean) (a == NULL);
}
