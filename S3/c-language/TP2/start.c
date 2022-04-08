#include<stdio.h>


void start1(int n){

    for (int i = 0; i < n; i++){   
        for (int j = 0; j < i; j++){
            printf("* ");
        }
        printf("\n");
    }
}


void start2(int n){
    for (int i = 1; i <= n; i++){   
        for (int j = 1; j <= n - i ; j++){
            printf("* ");
        }
        printf("\n");
    }

}




int main(){

    start1(10);
    start2(11);

    return 0;
}