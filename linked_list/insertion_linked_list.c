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

struct node * insertBegin(struct node *head, struct node *node_ptr){
	node_ptr->next = head;
	head = node_ptr;
	return head;
}

void insertEnd(struct node *head, struct node *node_ptr){
	while(head->next != NULL){
		head = head->next;
	}
	head->next = node_ptr;
	node_ptr->next = NULL;
}

void insertPosition(struct node *head, struct node *node_ptr, int pos){
	short int i=0;
	for(; i < pos-2; i++){
		head = head->next;
	}

	node_ptr->next = head->next;
	head->next = node_ptr;
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
	printf("Linked list before inserting: ");
	printList(head);

	struct node * nodeToInsert = (struct node*)malloc(sizeof(struct node));
	printf("enter the data of new node to insert: ");
	scanf("%d", &nodeToInsert->data);
	head = insertBegin(head, nodeToInsert);
	printf("Linked list after inserting at the beginning: ");
	printList(head);
	struct node *endInsert = (struct node*)malloc(sizeof(struct node));
	printf("enter data to insert at end: ");
	scanf("%d", &endInsert->data);
	insertEnd(head, endInsert);
	printf("Linked list after inserting at the end: ");
	printList(head);
	unsigned int pos;
	struct node *middleInsert = (struct node*)malloc(sizeof(struct node));
	printf("enter the position to insert data: ");
	scanf("%d", &pos);
	printf("enter the data to insert in the position %d: ", pos);
	scanf("%d", &middleInsert->data);
	insertPosition(head, middleInsert, pos);
	printf("Linked list after inserting at given position: ");
	printList(head);
	
}	
