#include<stdio.h>



#define n 2
#define m 3

int main(){



float T[n][m];





    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("T[%d][%d] = ", i,j);
            scanf("%f",&T[i][j]);
            printf("\n");
        }
        printf("\n");
    }





//Affiche de tableux
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%f \t",T[i][j]);
        }
        printf("\n");
    }




    // Find max and min
    int max_idx[2] = {0,0},min_idx[2] = {0,0};
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (T[i][j] > T[max_idx[0]][max_idx[1]]) {
                max_idx[0] = i;
                max_idx[1] = j;
                }
            if (T[i][j] < T[min_idx[0]][min_idx[1]]) {
                min_idx[0] = i;
                min_idx[1] = j;
                }
        }
    }
    printf("The max is in position: %d,%d and have value of %f \n", max_idx[0],max_idx[1],T[max_idx[0]][max_idx[1]]);
    printf("The min is in position: %d,%d and have value of %f \n", min_idx[0],min_idx[1],T[min_idx[0]][min_idx[1]]);
    


    return 0;
}