#include<stdio.h>
#include<stdlib.h>




int main(){


    float** q = (float **)malloc(4*sizeof(float));
    if(q == NULL){printf("memory allocation failed")}

    for(int i = 0;i<4;i++){
        *(q+i) = (float *)calloc(5,sizeof(float));
        if(*(q+i) == NULL){printf("memory allocation failed")}

    }


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("A[%d][%d]", i,j);
            scanf("%f", *(q+i)+j);
        }
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("%f \t", *(*(q+i)+j));
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++)
            *(*(q+i)+j) = 2 * (*(*(q+i)+j)  *  *(*(q+i)+j)) + 3 ;


    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 5; j++){
            printf("%f \t", *(*(q+i)+j));
        }
        printf("\n");
    }


    for(int i = 0; i < 4; i++){
        free(*q+i)
    }

    free(q)
    return 0;
}



 //   int *s = *q ,*e = (*q+4)+5;
 //   for(int * ind = s;ind<=e; ind++){
 //           int i = (ind - s) / m;
 //           int j = (ind - s) % m;
//
 //           printf("A[%d][%d] = ",i,j);
 //           scanf("%d",ind);
 //   }
//
//
//
 //   for(int* ind = s;ind<=e; ind++){
 //           int i = (ind - s) / m;
 //           int j = (ind - s) % m;
//
 //           if(j == 0 ){
 //               printf("\n");
 //           }
 //           printf("%d\t",*ind);
//
//
 //   }
//