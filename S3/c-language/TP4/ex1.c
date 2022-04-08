#include<stdio.h>

#define n 5
#define m 6

int main(){

//int n,m;
//printf("Enter a number \n");
//printf("N = ");
//scanf("%d", &n);
//printf("\nM = ");
//scanf("%d", &m);

double T[n][m];
// Caculat the table value
for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        T[i][j] = i+j;
    }
}

//Affiche de tableux
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%lf \t",T[i][j]);
        }
        printf("\n");
    }
    return 0;
}