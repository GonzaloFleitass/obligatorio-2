#ifndef LISTACONSULTA_H_INCLUDED
#define LISTACONSULTA_H_INCLUDED

#include "consulta.h"

typedef struct Nodol{
    consulta con;
    Nodol * sig;
    } Nodo;
typedef Nodo * Lista;


void Crear (Lista &l);// Crea nueva lista
void InsFrontConsulta (Lista &l, consulta c);// Inserta una consulta en el frente de la lista
void DesplegarLista (Lista l);//Desplegar lista
void DesplegarListaFecha(Lista l,Fecha a);//despleiga lista con el filtro de buscar por fecha
Fecha devolverFechaUltimo(Lista l);//Devuelve la fecha de la ultima consulta
boolean vacia(Lista a);// Devuelve TRUE cuando la lista es vacia o FALSE sino lo es.
void contadorTiposConsulta(Lista z,int &a,int &b,int &c);//Cuenta y devuelve cuantas consultas de cada tipo hay segun diagnostico.
void mostrarConsultasCI(Lista a,long int ci);//Dada una cedula devuelve las consutas de ese paciente.
void cantConsultasFecha(Lista consultas,fecha fech3);//Dada una fecha, devuelve la cantidad de consultas de esa fecha.
void bajarLista (Lista l, FILE * f);//Baja la lista.
void levantarLista (Lista &l, FILE * f);//Levanta una lista.
void abrirLista(Lista &l);//Abre una lista desde un archivo, sino hay una, la crea.
void cerrarLista (Lista l);// Guarda la lista en un archivo.

#endif // LISTACONSULTA_H_INCLUDED
