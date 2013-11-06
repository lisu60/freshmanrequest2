#ifndef _LKLIST
#define _LKLIST
typedef struct Node
{
	int data;
	struct Node* next;
} Node;

Node* create();
// return: reference to the first node of the newly-created list

void removeNode(Node* first, int index);
// first: the first node of the target list
// index: the zero-based index of the node to remove

Node* insert(Node* first, int index);
// first: the first node of the target list
// index: the zero-based index of the node to insert.
// return: reference to the inserted node, NULL if arg>length

int insertToEnd(Node* first);
// first: the first node of the target list
// return: zero-based index of the inserted node

Node* find(Node* first, int index);
// first: the first node of the target list
// index: zero-based index of the node to fine.
// return: the reference to the found node, NULL if not found

void deleteList(Node* first);
// first: the first node of the target list
#endif
