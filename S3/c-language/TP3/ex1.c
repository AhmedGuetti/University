#include<stdio.h>

#define N 10
#define pow2(X) X*X





void PrintTable(float arr[]){

    printf("+=======================+\n");
    printf("+        le tableux     +\n");
    printf("+          0x%x    +\n",arr);
    printf("+                       +\n");
    printf("+                       +\n");
    printf("+=======================+\n");


    for (int i = 0; i < N; i++){
        printf("T[%d] = %f \n",i,arr[i]);    
    }
    printf("\n");
}



int main(){


    float T1[N] = {12.12,15.8,48,78,9,5,6,8,7,41};
    float T2[N];

    for (int i = 0; i < N; i++){   
        T2[i] = pow2(i) - 2;
    }


    



    float T3[N];
    for (int i = 0; i < N; i++)
    {
        printf("T[%d] = ",i);
        scanf("%f", &T3[i]);
        printf("\n");
    }

    PrintTable(T1);
    PrintTable(T2);
    PrintTable(T3);

    





    return 0;
}