#include <stdio.h>
#include "fecha.h"


void CargaFech (Fecha &fec){
    printf("Ingrese el dia:");
    fflush(stdin);
    scanf("%d",&fec.dia);
    printf("\nIngrese el mes:");
    fflush(stdin);
    scanf("%d",&fec.mes);
    printf("\nIngrese el anio:");
    fflush(stdin);
    scanf("%d",&fec.anio);
}

void Desplegado (Fecha fec){
printf("%d/%d/%d",fec.dia,fec.mes,fec.anio);

}


int dardia (Fecha fec)
{
return  fec.dia;
}

int darmes (Fecha fec){

return fec.mes;
}

int daranio (Fecha fec){

return fec.anio;
}


boolean fechavalida (Fecha fec) {
    boolean valida=FALSE;
 switch (fec.mes)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12: if (fec.dia >= 1 && fec.dia <= 31)
     valida=TRUE;
         break;
 case 4:
 case 6:
 case 9:
 case 11: if (fec.dia >= 1 && fec.dia <= 30)
     valida=TRUE;
 break;
case 2: if (fec.anio % 4 == 0)
 {
 if (fec.dia >= 1 && fec.dia <= 29)
     valida=TRUE;
 }
 else
 {
 if (fec.dia >= 1 && fec.dia <= 28)
     valida=TRUE;
 }
 break;

 }
    return valida;
}

boolean comparaFecha(Fecha a, Fecha b){
    boolean igual=FALSE;
    if(a.dia==b.dia){
        if(a.mes==b.mes){
            if(a.anio==b.anio){
                igual=TRUE;
            }
        }
    }
    return igual;
}

boolean comparaFechaPosterior(Fecha a, Fecha b){
    boolean posterior=FALSE;
    
    if(a.anio>b.anio){
        posterior=TRUE;
    } else{
        if(a.anio==b.anio){
            if(a.mes>b.mes){
                posterior=TRUE;
            }else{
                if(a.mes==b.mes){
                    if(a.dia>=b.dia){
                        posterior=TRUE;
                    }
                }
            }
        }
    }
    return posterior;
}

