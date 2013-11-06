#include<stdio.h>
#include"Binary_Tree.h"

Node* create()
{
	Node* result;
	result=(Node*)malloc(sizeof(Node));
	result->data="new node";
	result->left=NULL;
	result->rigth=NULL;
	return result;
}

void traversal(Node* root)
{
	if(root->left)
		traversal(root->left);
	if(root->rigth)
		traversal(root->rigth);

	printf("accessed node: %s\n", root->data);
	free(root);
}
