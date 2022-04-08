#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_ARRAY_STRING_A 4
#define MAX_ARRAY_STRING_B 4
#define MAX_STRING_CAP 200



int main() {
	char A[MAX_ARRAY_STRING_A][MAX_STRING_CAP];
	char B[MAX_ARRAY_STRING_B][MAX_STRING_CAP];
	char FUS[MAX_ARRAY_STRING_A + MAX_ARRAY_STRING_B][MAX_STRING_CAP];
	int i=0;
	printf("A : \n");
	while (i<MAX_ARRAY_STRING_A){
		fgets(A[i], MAX_STRING_CAP, stdin);
		if (strcmp(A[i],"done") == 0) break;
		++i;

	}
	printf("B : \n");

	i = 0;

	while (i < MAX_ARRAY_STRING_B) {
		fgets(B[i], MAX_STRING_CAP, stdin);
		if (strcmp(B[i],"done") == 0) break;
		++i;
	}

	for (int i = 0; i < MAX_ARRAY_STRING_A+MAX_ARRAY_STRING_B; ++i){
		if (i < MAX_ARRAY_STRING_A) strcpy(FUS[i], A[i]);
		else strcpy(FUS[i], B[i-MAX_ARRAY_STRING_A]);
	}
	char temp[MAX_STRING_CAP];
	// Bubble sorting 
	for (int i = 0; i < MAX_ARRAY_STRING_A + MAX_ARRAY_STRING_B - 1; ++i) {
		for (int j = 0; j < MAX_ARRAY_STRING_A + MAX_ARRAY_STRING_B - i - 1; ++j) {
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
	for (i = 0; i < MAX_ARRAY_STRING_A + MAX_ARRAY_STRING_B; ++i)
		printf("%s",FUS[i]);


	return 0;
}