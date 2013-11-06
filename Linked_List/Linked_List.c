#include<stdio.h>
#include<stdlib.h>
#include"Linked_List.h"

int i;

Node* traversal(Node*, int);

Node* create()
{
	Node* result;
	result=(Node*)malloc(sizeof(Node));
//	result->data=NULL;
	result->data="new node";
	result->next=NULL;
	return result;
}

void removeNode(Node* first, int index)
{
	Node *prevNode, *targetNode;
	if(index<0) return;
	prevNode=find(first, index-1);
	targetNode=prevNode->next;
	prevNode->next=targetNode->next;
	printf("%s removed\n",targetNode->data);
	free(targetNode);
}

Node* insert(Node* first, int index)
{
	Node *prevNode, *result;
	if(index<0) return NULL;
	prevNode=find(first, index-1);
	result=create();
	result->next=prevNode->next;
	prevNode->next=result;
	return result;
}

int insertToEnd(Node* first)
{
	Node* lastNode;
	i=0;
	lastNode=traversal(first, -1);
	lastNode->next=create();
	return i+1;
}

Node* find(Node* first, int index)
{
	if(index<0)
		return NULL;
	i=-1;
	return traversal(first, index);
}

void deleteList(Node* first)
{
	if(first->next!=NULL)
		deleteList(first->next);
	printf("%s deleted\n", first->data);
	free(first);
}


// this function can only be called by other functions in this source file
// need to set variable i before calling
Node* traversal(Node* current, int index)
{
	printf("traversal at %s\n", current->data);
	if(current->next==NULL)
		return current;
	else if(i==index-1)
		return current;
	else
	{
		i++;
		return traversal(current->next, index);
	}
}
