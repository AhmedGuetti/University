#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


#define FOR(i,c) for(int (i)=1;(i)<=(c);(i)++)





struct date{
    int h;
    int m;
};
typedef struct date date;


struct Person {
    unsigned int id;
    date time;
    struct Person* next;
};
typedef struct Person Person;


void getDate(date* d){
    puts("Enter the date : ");
    char message[5];
    scanf("%s", message);
    char h[2];
    strncpy(h,message,2);
    d->h = atoi(h);
    char m[2];
    strcpy(m,message+3);
    d->m = atoi(m);
}





Person* makePerson(int id){
    Person* pr = (Person*)malloc(sizeof(Person));
    if(!pr){
        fprintf(stderr,"Malloc() fialed");
        exit(0);
    }
    pr->id = id;
    date d;
    getDate(&d);
    pr->time = d;
    pr->next = NULL;
    return pr;
}

Person** initBus(){
    Person** head = (Person**)malloc(sizeof(Person*));
    if(!head){
        fprintf(stderr,"Malloc() fialed");
        exit(0);
    }
    *head = NULL;
    return head;
}


void enfiler(Person** head, int id){
    Person* pr = makePerson(id);
    if(*head == NULL){
        *head = pr;
        return;
    }
    pr->next = *head;
    *head = pr;
}

void defiler(Person** head){
    if(*head == NULL){
        return;
    }
    if((*head)->next == NULL){
        *head = NULL;
        return;
    }
    Person* temp = *head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}


void people_who_are_geting_in_the_line(Person** head, int count){
    FOR(i, count){
        enfiler(head, i);
    }
}


void people_get_in_the_bus(Person** head, int free_space_in_the_bus){
    FOR(i, free_space_in_the_bus){
        defiler(head);
    }    
}

void Affiche(Person** head){
    if(*head == NULL){
        printf("Waiting line is Empty.");
        return;
    }
    printf("The Bus number is : %lx\n", head);
    Person* temp = *head;
    while(temp != NULL){
        printf("%i \t %d:%d\n",temp->id,temp->time.h,temp->time.m);
        temp = temp->next;
    }
    putc('\n',stdout); //putchar('\n')
}



int main(){
    Person** head = initBus();
    people_who_are_geting_in_the_line(head, 4);
    Affiche(head);
    people_get_in_the_bus(head, 3);
    Affiche(head);
    people_get_in_the_bus(head, 10);
    Affiche(head);



    return 0;
}