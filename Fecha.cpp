//
//  Fecha.cpp
//  Pr4ej1
//
//  Created by Miguel Lescano on 1/9/23.
//

#include <stdio.h>
#include "Fecha.h"


void CargaFech (Fecha &fec){
    printf("Ingrese el dia\n");
    scanf("%d",&fec.dia);
    printf("Ingrese el mes\n");
    scanf("%d",&fec.mes);
    printf("Ingrese el año\n");
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

int daraño (Fecha fec){

return fec.anio;
}


Boolean fechavalida (Fecha fec) {
    Boolean valida=FALSE;
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

