#include <stdio.h>
#include <stdlib.h>




int main(){


    int n;
    printf("Enter n: \n");
    scanf("%d",&n);


    //Initialise A
            int ** A = (int **)malloc(n*sizeof(int));
            if(A == NULL) printf("memory allocation failed");

            for(int i = 0;i<n;i++){
                *(A+i) = (int *)malloc(n*sizeof(float));
                if(*(A+i) == NULL) printf("memory allocation failed");
            }
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++){ 
                printf("A[%d][%d] = ", i, j);
                scanf("%d",*(A+i)+j);
            }

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                printf("A[%d][%d] = %d\n", i, j, *(*(A+i)+j));


            int ** B = (int **)malloc(n*sizeof(int));
            if(B == NULL) printf("memory allocation failed");

            for(int i = 0;i<n;i++){
                *(B+i) = (int *)malloc(n*sizeof(float));
                if(*(B+i) == NULL) printf("memory allocation failed");
            }

        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++){ 
                printf("B[%d][%d] = ", i, j);
                scanf("%d",*(B+i)+j);
        }


        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                printf("B[%d][%d] = %d\n", i, j, *(*(B+i)+j));

                //Produit de A et B


            int ** P = (int **)malloc(n*sizeof(int));
            if(P == NULL) printf("memory allocation failed");

            for(int i = 0;i<n;i++){
                *(P+i) = (int *)malloc(n*sizeof(float));
                if(*(P+i) == NULL) printf("memory allocation failed");
            }

            for (int i=0;i<n;i++)
                for (int j=0;j<n;j++){
                     int s=0; 
                    for (int x=0;x<n;x++) {
                        s=s+*(A[i]+x)**(B[x]+j);
                    }     
                        *(P[i]+j)=s;
                }   


        for(int i=0; i<n; i++){ 
             for(int j=0; j<n; j++)
                printf("%d\t", i, j, *(*(P+i)+j));
        printf("\n");
        }
           

    return 0;
}