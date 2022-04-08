#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        char* model[6] = {"Electronique","Alghorithm","Linux","Programming C","Probability","Tecnology web"};

    /* =================== Exerci 1 Sart =================== */
    struct Date {
        int jour;
        int mois;
        int anne;
    };
    typedef struct Date Date;
    struct Etudient{
        char nom[20];
        char prenom[20];
        Date date;
        int CNE;
        float note[6];
    };
    typedef struct Etudient Etudient;
    /* =================== Exerci 1 End =================== */



int* parseDate(const char* DateString){ 
    int dateint[3];
    int date_start = 0; // pointer to the first eleemnt in the date
    int i = 0;
    while( DateString[i] != '\0'){
        if(DateString[i] == '/'){




        }
        ++i;
    }
}

typedef enum {
    NOM = 1,
    PRENOM,
    DATE,
    CNE,
    NOTES
}prop;



    void CreeEtudiant(Etudient* E);
    void afficherEtudient(Etudient E);
    float CalculerMoyenS3(Etudient E);
    void modifieEtudient(Etudient* E);
int main(){


    /* =================== Exerci 2 Sart =================== */
    Etudient E1;
    CreeEtudiant(&E1);
    afficherEtudient(E1);
     

    printf("le moy de E1 : %f\n",CalculerMoyenS3(E1));



    /* =================== Exerci 2 End =================== */
    printf("\n======================================\n");
    /* =================== Exerci 3 Sart =================== */
    Etudient E2;
    strcpy(E2.nom,"Raddi");
    strcpy(E2.prenom,"Nadia");
    E2.date.jour = 5;
    E2.date.mois = 8;
    E2.date.anne = 2022;
    E2.CNE = 22494456;
    float notes[6] = {15.5,13.75,8,14,11,18};
        for(int i =0;i<6;++i)    
            E2.note[i] = notes[i];
        
    afficherEtudient(E2);
    modifieEtudient(&E2);
    afficherEtudient(E2);
    
    printf("le moy de E1 : %f\n",CalculerMoyenS3(E2));

    /* =================== Exerci 3 End =================== */
    printf("\n======================================\n");
    /* =================== Exerci 4 Sart =================== */
    Etudient E3;
    strcpy(E3.nom,E2.nom);
    strcpy(E3.prenom,E2.prenom);
    E3.date.jour = E2.date.jour;
    E3.date.mois = E2.date.mois;
    E3.date.anne = E2.date.anne;
    E3.CNE = E2.CNE;
    for(int i =0;i<6;++i)    
        E3.note[i] = E2.note[i];
        
    afficherEtudient(E3);
    printf("le moy de E1 : %f\n",CalculerMoyenS3(E3));
    

    /* =================== Exerci 4 End =================== */

    return 0;
}






/* =================== Exerci 5 Start =================== */
void CreeEtudiant(Etudient* E){
    printf("Saisir les valeur de Etudient\n");
    printf("Enter votre nom \t"); scanf("%s",E->nom);
    printf("Enter votre prenom \t"); scanf("%s",E->prenom);
    printf("Enter date mm jj aa \t"); scanf("%d %d %d",&E->date.jour,&E->date.mois,&E->date.anne);
    printf("Enter CNE \t"); scanf("%d",&E->CNE);

    printf("Saisir les note : \n");
        for(int i =0;i<6;++i){
            printf("%s : ",model[i]); //globale variable 
            scanf("%f",E->note + i);
        }
}


void afficherEtudient(Etudient E){
    printf("le nom : %s\n",E.nom);
    printf("le prenom : %s\n",E.prenom);
    printf("La date : %d/%d/%d \n",E.date.jour,E.date.mois,E.date.anne);
    printf("Enter CNE %d \n",E.CNE);
    printf("Saisir les note : \n");
        for(int i =0;i<6;++i)
            printf("%s : %f\n",model[i],E.note[i]);
}


float CalculerMoyenS3(Etudient E){
    float moy = 0;
    for(int i=0;i<6;++i)
        moy += E.note[i];
    moy = moy / 6;
    return moy;

}


/* =================== Exerci 5 End =================== */
/* =================== Exerci 6 Start =================== */

void modifieEtudient(Etudient* E){
    int prop;

    while(1){
        #ifdef _WIN32
           system("cls");
        #endif
        #ifdef __linux__
           system("clear");
        #endif
        printf("What do U wanna modifie : \n");
        printf("========== Chose one of this choises ===================\n");
        printf("1)  Nome                                               =\n");
        printf("2)  Prenom                                             =\n");
        printf("3)  Date                                               =\n");
        printf("4)  CNE                                                =\n");
        printf("5)  Note                                               =\n");
        printf("6)  Exit                                               =\n");
        printf("========================================================\n");
        scanf("%i",&prop);
        switch(prop){
            case 1:
                printf("Enter votre nom \t"); scanf("%s",E->nom);
                break;
            case 2:
                printf("Enter votre prenom \t"); scanf("%s",E->prenom);
                break;
            case 3:
                printf("Enter date mm jj aa \t"); scanf("%d %d %d",&E->date.jour,&E->date.mois,&E->date.anne);
                break;
            case 4:
                printf("Enter CNE \t"); scanf("%d",&E->CNE);
                break;
            case 5:
                printf("Saisir les notes : \n");
                for(int i =0;i<6;++i){
                    printf("%s : ",model[i]); //globale variable 
                    scanf("%f",E->note + i);
                }
                break;
            case 6:
                goto End;
                break;
            default:
                printf("Please enter a valid choise !!! \n");
        }


    }
    End: ;
   
}




/* =================== Exerci 6 End =================== */
