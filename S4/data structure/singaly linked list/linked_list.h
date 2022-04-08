#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

typedef unsigned int u_int;

struct Node {
	int data;
	struct Node* next;
};

typedef struct Node Node;

struct List {
	Node* head;
	Node* end;
	u_int size;


	void (*shift)(struct List*, int);
	void (*push)(struct List*, int);
	void (*unshift)(struct List*);
	void (*pop)(struct List*);
	void (*printL)(struct List*);
	Node* (*makeNode)(int);
	void (*_add)(struct List*, int, int);
	void (*_remove)(struct List*, int);
	int (*_find)(struct List*, int);
	int (*_at)(struct List*, int);
	void (*_inverse)(struct List*);



};

typedef struct List List;




//Fuction Declaration

List initList();
Node* makeNode(int);
void shift(List* , int);
void push(List* , int);
void unshift(List* );
void pop(List* );
void printL(List* );
void _add(List* , int , int );
void _remove(List*, int);
int _find(List*, int);
int _at(List*, int);
void _inverse(List*);


#endif // !_LINKED_LIST_H_
