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

boolean Pertenece (ArboldePacientes a, long int ci)
{
    if (a == NULL)
        return FALSE;
    else
    {
       if (darCedPac(a -> p) == ci )
            return TRUE;
        else
        {
            if (ci < darCedPac(a->p))
                return Pertenece (a -> hizq, ci);
            else
                return Pertenece (a -> hder, ci);
        }
    }
}

boolean EsVacio (ArboldePacientes a)
{
    return (boolean) (a == NULL);
}

void orden(ArboldePacientes a){
    if(a!=NULL){
        orden(a->hizq);
        mostrarPaciente(a->p);
        orden(a->hder);
        
    }
}
    
