#include <stdio.h>
#include "menu.h"
#include "arbolpacientes.h"
#include "listaconsulta.h"

int main() {
    int opcion,opcionsub1,opcionsub2;
    long int ci=0;
    ArboldePacientes a;
    Paciente p;
    consulta c;
    Crear(a);
    mostarmenu1( opcion);
    switch(opcion){
        case 1:submenualtasybajas (opcionsub1);
            switch(opcionsub1){
                case 1:cargarCedula (p,ci);
                    if(Pertenece(a, darCedPac(p)))
                        printf("El paciente ya existe");
                    else{
                        cargarPaciente(p);
                        Insert(a, p);
                    }
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                case 5:
                    break;
            }
            
            break;
        case 2: submenuconsultas(opcionsub2);
            switch(opcionsub2){
                case 1: if(Pertenece(a, darCedPac(p)))
                    cargarConsulta(c);
                    
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                    break;
                    
            }
        case 3:
            break;
    }
}
