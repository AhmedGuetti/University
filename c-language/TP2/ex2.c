#include<stdio.h>



int main(){
    int n,i=1;
    printf("Enterer n \n");
    scanf("%i", &n);

    double s = 0;

    for (; i <= n; i++){
        s += (double)1/i;
    }

    printf("Le resultat avec FOR est : %lf\n", s);

    s = 0;
    i = 1;

    while (i<=n)
    {
        s+= (double)1/i;
        i++;
    }
        printf("Le resultat avec While est : %lf\n", s);

    s = 0;
    do{
        s += (double)1/i;
        i++;
    }while (i<=n);

        printf("Le resultat avec Do While est : %lf\n", s);
            

    return 0;
}