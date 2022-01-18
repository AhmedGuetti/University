#include<stdio.h>
#include<stdlib.h>




int main(){
    //n et m sant des variables de programme
    int n,m;
    printf("Saisir n :");       scanf("%d",&n);
    printf("Saisir m :");     scanf("%d",&m);

    //Initialiser un tableaux de taille n*m de deux dimanssion 
    float T[n][m];
    float** p = NULL;

    //Question 1: initialisation du tableaux :

    printf("Lecture de la matrice \n");

    for (int i =0;i<n;i++){
        for (int j = 0; j < m; j++){
            printf("T[%d][%d] = ",i,j); scanf("%f",&T[i][j]); //&T[i][j] === T[i]+j === *(T+i)+j
        }
    }


    p=(float **)malloc(n*sizeof(float*));

    if(p==NULL){
        printf("Error : malloc failed \n");
        exit(1);
    }

    for(int i =0;i<n;i++){
        p[i]=(float*)malloc(m*sizeof(float));
        if(p[i]==NULL) {
            printf("memory allocation failed\n");
            exit(1);
        }
        else{
           //Question 2: Affecter T a p;
           //p[i]=&T[i][0] //&T[i][0] === T[i] 
        }
    }

    //Question2 : my aproach
        for (int i =0;i<n;i++){
            for (int j = 0; j < m; j++){
                p[i][j]=T[i][j];
            }
            
        }
    
        
    //Question 3 : Affichage.
    printf("Affichage du matrice \n");

    for (int i =0;i<n;i++){
        for (int j = 0; j < m; j++){
            printf("%.2f \t",i,j,p[i][j]);
        }
        printf("\n");
    }

    





    return 0;
}