#include <stdio.h>



int main(int argc, char **argv){

    int n,m;
    int *p,*q;
    p = &n,q = &m;

    printf("Entrer un valeur pour n puis m \n");
    scanf("%d %d",p,q);

    printf("valeur avant \n");
    printf("n = %d, m = %d *p = %d, *q = %d \n",n,m,*p,*q);

    (*p)++;
    (*q)--;

    printf("valeur apres \n");
    printf("n = %d, m = %d *p = %d, *q = %d \n",n,m,*p,*q);

    return 0;
}