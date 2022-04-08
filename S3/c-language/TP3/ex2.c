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



    //Print table
    for (int i = 0; i < N; i++){
        printf("T[%d] = %f \n",i,T[i]);    
    }
    printf("\n");


    //Finding Min and Max
    
    int max=0,min=0;
    int v_max = T[0],v_min = T[0];
    int temp;
    for (int i = 1; i < N; i++)
    {
        if (T[i] > v_max){
            v_max = T[i];
            max = i;
        }
        if (T[i] < v_min){
            v_min = T[min];
            min = i;
        } 
    }

        //Swping
        T[max] = v_min;
        T[min] = v_max;  
    


        //Print table
    for (int i = 0; i < N; i++){
        printf("T[%d] = %f \n",i,T[i]);    
    }
    printf("\n");



    
    return 0;
}