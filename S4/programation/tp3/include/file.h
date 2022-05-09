#ifndef _FILE_H_
#define _FILE_H_
#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include "def_types.h"



User* makeUser(string name, string lastName, string password,string date,Type_Utilisateure type,Nom_Utilisateur login){
    User* new_node = (User*)malloc(sizeof(User));
    strcpy(new_node->nom, name);
    strcpy(new_node->prenom, lastName);
    strcpy(new_node->password, password);
    strcpy(new_node->date_N, date);
    new_node->type = type;
    new_node->suivant = NULL;
    new_node->login = login;

    return new_node;
}



void writeUser(User* user)
{
   FILE *fptr;

   if ((fptr = fopen("dataUser.bin","ab")) == NULL){
       fprintf(stderr,"Error will opening the file");
       exit(1);
   }
    fwrite(user, sizeof(User), 1, fptr); 
    fclose(fptr); 
}

void DisplayUsers(list_user* userList);

void readUser(list_user* userList){
   FILE *fptr;

   if ((fptr = fopen("dataUser.bin","rb")) == NULL){
        fprintf(stderr,"Error will opening the file");
        return;
   }
    User newNode;
   while(fread(&newNode, sizeof(User), 1, fptr)){
        User* temp = makeUser(newNode.nom,newNode.prenom,newNode.password,newNode.date_N,newNode.type,newNode.login);
        temp->id = newNode.id;
        temp->suivant = *userList;
        *userList = temp;
   }
   fclose(fptr); 
}


#endif