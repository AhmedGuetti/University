#include<stdio.h>
#include<math.h>


int main(){
    int m,n,i=1;
    long int s = 1;

    printf("Enterer n \n");
    scanf("%i", &n);


    printf("Enter m \n");
    scanf("%i", &m); 
    
    while (m <= 0){
        printf("m est un nombre possitife stricte \n");
        scanf("%i", &m); 
    }
    
    for ( int i = 1;i <= m;i++ ){
        s = s * n;
    }



    printf("Le resultate avec la boucle FOR  est %li \n",s);

    s = 1;

    while ( i <= m ){
        s = s * n;
        i++;
    }


    printf("Le resultate avec la boucle While est %li \n",s);

    s  = 1;
    
    do
    {
    s = s * n; 
    i++;
    } while (i<=m);
    
    printf("Le resultate avec la boucle Do while est %li \n",s);



    return 0;
}