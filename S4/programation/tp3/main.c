#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "crypt.h"
//#include "def_types.h"


void clear() {
#ifdef __unix__  /* __unix__ is usually defined by compilers targeting Unix systems */
	system("clear");

#elif defined(_WIN32) || defined(WIN32)  /* _Win32 is usually defined by compilers targeting 32 or   64 bit Windows systems */
	system("cls");
#endif
}





enum identification{CIN,CNE,APOGEE};
typedef enum identification identification;


enum Type_Utilisateure{ETUDIANT,ADMINISTRATEUR};
typedef enum Type_Utilisateure Type_Utilisateure;

union Nom_Utilisateur{
    char CIN[8];
    char CNE[10] ;
    int APOGEE ;
};
typedef union Nom_Utilisateur Nom_Utilisateur;


struct User{
    identification id;
    Nom_Utilisateur login;
    char password[20];
    Type_Utilisateure type;
    char nom[20];
    char prenom[20];
    char date_N[10];
    struct User* suivant;
};
typedef struct User User;

struct Livre{
    char ISBN[13];
    char title[50];
    char auteur[50];
    struct Livre* suivant;
};
typedef struct Livre Livre;


typedef Livre* list_books;
typedef User* list_user;
typedef char* string;

/*
    1- Add Users to a list of user 
        1. list 1 student user 
    2- Display all User 
    3- Display all Books
    4- make menu nedded
    5- search a user by (CIN CNE Naproge)
*/

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


void initUsers(list_user* userList,string name, string lastName, string password,string date,Type_Utilisateure type,Nom_Utilisateur login){
    User* newNode = makeUser(name,lastName,password,date, type,login);
    newNode->id = 1;
    *userList = newNode;
}



void addbook(list_books* lv,char* ISBN,char* title, char* auteur){
    Livre* new_book = (Livre*)malloc(sizeof(Livre));
    strcpy(new_book->ISBN, ISBN);
    strcpy(new_book->title, title);
    strcpy(new_book->auteur, auteur);
    new_book->suivant = *lv;
    *lv = new_book;
}
void displayBooks(list_books* lv){
    Livre* temp = *lv;
    while(temp != NULL){
        printf("ISBN : %s\n",temp->ISBN);
        printf("Title : %s\n",temp->title);
        printf("Auteur : %s\n",temp->auteur);
        temp = temp->suivant;
    }
    printf("\n============================================================\n");
}


void addUser(list_user* userList){
    Nom_Utilisateur login;

        clear();
        printf("\n============================== MENU ==================================\n");
        printf("1- use CIN \n");
        printf("2- use CNE \n");
        printf("3- use apogee \n");
        int choice;
        scanf("%d",&choice);
        identification id;

        switch (choice){
            case 1:
                clear();
                printf("Enter CIN : ");
                scanf("%s",login.CIN);
                id = CIN; 
                getc(stdin);
                //scanf("%c");
                break;
            case 2:
                clear();
                printf("Enter CNE : ");
                scanf("%s",login.CNE);
                id = CNE;
                getc(stdin);
                //scanf("%c");
                break;
            case 3:
                clear();
                printf("Enter APROGEE : ");
                scanf("%d",&login.APOGEE);
                id = APOGEE;
                break;
            default:
                fprintf(stderr, "Value entered is incorrect please chode 1 or 2 ,3");
                break;

    }

    char name[20];
    printf("Enter the name : ");
    scanf("%s", name);
    char lastName[20];
    printf("Enter the last name : ");
    scanf("%s", lastName);
    char password[20];
    printf("Enter the password : ");
    scanf("%s", password);
    char date[10];
    printf("Enter the date of birth : ");
    scanf("%s", date);


    clear();
    printf("\n============================== MENU ==================================\n");
    printf("1- ADMINISTRATEUR \n");
    printf("2- ETUDIANT \n");
    scanf("%d",&choice);
    Type_Utilisateure type;
    if(choice == 1){
        type = ADMINISTRATEUR;
    }else{
        type = ETUDIANT;
    }

    User* newNode = makeUser(name,lastName,password,date, type,login);
    newNode->id = id;
    newNode->suivant = *userList;
    *userList = newNode;
}

void DisplayUsers(list_user* userList){
    User* temp = *userList;
    while(temp != NULL){
        printf("nom : %s\n",temp->nom);
        printf("prenome : %s\n",temp->prenom);
        printf("password : %s\n",temp->password);
        printf("birth data : %s\n", temp->date_N);
        printf("type : %s\n",(temp->type == ADMINISTRATEUR)?"administrateur":"etudiant");
        if(temp->id == CIN)
            printf("login : %s\n",temp->login.CIN);
        if(temp->id == CNE)
            printf("login : %s\n",temp->login.CNE);
        if(temp->id == APOGEE)
            printf("login : %d\n",temp->login.APOGEE);
        
        temp = temp->suivant;
    }
    printf("\n============================================================\n");


}

