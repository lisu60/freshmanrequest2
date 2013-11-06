#include"Binary_Tree.h"

int main()
{
	Node *root, *n;
	(root=create())->data="root";
	n=root->left=create();
	n->data="node 1";
	n=root->rigth=create();
	n->data="node 2";
	n=n->left=create();
	n->data="node 3";
	n=root->left;
	n=n->rigth=create();
	n->data="node 4";
	traversal(root);
	return 0;
}
