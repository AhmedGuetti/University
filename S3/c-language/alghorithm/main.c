#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "./header/fibonacci.h"
#include "./header/factoriel.h"




int main(int argc, char **argv){

    system("clear");
    int choise = 0;
    while(true){
        printf("================================\n");
        printf("=         1- Fibonacci         =\n");
        printf("=         2- Factoriale        =\n");
        printf("=         3- trie              =\n");
        printf("=         3- Search            =\n");
        printf("=         3- EXIT              =\n");
        printf("================================\n");

        printf("Enter a choise :");
        scanf("%d",&choise);


        switch(choise){
            case 1:
            system("clear");
                int choisefib=0;
                bool cond=true;
                while(cond){
                    printf("============================================\n");
                    printf("=         1- fibonacci_recurssion_1        =\n");
                    printf("=         2- fibonacci_recurssion_3        =\n");
                    printf("=         3- fibonacci_iterative           =\n");
                    printf("=         4- exit                          =\n");
                    printf("============================================\n");

                    printf("Enter a choise :");
                    scanf("%d",&choisefib);

                        int N;
                        int Fib;
                    switch(choisefib){
                        case 1:
                            
                            printf("\n you are using the function that calculate the n'th number of fibonacci serie \n");
                            printf("\n the time complexity of this aproache is exponatiale O(n)=((1+sqrt(n))/2)^n \n");
                            printf("Enter a number : ");
                            scanf("%d",&N);
                            Fib=fibonacci_recurssion_1(N);
                            printf("\n fib(%d) = %ld \n",N,Fib);
                            break;
                        case 2:
                            
                            printf("\n you are using the function that calculate the n'th number of fibonacci serie \n");
                            printf("\n the time complexity of this aproache is Linear O(n)=n \n");
                            printf("Enter a number : ");
                            scanf("%d",&N);
                            Fib=fibonacci_recurssion_2(N,1,1);
                            printf("\n fib(%d) = %ld \n",N,Fib);
                            break;

                        case 3:
                            
                            printf("\n you are using the function that calculate the n'th number of fibonacci serie \n");
                            printf("\n the time complexity of this aproache is Linear O(n)=n and non recursive\n");
                            printf("Enter a number : ");
                            scanf("%d",&N);
                            Fib=fibonacci_iterative(N);
                            printf("\n fib(%d) = %ld \n",N,Fib);
                            break;
                        case 4:
                        cond=false;
                    }
                }
                break;
       
            case 2:

                system("clear");
                int choisefact=0;
                bool cond2=true;
                while(cond2){
                    printf("============================================\n");
                    printf("=         1- fact_recurence_1              =\n");
                    printf("=         2- fact_recurence_2              =\n");
                    printf("=         3- fact_iterative                =\n");
                    printf("=         4- exit                          =\n");
                    printf("============================================\n");

                    printf("Enter a choise :");
                    scanf("%d",&choisefact);

                        int N;
                        int Fact;
                    switch(choisefact){
                        case 1:
                            
                            printf("\n you are using the function that calculate the la factoriel de n \n");
                            printf("\n this recursion is non terminated  \n");
                            printf("Enter a number : ");
                            scanf("%d",&N);
                            Fact = fact_recurence_1(N);
                            printf("\n %d! = %ld \n",N,Fact);
                            break;
                        case 2:
                            
                            printf("\n you are using the function that calculate the la factoriel de n \n");
                            printf("\n this recursion is terminated  \n");
                            printf("Enter a number : ");
                            scanf("%d",&N);
                            Fact = fact_recurence_2(N,1);
                            printf("\n %d! = %ld \n",N,Fact);
                            break;

                        case 3:
                            
                            printf("\n you are using the function that calculate the la factoriel de n \n");
                            printf("\n this recursion is terminated  \n");
                            printf("Enter a number : ");
                            scanf("%d",&N);
                            Fact=fact_iterative(N);
                            printf("\n %d! = %ld \n",N,Fact);
                            break;
                        case 4:
                            cond2=false;
                    }
                }
                break;

               break;


            case 3:
               printf("\n TRIE \n");
               break;


            case 4:
               printf("\n Search \n");
               break;
            
            case 5:
                exit(0);       
       
       
       
       
        }





    }






    return 0;
}