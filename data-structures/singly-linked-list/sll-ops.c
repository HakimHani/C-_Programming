#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sll.h"

struct Node* reverseListRec(struct Node* head) {
	struct Node *curr, *next, *q;
	curr = head;
	if(curr->next == NULL) {
		return head;
	}
	next = reverseListRec(curr->next);
	//curr->next->next = curr;
	q = curr->next;
	q->next = curr;
	curr->next = NULL;
	return next;
}

void printRecursively(struct Node* head){
	struct Node* temp = head;
	if(temp == NULL)
		return;
	printf("%d ", temp->data);
	printRecursively(temp->next);
	//printf("%d ", temp->data);
}

struct Node* insertNode(struct Node* head, int x) {
	struct Node* newNode = createNode(x);
	newNode->next = head;
	head = newNode;
	return head;
}


void printList(struct Node* head) {
	struct Node* temp = head;
	printf("List is: ");
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

struct Node* createNode(int value) {
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->data = value;
	return newNode;
}

struct Node* insertAtPosition(struct Node* head, int data, int pos) {
	struct Node* newNode = createNode(data);
	struct Node* temp = head;
	if(pos == 1){
		newNode->next = head;
		head = newNode;
		return head;
	}
	for(int i = 1; i < pos; i++) {
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode; 	
	return head;
}

struct Node* deleteNode(struct Node* head, int pos) {
	struct Node* temp = head;
	if(pos == 1){
		head = temp->next;
		free(temp);
		return head;	
	}
	for(int i = 0; i <= pos-2; i++){
		temp = temp->next;
	}
	struct Node* temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return head;
}	

struct Node* reverseList(struct Node* head) {
	struct Node *curr, *prev, *next;
	curr = head;
	prev = NULL;
	while(curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	head = prev;
	return head;
}
