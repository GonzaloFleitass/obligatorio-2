#ifndef STRING_H_INCLUDED
#define STRING_H_INCLUDED
#include "boolean.h"

const int MAX = 80;
typedef char * string;

void strcrear (string &s);
void strdestruir (string &s);
int strlar (string s);//Devuelve el largo dell String
void strcop (string s1,string &s2);//reciba dos strings y copia el primero en el segundo.
void print (string s);//Despliega String por pantalla
void scan (string &s);//Carga un String
boolean strmen (string s1, string s2);;//Devuelve TRUE si el primer string es menor que el segundo
boolean streq (string s1, string s2);//reciba dos strings y devuelva TRUE si ambos strings son iguales o FALSE en caso contrario.

void strswp (string &s1,string &s2);//reciba dos strings y devuelva el primero en el segundo y viceversa.
void Bajar_String (string s, FILE * f);
#endif // STRING_H_INCLUDED
