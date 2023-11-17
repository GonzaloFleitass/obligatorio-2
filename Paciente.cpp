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
    printf("Cedula:%ld",p.cedula);
    printf("Nombre:");
    print(p.nombre);
    printf("Apellido:");
    print(p.apellido);
    printf("Telefono:%ld",p.telefono);
}
long int darCedPac (Paciente p){
    return p.cedula;
}
void darNombre (Paciente p, string &s){
    strcop(s, p.nombre);
}


void darApellido (Paciente p, string &s){
    strcop(s, p.apellido);
}

long int darTel (Paciente p){
    return p.telefono;
}

int darCantCons (Paciente p){
    return p.cantConsultas;
}