int connect(list_user*,list_books*);


void menuEtudiant(list_user* userList,list_books* lv){
        int choice;
    do{
         clear();
        printf("\n============================== MENU ==================================\n");
        printf("1- Afficher la liste des livres \n");
        printf("2- Se deconnecter \n");
        printf("Tapez votre choix \n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                clear();
                printf("Afficher les livre \n");
                displayBooks(lv);
                getc(stdin);
                getc(stdin);
                //return;
                break;
            case 2:
                clear();
                 printf("se deconnecter \n");
                connect(userList,lv);
                break;
            default:
                fprintf(stderr, "Value entered is incorrect please chode 1 or 2");
                break;
        }
    }while(choice!=1||choice!=2);
       
}


void menuAdmin(list_user* userList,list_books* lv){
    int choice;
    do{
        clear();
        printf("\n============================== MENU ==================================\n");
        printf("1- Afficher la liste d'utilisateurs\n");
        printf("2- Ajouter un utilisateurs\n");
        printf("3- Afficher la liste des livres\n");
        printf("4- se deconnecter\n");

        printf("Tapez votre choix \n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                clear();
                DisplayUsers(userList);
                getc(stdin);
                getc(stdin);
                break;
            case 2:
                clear();
                printf("Ajouter un utilisateurs\n");
                addUser(userList);
                break;
            case 3:
                clear();
                printf("Afficher la liste des livres\n");
                displayBooks(lv);
                getc(stdin);
                getc(stdin);
                break;
            case 4:
                clear();
                printf("se deconnecter \n");
                connect(userList,lv);
                break;
            default:
                fprintf(stderr, "Value entered is incorrect please chose 1 or 2 ,3 or 4");
                break;
        }
    }while(choice!=1||choice!=2||choice!=3||choice!=4);
        
}

int autho(list_user* userList, Nom_Utilisateur login, string password){
    //search for user 
    User* temp = *userList;
    int i = 0;
    while(temp != NULL){

        if(login.CIN == temp->login.CIN || login.CNE == temp->login.CNE || login.APOGEE == temp->login.APOGEE){
            if(!strcmp(temp->password,password)){
                return i;
            } 
            break;
        }
        ++i;
        temp = temp->suivant;
    }
    return -1;
}


int connect(list_user* userList,list_books* lv){
        Nom_Utilisateur login;
        
        clear();
        printf("\n============================== MENU ==================================\n");
        printf("1- use CIN \n");
        printf("2- use CNE \n");
        printf("3- use apogee \n");
        int choice;
        scanf("%d",&choice);

        switch (choice){
            case 1:
                clear();
                printf("Enter CIN : ");
                scanf("%s",login.CIN);
                //scanf("%c");
                break;
            case 2:
                clear();
                printf("Enter CNE : ");
                scanf("%s",login.CNE);
                //scanf("%c");
                break;
            case 3:
                clear();
                printf("Enter APROGEE : ");
                scanf("%d",&login.APOGEE);
                break;
            default:
                fprintf(stderr, "Value entered is incorrect please chode 1 or 2 ,3");
                break;

    }
    char password[20];
    printf("Enter password : ");
    scanf("%s",password);
    //scanf("%c");
     
    
    int pos = autho(userList,login,password);
    if(pos == -1) return -1;
    User* temp = *userList;
    int i = 0;
    while(temp!=NULL && i!=pos ){
        temp = temp->suivant;
    }
    Type_Utilisateure type = temp->type;
    if(type == ADMINISTRATEUR){
        menuAdmin(userList,lv);
    }else if(type == ETUDIANT){
        menuEtudiant(userList,lv);
    } else{
        fprintf(stderr, "priorety dumps please check if the code doesn't crache");
    }
    return 1;
}



int main (){
    list_user* user_head = (list_user*)malloc(sizeof(list_user));
    Nom_Utilisateur login;
    strcpy(login.CIN , "FH8999");
    initUsers(user_head, "John","Doe","010101","01/01/1970",ADMINISTRATEUR,login);


    list_books* books_head = (list_books*)malloc(sizeof(list_books));
    addbook(books_head,"73434523","Living in the Light","David Sargent");
    addbook(books_head,"43242232","In Cold Blood","Truman Capot");
    addbook(books_head,"73434523","cloudy outside","anonymous");
    addbook(books_head,"43242232","atomic habite","rayen kilbert");
    if(connect(user_head,books_head) == -1){
        printf("can't connect no such user");
    };
    return 0 ;
}