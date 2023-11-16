//
//  String.h
//  Prueba
//
//  Created by Miguel Lescano on 30/8/23.
//

#ifndef String_h
#define String_h
#include "boolean.h"

const int MAX = 80;
typedef char * string;

void strcrear (string &s);
void strdestruir (string &s);
int strlar (string s);//Devuelve el largo dell String
void strcop (string &s1,string s2);//reciba dos strings y copie el segundo en el primero.
void print (string s);//Despliega String por pantalla
void scan (string &s);//Carga un String
Boolean strmen (string s1, string s2);;//Devuelve TRUE si el primer string es menor que el segundo
Boolean streq (string s1, string s2);//reciba dos strings y devuelva TRUE si ambos strings son iguales o FALSE en caso contrario.

void strswp (string &s1,string &s2);//reciba dos strings y devuelva el primero en el segundo y viceversa.

#endif /* String_h */
