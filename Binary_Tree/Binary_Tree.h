#ifndef BINTREE
#define BINTREE
#include<stdlib.h>

typedef struct Node
{
	char* data;
	struct Node* left;
	struct Node* rigth;
} Node;

Node* create();
// return: the node created

void traversal(Node* root);
// root: the root node of which to traversal

#endif
