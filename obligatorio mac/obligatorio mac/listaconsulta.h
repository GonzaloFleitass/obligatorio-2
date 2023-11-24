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
void DesplegarConsultasPacienteCI(Lista l, long int CI);//Desplegar las consultas dada una cedula
Fecha devolverFechaUltimo(Lista l);// Devolver la fecha de la ultima consulta
boolean vacia(Lista a);// Devuelve si la lista es vacia
void contadorTiposConsulta(Lista z,int &a,int &b,int &c);//Cuenta cuantas consultas hay de cada uno
void mostrarConsultasCI(Lista a,long int ci);// Dada una cedula muestra las consultas.
void cantConsultasFecha(Lista consultas,fecha fech3);// Dada una fecha muestra las consultas de esa fecha
void bajarLista (Lista l, FILE * f);// Baja la lista al archivo
void levantarLista (Lista l, FILE * f);// Levanta la lista de un archivo
void abrirLista(Lista &l);//Abre la lista guardada en un archivo.
void cerrarLista (Lista &l);// Guarda la lista en el archivo.
#endif // LISTACONSULTA_H_INCLUDED
