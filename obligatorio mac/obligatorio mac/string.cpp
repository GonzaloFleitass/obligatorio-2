#include <stdio.h>
#include "string.h"

void strcrear (string &s){

    s = new char [1];
    s[0]='\0';
}

void strdestruir (string &s){
    delete []s;
    s = NULL;
}


int strlar (string s)
{

    int i=0;
    while (s[i] != '\0')
        i++;
    return i;
}


void strcop(string s, string &b){
    delete[]b;
    b=new char[strlar(s)+1];
    int i=0;
    while(s[i]!='\0'){
        b[i]=s[i];
        i++;
    }
    b[i]='\0';
}


void print (string s)
{

    int i=0;

    while (s[i]!= '\0')
    {
        printf ("%c", s[i]);
        i++;
    }
}
void scan (string &s) {
    string aux = new char[MAX];
    int i=0;
    char c;
    scanf ("%c",&c);
    while ((c != '\n') && (i < MAX-1)) {
        aux[i] = c;
        i++;
        scanf("%c",&c);
    }
    aux[i] = '\0';
    strcop(aux, s);
    strdestruir(aux);
}

boolean strmen (string s1, string s2)
{
    int i=0;
    boolean encontre = FALSE; boolean menor = FALSE;
    while ((!encontre) && (s1[i] != '\0') && (s2[i] != '\0')) {

        if (s1[i] != s2[i])
            encontre = TRUE;
        if (s1[i] < s2[i])
            menor = TRUE;
        i++;
    }
    if ((!encontre) && (s2[i]!='\0'))
        menor = TRUE;
    return menor;
    }


boolean streq (string s1, string s2)
{
    int i=0;
    boolean iguales = TRUE;
    while (iguales && (s1[i] != '\0') && (s2[i] != '\0')) {


        if (s1[i] != s2[i])
            iguales = FALSE;
        i++;
        if ((s1[i] != '\0') || (s2[i] != '\0'))
            iguales = FALSE;
    }
        return iguales;
    }

void Bajar_String (string s, FILE * f)
    {
    int i=0;
    while (s[i] != '\0')
    {
        fwrite (&s[i], sizeof(char), 1, f);
        i++;
    }
    fwrite (&s[i], sizeof(char), 1, f);
}

void Levantar_String (string &s, FILE * f)
{
    strcrear(s);
    string aux = new char[MAX];
    int i=0;
    char c;
    fread (&c, sizeof(char), 1, f);
    while (c != '\0')
    {
        aux[i]=c;
        fread (&c, sizeof(char), 1, f);
        i++;
    }
    aux[i]=c;
    strcop(aux, s);
    strdestruir(aux);
}
