#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int* crazy(){
    int * c = (int*) malloc(1000000000*sizeof(int));
    for(int i = 0; i < 1000000000;i++){
        *(c+i) = i;
    }
    return c;
}

int main(int argc, char **argv){


        //size_t strnlen(const char *str, size_t maxlen)
    char str1 [20]=  "BeginnersBook";
    printf("Length of string str1: %d \n", strlen(str1));
    printf("Length of string str1 when maxlen is 30: %d \n", strnlen(str1, 30));
    printf("Length of string str1 when maxlen is 10: %d \n", strnlen(str1, 10));


   int* c = crazy();

   free(c);
   for(int i = 0; i <1000000000; i++){
       printf("%d\n",*(c+i));
   }

    return 0;
}
