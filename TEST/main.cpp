#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "arboldePacientes.h"
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
                            p.cedula=ci;
                            cargarPaciente(p);
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
                                orden(a);
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
                                    scanf("%ld",&ci);
                                if(Pertenece(a, ci)==TRUE)
                                    CargaFech(fech2);
                                if(fechavalida(fech2)==TRUE){
                                    if(vacia(consultas)==TRUE){
                                        cargarConsulta(c);
                                    } else{
                                        if(comparaFechaPosterior(fech2, devolverFechaUltimo(consultas))==TRUE){
                                            cargarConsulta(c);
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
                            case 4:
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



