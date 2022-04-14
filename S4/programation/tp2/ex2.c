#include <stdio.h>
#include <stdlib.h>



int** matrixi(int row, int column){
	int** matrix = (int**)malloc(row*sizeof(int*));
	if(matrix == NULL) return NULL;		
	for(int i=0;i<row;++i){
		matrix[i] = (int*)malloc(column*sizeof(int));
		if(matrix[i] == NULL) return NULL;
	}
	return matrix;
}

void readmatrixi(int** matrix,int row, int column){
	printf("Reading the values of the matrix\n");
	for(int i=0;i<row;++i){
		for(int j=0;j<column;++j){
			scanf("%d",matrix[i]+j);
		}
	}
}

void afficher_matrice(int** matrix, int row, int column){
	for(int i=0;i<row;++i){
                for(int j=0;j<column;++j){
                        printf("%d \t",matrix[i][j]);
                }
		printf("\n");
        }
}


int main(){
	int** iMat = matrixi(5,5);
	readmatrixi(iMat,5,5);
	afficher_matrice(iMat,5,5);
	
return 0;
}
