#include <string.h>
#include <stdio.h>
#include "BST.h"
#include <stdlib.h>
#include <stdbool.h>
#include <queue>
using namespace std; 

int* isPresent(struct BSTNODE* root, int* list){
	if(root == NULL) return list;
	int length = sizeof(list)/sizeof(list[0]);
	// int* res{ new int[length]{} };
	for(int i = 0; i < 4; i++){
		int val = isPresentHelper(root, list[i]);
		if(val == 1)
			list[i] = 1;
		else
			list[i] = 0;
		
	}
	return list;
}

int isPresentHelper(struct BSTNODE* root, int val){
	struct BSTNODE* temp = root;
	if(temp == NULL) return 0;
	if(temp->data == val)
		return 1;
	return (isPresentHelper(temp->left, val) || isPresentHelper(temp->right, val));
	// if(leftval == 1)
	// 	return leftval;
	// return isPresentHelper(temp->right, val);
		// return rightval;
}

void levelOrderTraversal(struct BSTNODE* root){
	queue<struct BSTNODE*> Q;
	Q.push(root);
	while(!Q.empty()){
		struct BSTNODE* current = Q.front();
		printf("%d ", current->data);
		if(current->left != NULL)
			Q.push(current->left);
		if(current->right != NULL)
			Q.push(current->right);
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
