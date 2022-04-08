#include<stdio.h>
#include<stdlib.h>

int** makeMatrix(int C, int R){
    int** A = (int**)malloc(N*sizeof(int));
    if(A == NULL) return -1;
    for (int i = 0; i < N; i++){
        A[i] = (int*)malloc(M*sizeof(int));
        if(A[i] == NULL) return -1;
    }
    return A;
}

void putsMatrix(int** Matrix, int C, int R){
    for (int i = 0; i < C; i++)
        for (int i = 0; i < R; i++){
            printf("A[%d][%d] = ",i,j);
            scanf("%d",A[i]+j);
        }
}



int main(){
    int N,M,P;
    printf("Siasir N : \n"); scanf("%d",&N);
    printf("Siasir M : \n"); scanf("%d",&M);
    printf("Siasir P : \n"); scanf("%d",&P);


//    int A[N][M];
//    int B[M][P];
    int** A = makeMatrix(N,M);
    int** B = makeMatrix(M,P);

    putsMatrix(A,N,M);
    putsMatrix(B,M,P);

    for (int i = 0; i < C; i++)
    {
        for (int i = 0; i < R; i++)
        {
            for (int i = 0; i < count; i++)
            {
                /* code */
            }
            
        }
        
    }
    return 0;
}