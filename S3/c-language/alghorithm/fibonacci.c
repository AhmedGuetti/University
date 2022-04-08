#include <stdio.h>
#include "./header/fibonacci.h"




long fibonacci_recurssion_1(int N){


/* Complexity exponensiale*/

    if(N==1 || N==0) return 1;
    return fibonacci_recurssion_1(N-1) + fibonacci_recurssion_1(N-2); 
}

long fibonacci_recurssion_2(int N, int a ,int b){


/* Complexity Linairer*/

    if(N==1 || N==0) return a;

    return fibonacci_recurssion_2(N-1,b,a+b);

    /* 1 1  2   3 5 8 13 21 */
    /* ^ ^  ^   ^           */
    /* a b a+b  ^           */
    /* X a  b  a+b          */

}


long fibonacci_iterative(int N){


/* Complexity Linairer*/

    if(N==1 || N==0) return 1;

    long a= 1;
    long Fib=1;
    int temp;
    for(int i=1;i<N;i++){
        temp = Fib;
        Fib += a;
        a = temp;
    }
    return Fib;

}






