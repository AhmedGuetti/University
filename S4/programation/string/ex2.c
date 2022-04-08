#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int** makeTable2d(int row, int colomn) {
	int** arr = (int**)malloc(row * sizeof(int*));
	if (!arr) {
		fprintf(stderr, "malloc failed in mallocing space for A");
		return;
	}
	for (int i = 0; i < colomn; ++i) {
		*(arr + i) = (int*)malloc(colomn * sizeof(int));
		if (!arr[i]) {
			fprintf(stderr, "malloc failed in mallocing space for A[%d]", i);
			return;
		}
	}
	return arr;
}

void ReadTable(int** arr, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("A[%d][%d] = \t", i, j);
			scanf("%d", *(arr + i) + j);
		}
	}
}


void printMatrix2d(int** arr, int row, int column) {
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < column; j++) {
			printf("%d \t", *(*(arr + i) + j));
		}
		printf("\n");
	}
}


int main() {
	int N, M, P;
	printf("Saisir la valeur de N (# de ligne de A): "); scanf("%d", &N);
	printf("Saisir la valeur de M (# de column de A et lign de B): "); scanf("%d", &M);
	printf("Saisir la valeur de P (# de column de B):"); scanf("%d", &P);

	int** A = makeTable2d(N, M);
	printf("Table A : \n");
	ReadTable(A, N, M);
	int** B = makeTable2d(M, P);
	ReadTable(B, M, P);
	int** C = makeTable2d(N, P);


	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < P; ++j) {
			*(*(C + i) + j) = 0;
			for (int k = 0; k < M; k++) {
				*(*(C + i) + j) += *(*(A + i) + k) * *(*(B + k) + j);
			}
		}
	}


	printf("========== array A ===============\n");
	printMatrix2d(A, N, M);

	printf("\n========== array B ===============\n");
	printMatrix2d(B, M, P);

	printf("\n========== array C ===============\n");
	printMatrix2d(C, N, P);
	return 0;
}