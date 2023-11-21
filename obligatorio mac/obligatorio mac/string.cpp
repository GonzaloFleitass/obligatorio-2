
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
    
    int i=0;
    char c;
    scanf ("%c",&c);
    while ((c != '\n') && (i < MAX-1)) {
        s[i] = c;
        i++;
        scanf("%c",&c);
    }
    s[i] = '\0';
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



