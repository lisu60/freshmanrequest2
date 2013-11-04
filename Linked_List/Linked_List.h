#ifndef _LKLIST
#define _LKLIST
struct node
{
	void* data;
	node* next;
}

node* create();
// return: reference to the first node of the newly-created list

void remove(node* first, int index);
// first: the first node of the target list
// index: the zero-based index of the node to remove

node* insert(node* first, int index);
// first: the first node of the target list
// index: the zero-based index of the node to insert.
// return: reference to the inserted node, NULL if arg>length

int insertToEnd();
// return: zero-based index of the inserted node

node* find(node* first, int index);
// first: the first node of the target list
// index: zero-based index of the node to fine.
// return: the reference to the found node, NULL if not found

#endif
