#include<stdio.h>
#include<stdlib.h>



void prinArray(float **A,int p,int q){

    for(int i = 0; i < p; i++){
        for(int j = 0; j < q ;j++){
            printf("%.2f  \t",A[i][j]);
        }
        printf("\n");
    }

}





int main(){

    int p,q;
    printf("Saisir p : "); scanf("%d",&p);
    printf("Saisir q : "); scanf("%d",&q);

    // Allouez l'espace memoire 
    float** A = (float **)malloc(p*sizeof(float*));
    for(int i=0; i<p; i++) A[i] = (float*)malloc(q*sizeof(float));

    //Initialissation de tableux

    
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q ;j++){
            printf("A[%d][%d] = ",i,j); scanf("%f",*(A+i)+j);
        }
    }
    //Affichage du tableux

    
    prinArray(A,p,q);

printf("------------------------------------------\n");
    //Multi du col tableux
    float Multi[q];

    for(int j = 0; j <q;j++) Multi[j] = 1;


    for(int i = 0; i < p; i++){
        for(int j = 0; j < q ; j++){
            Multi[j] = Multi[j] * A[i][j];
        }
    }
    

    //Affichage du tableux du MALTI
    for(int r = 0; r < q; r++){
            printf("%.2f\t",Multi[r]);
    }
printf("\n------------------------------------------\n");


    //Indice du plus gande Multi des col
    int MAX_COL = 0;
    for(int i = 0; i < q; i++){
        if(Multi[i]>Multi[MAX_COL]) MAX_COL = i;
    }

    printf("\nCol %d de Multi = %f\n", MAX_COL, Multi[MAX_COL]);
printf("------------------------------------------\n");


    //nombre de 10
    int tens = 0;
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q ;j++){
            if(A[i][j] == 10) tens++;
        }
    }

    printf("%d of ten\n",tens);


printf("------------------------------------------\n");

    int max[2] = {0,0};
    int min[2] = {0,0};

    
    for(int i = 0; i < p; i++){
        for(int j = 0; j < q ;j++){
            if(A[i][j] > A[ max[0] ][ max[1] ]) {
                max[0]=i; 
                max[1]=j;
            }
            if(A[i][j] < A[ min[0] ][ min[1] ]){ 
                min[0]=i; 
                min[1]=j;
            }

        }
    }

    
       printf("max = %d, %d",max[0],max[1]);
       printf("min = %d, %d\n",min[0],min[1]);



    float temp = A[max[0]][max[1]];
    A[max[0]][max[1]] = A[min[0]][min[1]];
    A[min[0]][min[1]] = temp;

    //Affichage du tableux

    
     prinArray(A,p,q);

printf("------------------------------------------\n");

    int k;
    do{
        printf("Saisir k : "); scanf("%d",&k);
    }while(k>q && k<0);

    for(int i = 0; i < p; i++) A[i][k] = A[i][k]*A[i][k];

    //Affichage du tableux
     prinArray(A,p,q);



    return 0;
}


