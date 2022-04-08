#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
/*
this list is started counting from 1 not 0
*/

Node* makeNode(int data) {
	Node* node = (Node*)malloc(sizeof(Node));
	if (!node) return NULL;
	node->data = data;
	node->next = NULL;

	return node;
}

List initList() {
	List ls;
	ls.head = NULL;
	ls.end = NULL;
	ls.size = 0;
	ls.makeNode = &makeNode;
	ls.shift = &shift;
	ls.push = &push;
	ls._add = &_add;
	ls.unshift = &unshift;
	ls.pop = &pop;
	ls._remove = &_remove;
	ls._find = &_find;
	ls._at = &_at;
	ls._inverse = &_inverse;
	ls.printL = &printL;


	return ls;
}

void shift(List* _this,int data) {
	Node* node = _this->makeNode(data);
	if (!node) return NULL;
	node->next = _this->head;
	_this->head = node;
	if (_this->size == 0) _this->end = node;
	_this->size++;
}


void push(List* _this,int data) {
	Node* node = _this->makeNode(data);
	if (!node) return NULL;
	_this->end->next = node;
	_this->end = node;
	_this->size++;
}

void _add(List* _this, int data, int position) {
	if (position > _this->size || position < 0) {
		fprintf(stderr, "ERROR ADD: boundry violation position > list size or < 0\n");
		return NULL;
	}
	if (position == 1) {
		_this->shift(_this, data);
		return;
	}
	Node* node = _this->makeNode(data);
	Node* temp = _this->head;
	for (int i = 1; i < position - 1; i++)
		temp = temp->next;
	node->next = temp->next;
	temp->next = node;
	_this->size++;
}


void unshift(List* ls) {
	Node* temp = ls->head;
	ls->head = ls->head->next;
	free(temp);
	ls->size--;
}

void pop(List* _this) {
	Node* temp = _this->head;
	for (int i = 1; i < _this->size - 1; i++)
	{	
		temp = temp->next;
	}
	_this->end = temp;
	free(temp->next);
	temp->next = NULL;
	_this->size--;
}

void _remove(List* _this, int position) {
	if (position > _this->size || position < 0) {
		fprintf(stderr, "ERROR REMOVE: boundry violation position > list size or < 0 \n");
		return NULL;
	}
	if (position == 1) {
		_this->unshift(_this);
		return;
	}
	Node* temp = _this->head;
	for (int i = 0; i < position - 2; i++)
		temp = temp->next;
	Node* findedNode = temp->next;
	temp->next = findedNode->next;
	free(findedNode);
	_this->size--;
}
int _find(List* _this,int data) {
	//Linear Search implemented here
	Node* temp = _this->head;
	int index = 0;
	while (temp != NULL) {
		index++;
		if (temp->data == data) {
			return index;
		}
		temp = temp->next;
	}
	return 0;
}

int _at(List* _this, int position) {
	Node* temp = _this->head;
	for (int i = 1; i < position; i++){
		temp = temp->next;
	}
	return temp->data;
}

void _inverse(List* _this) {
	int n = (int)_this->size / 2;
	int* temp = (int*)malloc(n*sizeof(int));
	Node* temp_node = _this->head;
	for (int i = 1; i <= n; i++){
		temp[n-i] = temp_node->data;
		temp_node = temp_node->next;
	}

	int j = 0;
	for (int i = n; i < _this->size; i++){
		int temp_v = temp[j];
		temp[j] = temp_node->data;
		temp_node->data = temp_v;
		temp_node = temp_node->next;
		++j;
	}
	for (int i = 0; i < (n/2); i++) {
		int temp_v = temp[n - i - 1];
		temp[n - i - 1] = temp[i];
		temp[i] = temp_v;
	}
	temp_node = _this->head;
	for (int i = 0; i < n; i++){
		temp_node->data = temp[i];
		temp_node = temp_node->next;
	}
}

void printL(List* _this) {
	Node* temp = _this->head;
	while (temp != NULL) {
		printf("%d \t", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

