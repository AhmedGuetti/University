#include<stdio.h>




int main(){
    int n;
    printf("Enterer n \n");
    scanf("%i", &n);

    double s = 0;
    long int fact = 1;


    for (int p = 1; p <= n; p++){
        fact =  fact * p;
        s += (double)1/fact;
    }
    printf("Le resultat est : %lf\n", s);



    return 0;
}