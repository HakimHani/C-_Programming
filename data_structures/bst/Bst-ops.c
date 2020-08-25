#include <string.h>
#include <stdio.h>
#include "BST.h"
#include <stdlib.h>
#include <stdbool.h>

void levelOrderTraversal(struct Node* root){
	Queue<struct Node*> Q;
	Q.push(root)
	while(!Q.empyt()){
		struct Node* current = Q.front();
		printf("%d ", current->data);
		push(current->left);
		push(current->right);
		Q.pop();
	}
	printf("\n");
}

int maxHight(struct BSTNODE* root){
	if(root == NULL)
		return -1;
	int leftH = maxHight(root->left) + 1;
	int rightH = maxHight(root->right) + 1;
	if(leftH > rightH) return leftH;
	else return rightH;
}

struct BSTNODE *createNode(int data) {

	struct BSTNODE *newNode =(struct BSTNODE*)malloc(sizeof(struct BSTNODE));
	(*newNode).data = data;	
	newNode->left = newNode->right = NULL;
	return newNode;
}


struct BSTNODE *insertNode(struct BSTNODE *root, int data) {
	if(root == NULL){
	  root = createNode(data);
	}
	if(data < root->data)
	  root->left = insertNode(root->left, data);
	else if(root->data < data)
	 root->right = insertNode(root->right, data);
	 return root;
}

_Bool searchNode(struct BSTNODE *root, int value) {
	if(root == NULL)
	  return false;
	else if(root->data == value)
	  return true;
	else if(root->data > value)
	 return searchNode(root->left, value);
	else if(root->data < value)
	  return searchNode(root->right, value);
}

int findMax(struct BSTNODE* root){
	struct BSTNODE* temp = root;
	if(root == NULL)
		return -1;
	else if(root->right == NULL)
		return root->data;
	else
		return findMax(root->right);
	
}
