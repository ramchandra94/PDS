#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

void printList(struct node const *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

void main(){
	// create a dummy linked list of size 3.
	short int i;
	struct node *head = (struct node *)malloc(sizeof(struct node));
	head->data = 2;
	struct node *temp = head;
	for(i=0; i<2;i++){
		struct node *newNode = (struct node*)malloc(sizeof(struct node));
		newNode->data = 3+i;
		newNode->next = NULL;
		temp->next = newNode;
		temp = newNode;
	}
	temp = NULL;
	printList(head);
}	
