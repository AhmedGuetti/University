#include<stdio.h>
#include<stdlib.h>


int main(){

    int *p = (int *)malloc(8*sizeof(int));

    for(int i = 0;i<=8;i++){
        printf("Enter a number : ");
        scanf("%d",p+i);
    }
    
    printf("\n");

    for(int i = 0;i<=8;i++){
        printf("%d ,",*(p+i));
    }

    free(p);


    return 0;
}