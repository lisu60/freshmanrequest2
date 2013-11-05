#include"Linked_List.h"
#include<stdlib.h>
int i;

node* traversal(node*, int);

node* create()
{
	return malloc(sizeof(node));
}

void remove(node* first, int index)
{
	node* prevNode;
	if(index<0) return;
	prevNode=find(first, index-1);
	prevNode->next=prevNode->next->next;
	free(prevNode->next);
}

node* insert(node* first, int index)
{
	node* prevNode, result;
	if(index<0) return null;
	prevNode=find(first, index-1);
	result=create();
	result->next=prevNode->next;
	prevNode->next=result;
	return result;
}

int insertToEnd(node* first)
{
	node* lastNode;
	i=0;
	lastNode=traversal(first, -1);
	lastNode->next=create();
	return i+2;
}

node* find(node* first, int index)
{
	if(index<0)
		return null;
	i=-1;
	return traversal(first, index);
}




// this function can only be called by other functions in this source file
// need to set variable i before calling
node* traversal(node* current, int index)
{
	if(current->next==null)
		return current;
	else if(i==index-1)
		return current->next;
	else
	{
		i++;
		return traversal(current->next, index);
	}
}
