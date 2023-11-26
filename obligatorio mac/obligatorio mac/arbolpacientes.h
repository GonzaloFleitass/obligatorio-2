#ifndef ARBOLPACIENTES_H_INCLUDED
#define ARBOLPACIENTES_H_INCLUDED
#include "paciente.h"
#include <stdio.h>

typedef struct nodoA {
                    Paciente p;
                    nodoA * hizq;
                    nodoA * hder;
                    } nodo;

typedef nodo * ArboldePacientes;

void Crear (ArboldePacientes &a);// Crea un arbol, apunta a a NULL
void Insert (ArboldePacientes &a, Paciente p);// Inserta un nuevo paciente
boolean Pertenece (ArboldePacientes a, long int ci);// Dada una cedula devuelve si el paciente pertenece al arbol
boolean EsVacio (ArboldePacientes a);//Devuelve true si el arbol es vacio o False si no
void printOrden(ArboldePacientes a);//Muestra todos los pacientes del arbol en orden de menor a mayor por cedula
void sinConsultas(ArboldePacientes a);//Muestra por pantalla los pacientes que aun no tienen ninguna consulta.
Paciente minimo (ArboldePacientes a);//Devuelve el paciente con la cedula mas chica
void borrarminimo (ArboldePacientes &a);//Borra el paciente con la cedula mas chica
void borrar (ArboldePacientes &a, Paciente p);//Dada una cedula borra el paciente.
void buscarPacienteXcantConsu(ArboldePacientes a, int consulta);// Muestra un pantalla los pacientes con x cantidad de consultas.
void sumarConsultaPaciente (ArboldePacientes a, long int ci);//Suma una consulta a un paciente.
void darCiPacmasCons(ArboldePacientes a,long int &ci, int &cant);//Devuelve la cedula del paciente con mas consultas junto con la cantidad de consultas
void cargaCiPacmasCons (ArboldePacientes a,long int &ci, int &cant);// Obtener la cedula del paciente con mayor cantidad de consultas.
void bajarArbol (ArboldePacientes a, FILE * f);//Baja un arbol
void levantarArbol (ArboldePacientes &a, FILE * f);// Levanta un arbol.
void abrirArbol (ArboldePacientes &a);// Abre el arbol desde un archivo, si no existe lo crea.
void cerrarArbol (ArboldePacientes a);// Guarda el arbol en un archivo.
#endif // ARBOLPACIENTES_H_INCLUDED

