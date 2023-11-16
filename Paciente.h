//
//  Paciente.h
//  ObligatorioFinal
//
//  Created by Miguel Lescano on 15/11/23.
//

#ifndef Paciente_h
#define Paciente_h
#include "String.h"

typedef struct {
    long int cedula;
    string nombre;
    string apellido;
    long int telefono;
    int cantConsultas;
} Paciente;


void cargarPaciente (Paciente &p);//Carga los datos de un paciente
void mostrarPaciente (Paciente p);// Muestra datos del paciente por pantalla
long int darCedPac (Paciente p);// Devuelve la cedula del paciente
void darNombre (Paciente p, string &s);//Devuelve el nombre de un paciente
void darApellido (Paciente p, string &s);//Devuelve el apellido del paciente
long int darTel (Paciente p);//Devuelve el telefono del paciente
int darCantCons (Paciente p);// Devuelve la cantidad de consultas






#endif /* Paciente_h */
