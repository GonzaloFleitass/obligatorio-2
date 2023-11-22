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
        }
        l=l->sig;
    }
}
void DesplegarConsultasPacienteCI(Lista l, long int  CI){
        while (l != NULL){
            if (devolverCiConsulta(l->con) == CI){
                mostrarConsulta(l->con);
                l = l ->sig;
            }
        }
    }

Fecha devolverFechaUltimo(Lista l){
    return devolverFechConsulta(l->con);
}
boolean vacia(Lista a){
    if(a==NULL){
        return TRUE;
    }else
        return FALSE;
}
void contadorTiposConsulta(Lista z,int &a,int &b,int &c){
    a=0;
    b=0;
    c=0;
    while(z!=NULL){
       
        switch(devolverEvaluacionConsulta(z->con)){
            case EN_TRATAMIENTO: a++;
                break;
            case SALUDABLE: b++;
                break;
            case NECESITA_PROTESIS: c++;
                break;
        }
        
        z=z->sig;
    }
    
    
}
