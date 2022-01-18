#include <stdio.h>


int main(){
    int n = 3,m = 3;
    int T[n][m];

    int *s = (int*)T ,*e = &T[n-1][m-1];
    for(int * ind = s;ind<=e; ind++){
            int i = (ind - s) / m;
            int j = (ind - s) % m;

            printf("A[%d][%d] = ",i,j);
            scanf("%d",ind);
    }



    for(int* ind = s;ind<=e; ind++){
            int i = (ind - s) / m;
            int j = (ind - s) % m;

            if(j == 0 ){
                printf("\n");
            }
            printf("%d\t",*ind);


    }

    printf("\n");
        int* posMax  = (int *)T,*posMin = (int *)T;

    for(int* ind = s;ind<=e; ind++){
            int i = (ind - s) / m;
            int j = (ind - s) % m;
            if(*posMax < *ind) posMax = ind;
            if(*posMin > *ind) posMin = ind;
    }


    printf("MAX-indice = [%d,%d] \nMIN-indice = [%d,%d] \n\n",(posMax - s)/m,(posMax - s)%m,(posMin - s)/m,(posMin - s)%m);
    printf("MAX = %d \nMIN = %d",*posMax,*posMin);




    return 0;
}