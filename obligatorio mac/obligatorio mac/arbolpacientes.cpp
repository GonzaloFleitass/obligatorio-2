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

void printOrden(ArboldePacientes a){
    if(a!=NULL){
        printOrden(a->hizq);
        mostrarPaciente(a->p);
        printOrden(a->hder);
        
    }
}

void sinConsultas(ArboldePacientes a){
    if(a!=NULL){
        if(darCantCons( a->p)==0)
            mostrarPaciente(a->p);
            sinConsultas(a->hizq);
            sinConsultas(a->hder);
        
    }
}

/* Precondicion: a no vacio */
Paciente minimo (ArboldePacientes a)
{
	if (a->hizq == NULL)
		return (a->p);
	else
		return minimo (a->hizq);
}


/* borra el valor minimo del arbol */
/* Precondición : el arbol a NO está vacio */
void borrarminimo (ArboldePacientes &a)
{
	ArboldePacientes aux;
	if (a->hizq == NULL)
	{
		aux = a->hder;
		delete a;
		a = aux;
	}
	else
		borrarminimo (a->hizq);
}

/* borra un valor cualquiera del arbol */
/* Precondición : paciente está en el arbol a */
void borrar (ArboldePacientes &a, Paciente p)
{
	ArboldePacientes aux;
	if (darCedPac(p) == darCedPac(a->p))
	{
		if (a->hder == NULL)
		{
			aux = a -> hizq;	
			delete a;
			a = aux;
		}
		else
		{
			if (a->hizq == NULL)
			{
				aux = a->hder;
				delete a;
				a = aux;
			}
			else
			{
				a->p = minimo (a->hder);
				borrarminimo (a->hder);
			}
		}
	}
	else
	{
		if (darCedPac(p) < darCedPac(a->p))
			borrar (a->hizq, p);
		else
			borrar (a->hder, p);
	}
}
void buscarPacienteXcantConsu(ArboldePacientes a, int consulta){
    if(a!=NULL){
        if(darCantCons(a->p)==consulta){
            mostrarPaciente(a->p);
        }
        buscarPacienteXcantConsu(a->hder,consulta);
        buscarPacienteXcantConsu(a->hizq,consulta);
    }
}
Paciente buscarPaciente (ArboldePacientes a, long int ci)
{
       if (darCedPac(a -> p) == ci )
            return a->p;
        else
        {
            if (ci < darCedPac(a->p))
                return buscarPaciente (a -> hizq, ci);
            else
                return buscarPaciente (a -> hder, ci);
        }
    }

