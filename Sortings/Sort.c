#include<stdio.h>
#include"Sort.h"

void bubbleSort(Node* list)
{
}

void insertSort(Node* list)
{
}

void shellSort(Node* list)
{
}

void quickSort(Node* list)
{
}

void swap(Node* node1, Node* node2)
{
	int temp;
	temp=node1->data;
	node1->data=node2->data;
	node2->data=temp;
}

void pickInsert(Node* list, Node* prev, int index)
{
	Node *tar, *temp;
	if(index==0)
	{
		tar=prev->next;
		prev->next=tar->next;
		tar->next=list->next;
		list->next=tar;
		swap(list, tar);
	}
	else
	{
		temp=find(list, index-1);
		if(temp&&temp->next)
		{
			tar=prev->next;
			prev->next=tar->next;
			tar->next=temp->next;
			temp->next=tar;
		}
		else
			printf("pickAndInsert(): error index not found");
	}
}
