#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};

void printList(struct node const *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

void deleteCompleteList(struct node *head){
	struct node *temp = head;
	while(temp != NULL){
		temp = head->next;
		free(head);
		head = temp;
	}
}


void main(){
	printf("size of the node is %ld \n", sizeof(struct node));
	
	int i, n;

	printf("Enter number of nodes to create linked list: ");
	scanf("%d", &n);

	struct node* head = (struct node*)malloc(sizeof(struct node));
	struct node* temp = head;
	for(i=0; i < n; i++){
		printf("Enter the data of node %d: ", i+1);
		if(i > 0){
			struct node *newNode = (struct node*)malloc(sizeof(struct node));
			scanf("%d", &newNode->data);
			temp->next = newNode;
			newNode->next = NULL;
			temp = newNode;
		}else{
			scanf("%d", &head->data);
			head->next = NULL;
		}
	}
	printList(head);
	deleteCompleteList(head);
}
