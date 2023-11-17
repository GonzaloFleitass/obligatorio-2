//
//  Paciente.cpp
//  ObligatorioFinal
//
//  Created by Miguel Lescano on 15/11/23.
//

#include <stdio.h>
#include "Paciente.h"


void cargarPaciente (Paciente &p){
    printf("Ingrese la cedula : ");
    scanf("%ld", &p.cedula);
    printf("Ingrese el nombre: ");
    scan(p.nombre);
    printf("Ingrese el apellido: ");
    scan(p.apellido);
    printf("Ingrese el telefono: ");
    scanf("%ld", &p.telefono);
}

void mostrarPaciente (Paciente p){
    printf("La cedula es:%ld",p.cedula);
    printf("El nombres es:");
}
long int darCedPac (Paciente p);// Devuelve la cedula del paciente
void darNombre (Paciente p, string &s);//Devuelve el nombre de un paciente
void darApellido (Paciente p, string &s);//Devuelve el apellido del paciente
long int darTel (Paciente p);//Devuelve el telefono del paciente
int darCantCons (Paciente p);// Devuelve la cantidad de consultas

