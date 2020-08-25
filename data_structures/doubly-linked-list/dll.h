#ifndef DLL_H
#define DLL_H

typedef struct node {
	int data;
	struct node* next;
	struct node* prev;
} Node;

//Node* insertAtTail(Node* head, int data);
Node* reverseList(Node* head);
Node* insertAtHead(Node* head, int data);
Node* createNode(int data);
void printList(Node* head);
void insertAtTail(Node* head, int data);
void insertAtPosition(Node** head, int data, int pos);
Node* deleteAtPosition(Node* head, int pos);
#endif //DLL_H
