#include <stdio.h>
#include <stdlib.h>
#include "stackchar.h"


Stackchar* initStackchar(){
    Stackchar* S = (Stackchar*)malloc(sizeof(Stackchar));
    S->head = NULL;
    S->size = 0;
    return S;
}


void Empilerchar(Stackchar* S, char data){
    Elementchar* e = (Elementchar*)malloc(sizeof(Elementchar));
    e->data = data;
    e->next = NULL;
    e->next = S->head;
    S->head = e;
    ++S->size;
}
void Depilerchar(Stackchar* S){
  if(S->head == NULL){
        fprintf(stderr,"EMPTY STACK CAN'T REMOVE ELEMENT FROM EMPTY STACK");
        return;
    }
    Elementchar* temp = S->head;
    S->head = S->head->next;
    free(temp);
    S->size--;
}
void Afficherchar(Stackchar* S){
    if(S->head == NULL){
        printf("\nEMPTY Stackchar\n");
        return; }
    Elementchar* temp = S->head;
    while(temp != NULL){
        printf("%c \t", temp->data);
        temp = temp->next;
    }
}
void Viderchar(Stackchar* S){
    Elementchar* temp ;
    while(S->head != NULL){
        temp = S->head;
        S->head = S->head->next;
        free(temp);
        --S->size;
    }
        S->head = NULL;
        S->size = 0;
}
