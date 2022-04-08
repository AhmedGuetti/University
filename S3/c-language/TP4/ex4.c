#include<stdio.h>



#define n 3

int main(){



float T[n][n];
float S[n][n];





    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("T[%d][%d] = ", i,j);
            scanf("%f",&T[i][j]);
            printf("\n");
        }
        printf("\n");
    }



    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("S[%d][%d] = ", i,j);
            scanf("%f",&S[i][j]);
            printf("\n");
        }
        printf("\n");
    }

    float P[n][n];
        for (int i = 0; i < n; i++){
        for (int j = 0; j< n; j++){
            P[i][j] = 0;
                for (int p = 0; p < n; p++)
                    P[i][j] += T[i][p]*S[p][j];  
                
        }
    }



//Affiche de tableux
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%f \t",P[i][j]);
        }
        printf("\n");
    }







    return 0;
}