#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "arbolpacientes.h"
#include "listaconsulta.h"

int main() {
    int opcion,opcionsub1,opcionsub2;
    long int ci=0,ci2;
    boolean termine=FALSE;
    ArboldePacientes a;
    Paciente p;
    consulta c;
    Fecha fech,fech2;
    Lista consultas;
    Crear(consultas);
    Crear(a);
    do{
        system("cls");
        mostarmenu1( opcion);

        switch(opcion){
            case 1:
                system("cls");
                submenualtasybajas (opcionsub1);
                switch(opcionsub1){
                    case 1:printf("Ingrese CI: ");
                        scanf("%ld",&ci);
                        if(Pertenece(a, ci)){
                            printf("El paciente ya existe");
                        }else{
                            cargarPaciente(p, ci);
                            Insert(a, p);
                        }
                        break;
                    case 2:
                        printf("Ingrese CI del paciente que desea eliminar:");
                        scanf("%ld",&ci);
                        if(Pertenece(a, ci)){
                            borrar(a,p);
                            printf("Paciente eliminado\n");
                        }else{
                            printf("El paciente no existe\n");
                        }
                     
                            break;
                        case 3:
                            if(EsVacio(a))
                                printf("No existen pacientes\n");
                            else
                                orden(a);
                           
                            break;
                        case 4:sinConsultas (a);
                        
                            break;
                        case 5:
                            break;
                        }

                        break;

                case 2:
                    system("cls");
                    submenuconsultas(opcionsub2);
                        switch(opcionsub2){

                            case 1:
                                printf("Ingrese CI: ");
                                    scanf("%ld",&ci2);
                                if(Pertenece(a, ci2)==TRUE)
                                    CargaFech(fech2);
                                if(fechavalida(fech2)==TRUE){
                                    if(vacia(consultas)==TRUE){
                                        cargarConsulta(c,ci2,fech);
                                        InsFrontConsulta(consultas,c);
                                        
                                    } else{
                                        if(comparaFechaPosterior(fech2, devolverFechaUltimo(consultas))==TRUE){
                                            cargarConsulta(c,ci2,fech);
                                        }else{
                                            printf("El paciente no esta registrado");
                                        }
                                    }
                                }

                                break;
                            case 2:
                            case 3:printf("Ingrese Fecha");
                                CargaFech(fech);
                                DesplegarListaFecha(consultas,fech);
                                break;
                            case 4:int cantConsu;
                                printf("Ingrese cantidad de consultas:");
                                scanf("%d",&cantConsu);
                                buscarPacienteXcantConsu(a,cantConsu);
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                                break;

                        }
                        break;
                case 3: termine=TRUE;
                        break;
                }
        }while(termine!=TRUE);
    }

