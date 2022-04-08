#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_ARRAY_STRING_A 4
#define MAX_ARRAY_STRING_B 4
#define MAX_STRING_CAP 200



int main() {
	char A[MAX_ARRAY_STRING_A][MAX_STRING_CAP];
	char B[MAX_ARRAY_STRING_B][MAX_STRING_CAP];
	
	int n=0;
	printf("A : \n");
	while (n<MAX_ARRAY_STRING_A && strcmp(A[n-1],"done") != 10){
		fgets(A[n], MAX_STRING_CAP, stdin);
		++n;
	}
	--n;
	printf("B : \n");

	int k = 0;

	while (k < MAX_ARRAY_STRING_B && strcmp(B[k-1],"done") != 10) {
		fgets(B[k], MAX_STRING_CAP, stdin);
		++k;
	}
	--k;

	char FUS[n + k][MAX_STRING_CAP];


	for (int i = 0; i < n+k; ++i){
		if (i < n) strcpy(FUS[i], A[i]);
		else strcpy(FUS[i], B[i-n]);
	}
	char temp[MAX_STRING_CAP];
	// Bubble sorting 
	for (int i = 0; i < n + k - 1; ++i) {
		for (int j = 0; j < n + k - i - 1; ++j) {
			/*
			Return Value	Remarks
			0				if strings are equal
			>0				if the first non-matching character in str1 is greater (in ASCII) than that of str2.
			<0				if the first non-matching character in str1 is lower (in ASCII) than that of str2.
			*/
			if (strcmp(FUS[j], FUS[j + 1]) > 0) {
				strcpy(temp ,FUS[j]);
				strcpy(FUS[j], FUS[j + 1]);
				strcpy(FUS[j + 1], temp);
			}
		}
	}

	printf("FUS : \n");
	for (int i = 0; i < n + k; ++i)
		printf("%s",FUS[i]);


	return 0;
}