#include <stdio.h>
#include<stdlib.h>

typedef struct element {
    char c ;
    struct element *next ;
}element ;


typedef struct pile{
    element *first;
    int len ;
}pile;

void  empiler( pile *p,char a)
{   element *node;
    if((node=(element*) malloc(sizeof(element))))
    {
        node->c=a;
        node->next=p->first;
        p->first=node;
        }
        p->len++;
}



int main (){

    return 0 ;
}