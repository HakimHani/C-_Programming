#include <stdio.h>
#include "dll.h"


int main(){
	Node *head = NULL;
	head = insertAtHead(head, 4);
	head = insertAtHead(head, 5);
	head = insertAtHead(head, 9);
	head = insertAtHead(head, 10);
	printList(head);
	printf("\n");
	insertAtTail(head, 6);
	insertAtTail(head, 7);
	insertAtTail(head, 11);
	printList(head);
	printf("\n");
	insertAtPosition(&head, 12, 1);
	insertAtPosition(&head, 12, 1);
	printList(head);
	printf("\n");
	//head = deleteAtPosition(head, 4);
	//head = deleteAtPosition(head, 3);
	//printList(head);
	//printf("\n");
	head = reverseList(head);
	printList(head);
	printf("\n");
	return 0;
}
