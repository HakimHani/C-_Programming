#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sll.h"
 
int main(){
	struct Node* head = NULL;
	head = insertNode(head, 5);
	head = insertNode(head, 4);
	printList(head);
	head = insertAtPosition(head, 3, 2);
	printList(head);
	head = insertAtPosition(head, 8, 1);
	printRecursively(head);
	printf("\n");	
	printList(head);
	head = reverseListRec(head);
	printList(head);
	head = deleteNode(head,1);
	head = deleteNode(head,1);
	printList(head);
	head = reverseList(head);
	printList(head);
}
