#ifndef _STACK_H_
#define _STACK_H_
#include <stdio.h>
#include <stdlib.h>


struct Element {
    int data;
    struct Element* next;
};
typedef struct Element Element;


struct Stack {
    Element* head;
    Element* tail;
    long size;
};
typedef struct Stack Stack;


Stack* initStack();
void Empiler(Stack* S, int data);
void Depiler(Stack* S);
void Afficher(Stack* S);
void Vider(Stack* S);







#endif