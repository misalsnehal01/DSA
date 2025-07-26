//linked list Approach-I
#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
void main () {
	struct Node *head=NULL;
	struct Node *newNode=(struct Node*)(sizeof(struct Node));
	newNode->data=10;
	newNode->next=NULL;

	head =newNode;

	 newNode=(struct Node*)(sizeof(struct Node));
	newNode->data=20;
	newNode->next=NULL;
        head->next=newNode;

	 newNode=(struct Node*)(sizeof(struct Node));
	newNode->data=30;
	newNode->next=NULL;
        head->next->next=newNode;
}//if no of node is more then this code can't work
