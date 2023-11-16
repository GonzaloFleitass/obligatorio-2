//
//  boolean.cpp
//  Prueba
//
//  Created by Miguel Lescano on 30/8/23.
//
#include <stdio.h>
#include "boolean.h"

void cargBool(Boolean &a)
{
    char c;
    do{
        printf("Ingrese (F) para FALSE o (T) para TRUE\n");
        fflush(stdin);
        scanf("%c",&c);
        if (c=='F'||c=='f')
            a=FALSE;
        else
        {
            if(c=='T'||c=='t')
                a=TRUE;
            else{
                printf("Error, Ingrese (F) para FALSE o (T) para TRUE\n");
            }
        }
    }while((c!='F'&&c!='f')&&(c!='T'&&c!='t'));
}

void mostBool(Boolean a)
{
    switch(a) {
        case TRUE:
            printf("TRUE");
            break;
        case FALSE:
            printf("FALSE");
            break;
    }
}



