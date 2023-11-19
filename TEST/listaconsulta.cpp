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
