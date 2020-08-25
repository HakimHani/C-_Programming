#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "dll.h"

//Node* InsertAtTail(Node* head, int data){
//	Node* temp = head;
//	Node* newNode = createNode(data);
//	if(temp == NULL) return temp;
//	temp = insertAtTail(temp->next, data);
//	temp->next = newNode;
//	newNode->prev = temp;
//	return head;
//}

Node* reverseList(Node* head){
	Node* curr = head;
	Node* temp = NULL;
	if(curr->next == NULL || curr == NULL){
		return head;
	}
	while(curr !=NULL){
		temp = curr->prev;
		curr->prev= curr->next;
		curr->next = temp;
		curr = curr->prev;
	}
	temp = temp->prev;
	return temp;
}

Node* deleteAtPosition(Node* head, int pos){
	Node* temp = head;
	Node* temp1 = NULL;
	if(pos == 1){
		head = head->next;
		return head;
	}
	for(int i = 1; i <= pos-2; i++){
		temp = temp->next;
	}
	temp1 = temp->next;
	temp->next = temp1->next;
	temp1->next->prev = temp;
	temp1->prev = NULL;
	return head;
}

void insertAtPosition(Node** head, int data, int pos){
	Node* newNode = createNode(data);
	Node* temp = *head;
	if(pos == 1){
		newNode->next = temp;
		temp->prev = newNode;
		*head = newNode;
	}
	else{
		for(int i = 1; i <= pos-2; i++){
			temp = temp->next;
		}
		newNode->next = temp->next;
		newNode->prev = temp;
		temp->next->prev = newNode;
		temp->next = newNode;
	}
}

Node *insertAtHead(Node *head, int data) {
	Node* newNode = createNode(data);
	if(head == NULL){
		head = newNode;
		return head;
	}
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
	return head;
}

void insertAtTail(Node *head, int data) {
	Node* newNode = createNode(data);
	Node* temp = head;
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;
	newNode->prev = temp;
}

Node *createNode(int data){
	Node* newNode = (Node*)malloc(sizeof(Node*));
	newNode->data = data;
	newNode->next = newNode->prev = NULL;
	return newNode;
}

void printList(Node* head){
	Node* temp = head;
	if(head == NULL){
		return;
	}
	printf("%d ", temp->data);	
	printList(temp->next);
	//printf("%d ", temp->data);
}
