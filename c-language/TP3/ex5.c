#include<stdio.h>




int main(){
    int N;
    printf("Enter a size of a table \n");
    scanf("%d", &N);

    float T[N];

    for (int i = 0; i < N; i++){
        printf("T[%d] = ",i);
        scanf("%f", &T[i]);
        printf("\n");
    }


//Print
    for (int i = 0; i < N; i++){
        printf("T[%d] = %f \n",i,T[i]);    
    }
    printf("\n");


//Produit
    int produit = 1; 
        for (int i = 0; i < N; i++){
        produit *= T[i];
    }



     printf("Le profuit de se tablaux est : %d \n",produit);



    return 0;
   
}