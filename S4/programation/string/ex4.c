#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING_MAX_LENGTH 200

int main() {
	char* line = (char*)malloc(STRING_MAX_LENGTH*sizeof(char));
	fgets(line, STRING_MAX_LENGTH, stdin);
	int size = strlen(line);
	//int word_count = 0;
	//int space_position[STRING_MAX_LENGTH / 2];
	char words[200];
	int start = 0;
	int pos=0;
	for (int i = 0; i <= size; i++){
		if (line[i] == ' ' || line[i] == '\0') {
			int w_size = i - start;
			words[pos] = (char*)malloc(w_size * sizeof(char) + 1);
			strncpy(words[pos],line + start,w_size);
			pos++;
			start = i+1;
		}
	}

	for (int i = 0; i < pos; ++i){
		printf("%s \n", words[i]);
	}

	return 0;
}