#include<stdio.h>
#include<stdlib.h>



int main(){

    int n, m;
    printf("Enrter n: ");
    scanf("%d",&n);
    printf("Enrter m: ");
    scanf("%d",&m);
    float T[n][m];

    for(int i=0; i < n; i++){
        for(int j=0; j<m; j++){
            printf("T[%d][%d] = ",i,j);
            scanf("%f",&T[i][j]);
        }
    }


            float** p;
            p = (float **)malloc(n*sizeof(float));
            if(p == NULL) printf("memory allocation failed");

            for(int i = 0;i<n;i++){
                *(p+i) = (float *)malloc(m*sizeof(float));
                if(*(p+i) == NULL) printf("memory allocation failed");
            }

    for(int i = 0; i < n; i++){
        //for(int j = 0; j < m; j++){
            //*(*(p+i)+j) = T[i][j];
        //}
        *(p+i) = &T[i][0];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            *(*(p+i)+j) = *(*(p+i)+j) * 2 + 2;
        }
    }

    int max[2] = {0,0};
    int min[2] = {0,0};


        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                printf("%.2f \t", *(*(p+i)+j));
            }
        printf("\n");
    }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
               if(*(*(p+max[0])+max[1]) < *(*(p+i)+j)){
                   max[0] = i;
                   max[1] = j;
               }
               if(*(*(p+min[0])+min[1]) > *(*(p+i)+j)){
                   min[0] = i;
                   min[1] = j;
               }
            }
    }
    printf("le max T[%d][%d] = %.2f\n", max[0],max[1],   *(*(p+max[0])+max[1])   );
    printf("le max T[%d][%d] = %.2f\n", min[0],min[1],   *(*(p+min[0])+min[1])   );
    return 0;
}