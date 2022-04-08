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


//Count
     int count = 0;
        for (int i = 0; i < N; i++){
        if (T[i] > 5){
            count ++;
        }
    }



     printf("On a %d element sup de 5 \n",count );



    return 0;
   
}