#include <stdio.h>
#include "paciente.h"


void cargarPaciente (Paciente &p){
    printf("Ingrese el nombre: ");
    fflush(stdin);
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
    strcop(p.nombre, s );
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

void cargarCedula (Paciente &p, long int c){
    printf("Ingrese la cedula: ");
    scanf("%ld", &p.cedula);
}
