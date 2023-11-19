#include <stdio.h>
#include "menu.h"
#include "arbolpacientes.h"
#include "listaconsulta.h"

int main() {
    int opcion,opcionsub1,opcionsub2;
    long int ci=0;
    boolean termine=FALSE;
    ArboldePacientes a;
    Paciente p;
    consulta c;
    Fecha fech,fech2;
    Lista consultas;
    Crear(a);
    do{
        mostarmenu1( opcion);
        
        switch(opcion){
            case 1:submenualtasybajas (opcionsub1);
                switch(opcionsub1){
                    case 1:printf("ingrese CI:");
                        scanf("%ld",&ci);
                        if(Pertenece(a, ci)){
                            printf("El paciente ya existe");
                        }else{
                            cargarPaciente(p);
                            Insert(a, p);
                        }
                    case 2:printf("Ingrese CI del paciente que desea eliminar:");
                        scanf("%ld",&ci);
                        if(Pertenece(a, ci)){
                            borrar(a,p);
                        }else{
                            printf("El paciente no existe");
                            break;
                        case 3:orden(a);
                            break;
                        case 4:sinConsultas (a);
                            break;
                        case 5:
                            break;
                        }
                        
                        break;
                }
                    case 2: submenuconsultas(opcionsub2);
                        switch(opcionsub2){
                                
                            case 1: printf("ingrese ci");
                                scanf("%ld",&ci);
                                if(Pertenece(a, ci)==TRUE){
                                    printf("ingrese Fecha");
                                    CargaFech(fech2);
                                } if(fechavalida(fech2)==TRUE){
                                    if()
                                    cargarConsulta(c,ci);
                                }else{
                                    printf("El paciente no esta registrado");
                                }
                                
                            case 2:
                            case 3:printf("ingrese Fecha");
                                CargaFech(fech);
                                DesplegarListaFecha(consultas,fech);
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                                break;
                                
                        }
                    case 3: termine=TRUE;
                        break;
                }
        }while(termine!=TRUE);
    }

