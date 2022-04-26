#ifndef _STACKCHAR_H_
#define _STACKCAHAR_H_
#include <stdio.h>
#include <stdlib.h>


struct Elementchar {
    char data;
    struct Elementchar* next;
};
typedef struct Elementchar Elementchar;

struct Stackchar {
    Elementchar* head;
    long size;
};
typedef struct Stackchar Stackchar;


Stackchar* initStackchar();
void Empilerchar(Stackchar* S, char data);
void Depilerchar(Stackchar* S);
void Afficherchar(Stackchar* S);
void Viderchar(Stackchar* S);



#endif