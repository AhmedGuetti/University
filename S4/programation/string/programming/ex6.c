#include <stdio.h>
#include <stdlib.h>
#include <string.h>



const char* VerbTerm[6] = {"e","es","e","ons","ez","ent"};
const char* sujets[6] = { "Je ", "Tu ", "Il/Elle ", "Nous ", "Vous ", "Ils/Elles " };




int isVerb1g(const char* verb) {
	int v_size = strlen(verb);
	const char last_two[3];
	strcpy(last_two, verb + v_size - 2);
	if (strcmp(last_two, "er") == 0) {
		return 1;
	}
	return 0;
}

void Conjuger(const char* verb) {
	if (isVerb1g(verb) != 1) {
		fprintf(stderr, "Not 1er groupe verb");
		exit(0);
	}
	int v_size = strlen(verb);
	char* baseVerbe = (char*)malloc((v_size-2) * sizeof(char));
	char* doneVerbe[6];
	strncpy(baseVerbe, verb, v_size - 2);
	for (int i = 0; i < 6; i++){
		doneVerbe[i] = (char*)malloc((strlen(sujets[i]) + strlen(baseVerbe) + strlen(VerbTerm[i])) * sizeof(char));
		strcpy(doneVerbe[i], sujets[i]);
		strcat(doneVerbe[i], baseVerbe);
		strcat(doneVerbe[i], VerbTerm[i]);
	}

	printf("conjugaison du verbe %s : \n",verb);
	for (int i = 0; i < 6; ++i)
		puts(doneVerbe[i]);
}


int main() {
	char verb[100];
	printf("Saisir un verbe de 1 er group \n");
	scanf("%s", verb);
	Conjuger(verb);

	return 0;
}