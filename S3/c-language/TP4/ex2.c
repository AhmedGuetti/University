#include<stdio.h>




int main(){


        // Q1
    int n,m;
    printf("Enter a number \n");
    printf("N = ");
    scanf("%d", &n);
    printf("\n = ");
    scanf("%d", &m);

        //Q2

    int T[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("T[%d][%d] = ", i,j);
            scanf("%d",&T[i][j]);
            printf("\n");
        }
        printf("\n");
    }

    int X[m][1];

    for (int i = 0; i < m; i++){
            printf("X[%d][1] = ",i);
            scanf("%d",&X[i][1]);
            printf("\n");
    }




printf("T table :::: \n");
        for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d \t",T[i][j]);
        }
        printf("\n");
    }



printf("X table :::: \n");
        for (int i = 0; i < m; i++){
            printf("%d \t",X[i][1]);
        printf("\n");
    }


        //Q3
            
    int Mult[n][1];
        for (int i = 0; i < n; i++){
            Mult[i][1] = 0;
                for (int j = 0; j < m; j++){
                    Mult[i][1] += T[i][j]*X[j][1];  
                }
        }


//Affiche de tableux
    for (int i = 0; i < n; i++){
            printf("%d \t",Mult[i][1]);
    }


        



    return 0;
}