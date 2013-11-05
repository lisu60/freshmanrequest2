#include<stdio.h>
#include"Linked_List.h"

Node* list;

int main()
{
	Node* n;
	list=create();
	list->data="a";
	n=list->next=create();
	n->data="b";
	n=n->next=create();
	n->data="c";
	removeNode(list, 1);
	deleteList(list);
	list=NULL;
	return 0;
}
