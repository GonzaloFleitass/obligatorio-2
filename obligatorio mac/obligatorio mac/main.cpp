#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "arbolpacientes.h"
#include "listaconsulta.h"

int main() {
    int opcion,opcionsub1,opcionsub2,necesitaProtesis=0,enTratamiento=0,saludable=0,cant;
    long int ci=0,ci2,ci3;
    boolean termine=FALSE;
    ArboldePacientes a;
    Paciente p;
    consulta c;
    printf("hola");
    Fecha fech,fech2, fech3;
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
                        system("pause");
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
                        system("pause");
                            break;
                        case 3:
                            if(EsVacio(a))
                                printf("No existen pacientes\n");
                            else
                                printOrden(a);
                           system("pause");
                            break;
                        case 4:sinConsultas (a);
                            system("pause");
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
                        {
                            CargaFech(fech2);
                            if(fechavalida(fech2)==TRUE){
                                if(vacia(consultas)==TRUE){
                                    cargarConsulta(c,ci2,fech2);
                                    InsFrontConsulta(consultas,c);
                                    sumarConsultaPaciente(a, ci2);
                                    //buscar paciente con ci y sumarle una consulta
                                }
                                else{
                                    if(comparaFechaPosterior(fech2, devolverFechaUltimo(consultas))==TRUE){
                                        cargarConsulta(c,ci2,fech2);
                                        InsFrontConsulta(consultas,c);
                                        sumarConsultaPaciente(a, ci2);
                                        //buscar paciente con ci y sumarle una consulta
                                    }else{
                                        printf("El paciente no esta registrado");
                                    }
                                }
                            }
                        }
                
                                system("pause");
                                break;
                            case 2:long int ciBusca;
                                printf("ingrese Ci a buscar:");
                                scanf("%ld",&ciBusca);
                                mostrarConsultasCI(consultas,ciBusca);
                                system("pause");
                                break;
                            case 3:printf("Ingrese Fecha");
                                CargaFech(fech);
                                DesplegarListaFecha(consultas,fech);
                                system("pause");
                                break;
                            case 4:int cantConsu;
                                printf("Ingrese cantidad de consultas:");
                                scanf("%d",&cantConsu);
                                buscarPacienteXcantConsu(a,cantConsu);
                               system("pause");
                                break;
                            case 5:
                                contadorTiposConsulta(consultas,enTratamiento,saludable,necesitaProtesis);
                                printf("Cantidad de Consulta del Tipo En Tratmiento es:%d\n",enTratamiento);
                                printf("Cantidad de Consultas del Tipo Necesita Protesis:%d\n",necesitaProtesis);
                                printf("Cantidad de Consultas del Tipo Saludable:%d\n",saludable);
                                system("pause");
                                break;
                            case 6:
                                CargaFech(fech3);
                                cantConsultasFecha(consultas,fech3);
                                system("pause");
                                break;

                            case 7:
                                darCiPacmasCons(a,ci3,cant);
                                printf("El paciente con CI:%ld es el de mayor cantidad de consultas con %d consultas.\n",ci3,cant);
                            case 8:
                                break;

                        }
                        break;
                case 3: termine=TRUE;
                        break;
                }
        }while(termine!=TRUE);
    return 0;
}
