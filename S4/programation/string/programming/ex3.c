#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void inverseString(char* str) {

}


int main() {

	char TABCH[5][50];
	printf("Saisir 5 mots\n");
	for (int i = 0; i < 5; i++)
		scanf("%s", TABCH[i]);

	for (int k = 0; k < 5; k++) {
		int size = strlen(TABCH[k]);
		int i = 0, j = size - 1;
		while (i < j) {
			char temp = TABCH[k][j];
			TABCH[k][j] = TABCH[k][i];
			TABCH[k][i] = temp;
			i++;
			j--;
		}
	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n", TABCH[i]);
	}


	return 0;
}