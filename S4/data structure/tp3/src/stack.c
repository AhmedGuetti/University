#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


Stack* initStack(){
    Stack* S = (Stack*)malloc(sizeof(Stack));
    S->head = NULL;
    S->tail = NULL;
    S->size = 0;
    return S;
}
void Empiler(Stack* S, int data){
    Element* e = (Element*)malloc(sizeof(Element));
    e->data = data;
    e->next = NULL;
    if(S->head == NULL){
        S->head = e;
        S->tail = e;
        S->size = 1;
        return;
    }

    S->tail->next = e;
    S->tail = e;
    ++S->size;
}
void Depiler(Stack* S){
    if(S->head == NULL){
        fprintf(stderr,"Cannot remove element from Empty stack");
        return;
    }
    Element* temp = S->head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Element* dl = temp;
    S->tail = temp;
    temp->next = NULL;
    free(dl->next);
    --S->size;
}
void Afficher(Stack* S){
    if(S->head == NULL){
        printf("\nEMPTY STACK\n");
        return;
    }
    Element* temp = S->head;
    while(temp != NULL){
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Vider(Stack* S){
    Element* temp ;
    while(S->head != NULL){
        temp = S->head;
        S->head = S->head->next;
        free(temp);
        --S->size;
    }
        S->head = NULL;
        S->tail = NULL;
        S->size = 0;
}
