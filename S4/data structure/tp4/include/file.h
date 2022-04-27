#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>
#include <stdlib.h>


struct Element {
    int data;
    struct Element* next;
};
typedef struct Element Element;


struct File {
    Element* head;
    Element* tail;
    long size;
};
typedef struct File File;


void  initFile(File*);
void Emfiler(File* S, int data);
int Defiler(File* S);
void Afficher(File* S);
void Vider(File* S);







#endif