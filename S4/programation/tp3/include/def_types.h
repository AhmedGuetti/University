#ifndef _DEF_TYPES_H_
#define _DEF_TYPES_H_






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


#endif