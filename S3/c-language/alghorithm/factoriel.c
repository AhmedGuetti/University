#include<stdio.h>
#include "./header/factoriel.h"




long fact_recurence_1(int N){
    if(N == 0) return 1;
    return N*fact_recurence_1(N-1);
}


long fact_recurence_2(int N, int k){
    if(N == 0) return k;
    return fact_recurence_2(N-1,N*k);
}



long fact_iterative(int N){
    long Fact = 1;
    for(int i = 1; i <= N;i++) Fact *= i;
    return Fact;
}


