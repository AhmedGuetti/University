#include<stdio.h>


int main(){

    for (int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d \t",i*j);
        }
        printf("\n");
    }
    
printf("\n\n\n");
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d \t ",i*j);
            if (i == j) break;
            
        }
        printf("\n");
        
    }
printf("\n\n\n");

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if (i == j) {
                printf("* \t");
                continue;

                }
            
            printf("%d  \t",i*j);
            
        }
        printf("\n");
        
    }
    

    return 0;
}