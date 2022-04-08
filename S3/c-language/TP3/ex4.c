#include<stdio.h>

#define N 10




int main(){

    float T[N]={9,8,7,6,5,4,3,2,1,0};

    //Print
     for (int i = 0; i < N; i++){
        printf("T[%d] = %f \n",i,T[i]);    
    }
    printf("\n");

    //Selection Sort

        for (int i = 0; i < N-1; i++){\
        int temp;
           for (int j = i + 1; j < N; j++){
               if (T[j] <= T[i]){
                   temp = T[i];
                   T[i] = T[j];
                   T[j] = temp;
               }
           }
          
        }




        //Print
     for (int i = 0; i < N; i++){
        printf("T[%d] = %f \n",i,T[i]);    
    }
    printf("\n");



    




    return 0;
}
