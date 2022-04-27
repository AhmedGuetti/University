#include <stdio.h>
#include <stdlib.h>
#include "file.h"


void initFile(File* f){
    f->head = NULL;
    f->tail = NULL;
    f->size = 0;
}

void Emfiler(File* f, int data){
    Element* e = (Element*)malloc(sizeof(Element));
    e->data = data;
    if(f->size == 0){
        e->next = NULL;
        f->tail = e;
        f->head = e;
        f->size++;
        return;
    }
    e->next = f->head;
    f->head = e;
    ++f->size;
}


int Defiler(File* f){
    if(f->head == NULL){
        fprintf(stderr,"CAN'T REMOVE FROM AN EMPTY HEAP");
        return -1;
    }
    if(f->size == 1){

    }
    Element* temp = f->head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Element* dl = temp->next;
    int a = dl->data;
    f->tail = temp;
    temp->next = NULL;
    free(dl);
    --f->size;
    return a;
}


void Afficher(File* f){
    if(f->head == NULL){
        printf("\nEMPTY File\n");
        return;
    }
    Element* temp = f->head;
    while(temp != NULL){
        printf("%d \t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void Vider(File* f){
    Element* temp ;
    while(f->head != NULL){
        temp = f->head;
        f->head = f->head->next;
        free(temp);
        --f->size;
    }
        f->head = NULL;
        f->tail = NULL;
        f->size = 0;
}