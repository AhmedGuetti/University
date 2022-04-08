#include <stdio.h>
#include <stdlib.h>
#include<time.h>



void twoDarray(int lc){
    time_t t;
    srand((unsigned)time(&t));

    int** ligne = (int**)malloc(lc*sizeof(int*));


    for(int i = 0; i <lc; i++){ 
        int* col = (int*)malloc(lc*sizeof(int));
        for(int j = 0; j < lc; j++){ 
            *(col+j) =  rand() % 100;
        }
        *(ligne+i) = col;
    }

    for(int i = 0; i < lc; i++){
        for(int j = 0; j < lc; j++){
            printf("%d \t",*(*(ligne + i)) + j);
        }
        printf("\n");
    }
}


int* testFunction(){
    int* t = NULL;
    int b = 10;
    //&b = "A";
    t = &b;
    return t;  
}

int main(int argc, char **argv){
    //twoDarray(5);


    int* t =  testFunction();
    printf("the value of t is : 0x%x \n", t);
    printf("the value in the address of t is : %d \n", *t);
    //printf("the value of b is : %d \n", b);
    // error: ‘b’ undeclared (first use in this function)



    return 0;
}