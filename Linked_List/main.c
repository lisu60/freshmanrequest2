#include<stdio.h>
#include"Linked_List.h"

Node* list;

int main()
{
	int a;
	Node* n;

	//use of deleteList()
	list=create();
	list->data="a";
	n=list->next=create();
	n->data="b";
	n=n->next=create();
	n->data="c";
	deleteList(list);
	printf("\n\n");

	//use of removeNode()
	list=create();
	list->data="a";
	n=list->next=create();
	n->data="b";
	n=n->next=create();
	n->data="c";
	removeNode(list, 1);
	deleteList(list);
	printf("\n\n");

	//use of insert()
	list=create();
	list->data="a";
	n=list->next=create();
	n->data="b";
	n=n->next=create();
	n->data="c";
	insert(list, 1);
	deleteList(list);
	printf("\n\n");

	//use of insertToEnd()
	list=create();
	list->data="a";
	n=list->next=create();
	n->data="b";
	n=n->next=create();
	n->data="c";
	insertToEnd(list);
	deleteList(list);
	printf("\n\n");

	//use of find()
	list=create();
	list->data="a";
	n=list->next=create();
	n->data="b";
	n=n->next=create();
	n->data="c";
	n=find(list, 1);
	printf("%s found\n", n->data);
	deleteList(list);
	printf("\n\n");
	return 0;
}
