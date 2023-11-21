#include <stdio.h>
#include "paciente.h"


void cargarPaciente (Paciente &p,long int ci){
    p.cedula=ci;
    printf("Ingrese el nombre: ");
    fflush(stdin);
    strcrear(p.nombre);
    scan(p.nombre);
    printf("Ingrese el apellido: ");
    strcrear(p.apellido);
    scan(p.apellido);
    printf("Ingrese el telefono: ");
    scanf("%ld", &p.telefono);
    p.cantConsultas=0;
}

void mostrarPaciente (Paciente p){
    printf("Cedula:%ld\t",p.cedula);
    printf("\tNombre:");
    print(p.nombre);
    printf("\tApellido:");
    print(p.apellido);
    printf("\tTelefono:%ld\n",p.telefono);
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

void cargarCantConsu(Paciente &p){
    p.cantConsultas++;
}
