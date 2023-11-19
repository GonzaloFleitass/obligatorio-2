#ifndef LISTACONSULTA_H_INCLUDED
#define LISTACONSULTA_H_INCLUDED
#include "consulta.h"

typedef struct Nodol{
    consulta con;
    Nodol * sig;
    } Nodo;
typedef Nodo * Lista;


void Crear (Lista &l);// Crea nueva lista
void InsFrontConculta (Lista &l, consulta c);// Inserta una consulta en el frente de la lista
void DesplegarLista (Lista l);//Desplegar lista
void DesplegarListaFecha(Lista l,Fecha a);//despleiga lista con el filtro de buscar por fecha
void DesplegarConsultasPacienteCI(Lista l, long int CI);
Fecha devolverFechaUltimo(Lista l);
boolean vacia(Lista a);
#endif // LISTACONSULTA_H_INCLUDED
