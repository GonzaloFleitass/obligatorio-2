#ifndef PACIENTE_H_INCLUDED
#define PACIENTE_H_INCLUDED

#include "string.h"

typedef struct {
    long int cedula;
    string nombre;
    string apellido;
    long int telefono;
    int cantConsultas;
} Paciente;


void cargarPaciente (Paciente &p, long int ci);//Carga los datos de un paciente
void mostrarPaciente (Paciente p);// Muestra datos del paciente por pantalla
long int darCedPac (Paciente p);// Devuelve la cedula del paciente
void darNombre (Paciente p, string &s);//Devuelve el nombre de un paciente
void darApellido (Paciente p, string &s);//Devuelve el apellido del paciente
long int darTel (Paciente p);//Devuelve el telefono del paciente
int darCantCons (Paciente p);// Devuelve la cantidad de consultas
void cargarCedula (Paciente &p, long int c);//Cargar cedula del paciente
void cargarCantConsu(Paciente &p); //suma consulta al paciente
void bajarPaciente (Paciente p, FILE * f);
void levantarPaciente (Paciente &p, FILE * f);

#endif // PACIENTE_H_INCLUDED
