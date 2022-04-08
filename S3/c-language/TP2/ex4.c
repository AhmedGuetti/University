#include<stdio.h>


int main(){
    int m;
    printf("Enterer m \n");
    scanf("%i", &m);

    while (m < 0 )
    {
        printf("m is a strict positive interger \n");
        scanf("%i", &m);
    }
    
    int count = 1;
    for (int i = 1; i <= m  / 2; i++){ 
       if (m % i == 0) count++;
    }

    printf("Le nombre de deviseure est : %i \n",count);
    printf("\n\n");

    count = 1;
    int i = 1;
    while (i <= m)
    {
        if (m % i == 0) count++;
       i++;
    }

        printf("(WHILE)Le nombre de deviseure est : %i \n",count);


    return 0;
}