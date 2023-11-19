#include "listaconsulta.h"

void Crear (Lista &l){
    l=NULL;
}

void InsFrontConsulta (Lista &l, consulta c){
    Lista aux = new Nodo;
    aux->con=c;
    aux->sig=l;
    l=aux;
}

void DesplegarLista(Lista l){
    while(l!=NULL){
        mostrarConsulta(l->con);
        l= l->sig;
    }
}

void DesplegarListaFecha(Lista l,Fecha a){
    while(l!=NULL){
        if(comparaFecha(devolverFechConsulta(l->con),a)==TRUE){
            mostrarConsulta(l->con);
            l=l->sig;
        }
    }
}
