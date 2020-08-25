#include <stdio.h>
#include "BST.h"
#include <stdlib.h>



void main() {

	struct BSTNODE* root = NULL;
	root = insertNode(root, 10);
	root = insertNode(root, 20);
	root = insertNode(root, 25);
	root = insertNode(root, 11);
	root = insertNode(root, 30);
	root = insertNode(root, 40);
	root = insertNode(root, 9);
	root = insertNode(root, 8);
	root = insertNode(root, 7);
	root = insertNode(root, 6);
	root = insertNode(root, 5);
	root = insertNode(root, 5);
	root = insertNode(root, 5);
	_Bool found = searchNode(root, 25);
	if(found) printf("found\n");
	else printf("not found\n");
	printf("the max value in the tree is: %d\n", findMax(root));
	printf("the hight of the binary tree is: %d\n", maxHight(root));
	levelOrderTraversal(head);
	//head = deleteNode(root);
}
