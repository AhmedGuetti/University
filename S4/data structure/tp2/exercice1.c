#include <stdio.h>
#include <stdlib.h>



struct Element {
	int data;
	struct Element* next;
};
typedef struct Element Element;


struct List {
	Element* head;
	Element* tail;
	unsigned int size;
};
typedef struct List List;

void init_List(List* T, int x) {
	Element* node = (Element*)malloc(sizeof(Element));
	node->data = x;
	node->next = NULL;
	T->head = node;
	T->tail = node;
	T->size++;
}

void affiche(List* T) {
	Element* cour = T->head;
	while (cour != NULL) {
		printf("%d \t", cour->data);
		cour = cour->next;
	}
	printf("\n");
}

void inser_debut(List* T,int x) {
	Element* node = (Element*)malloc(sizeof(Element));
	node->data = x;
	node->next = T->head;
	T->head = node;
	T->size++;
}

void inser_fin(List* T, int x) {
	Element* node = (Element*)malloc(sizeof(Element));
	node->data = x;
	node->next = NULL;
	T->tail->next = node;
	T->size++;
}

void insert_after_position(List* T, int x, int pos) {
	
	if (pos < 0 || pos > T->size) {
		fprintf(stderr, "ERROR : BOUNDRY EXETED");
		exit(0);
	}


	Element* node = (Element*)malloc(sizeof(Element));
	node->data = x;
	node->next = NULL;
	
	
	if (pos == 1) {
		node->next = T->head;
		T->head = node;
		T->size ++;
		return;
	}

	Element* cour = T->head;
	
	for (int i = 0; i < pos - 1; ++i)
		cour = cour->next;
	
	node->next = cour->next;
	cour->next = node;
	T->size++;
}



void add_position(List* l, int data, int k) {


	if (k < 0 || k > l->size) {
		fprintf(stderr, "ERROR : BOUNDRY EXETED");
		exit(0);
	}



	Element* node = (Element*)malloc(sizeof(Element));
	node->data = data;
	node->next = NULL;


	if (k == 1) {
		node->next = l->head;
		l->head = node;
		l->size++;
		return;
	}


	if (l->head == NULL) {
		l -> head = node;
		l->tail = node;
		l->size++;

	}
	else
	{
		Element* ptr;
		ptr = l->head;
		for (int i = 1; i < k - 1; i++)
		{
			ptr = ptr->next;
		}
		node->next = ptr->next;
		ptr->next = node;
		l->tail = l->size++;
	}

}








void supprimer_debut(List* T) {
	Element* temp = T->head;
	T->head = T->head->next;
	free(temp);
	T->size--;
}

void supprimer_at(List* T, int pos) {
	

	if (pos < 0 || pos > T->size) {
		fprintf(stderr, "ERROR : BOUNDRY EXETED");
		exit(0);
	}

	if (pos == 0) {
		supprimer_debut(T);
		return;
	}

	Element* cour = T->head;


	for (int i = 0; i < pos - 1; ++i)
		cour = cour->next;
	Element* temp = cour->next;
	cour->next = cour->next->next;
	free(temp);
	T->size--;
}

void Search_Delete(List* T,int x) {
	Element* cour = T->head;
	while (cour->data != x) {
		if (cour == NULL) {
			fprintf(stderr, "END OF LIST no element found");
			exit(0);
		}
		cour = cour->next;

	}
	Element* temp = cour->next;
	cour->next = cour->next->next;
	free(temp);
	T->size--;
}

void sort(List* T) {
	Element* cour = T->head;
	Element* temp = T->head;
	while (cour != NULL) {
		temp = cour;
		while (temp != NULL) {
			if (cour->data > temp->data) {
				int tempint = cour->data;
				cour->data = temp->data;
				temp->data = tempint;
			}
			temp = temp->next;
		}
		cour = cour->next;
	}
}

void free_list(List* T) {
	Element* cour = T->head;
	while (cour != NULL) {
		Element* temp = cour;
		cour = cour->next;
		free(temp);
	}
	free(T);
}

int main() {
	List* T = (List*)malloc(sizeof(List));
	T->head = NULL;
	T->tail = NULL;
	T->size = 0;
	init_List(T,108);
	printf("%d", T->head->data);
	printf("\n");
	
	inser_debut(T, 23);
	inser_fin(T, 54);
	inser_debut(T,763);
	inser_fin(T, 45);
	insert_after_position(T, 666, 0);
	affiche(T);
	supprimer_at(T, 2);
	affiche(T);
	Search_Delete(T, 763);
	affiche(T);

	add_position(T, 3333, 1);
		affiche(T);
	sort(T);
	affiche(T);
	


	return 0;
}