#include <stdio.h>
#include "BST.h"
#include <stdlib.h>
using namespace std;



int main() {

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
	bool found = searchNode(root, 25);
	if(found) printf("found\n");
	else printf("not found\n");
	printf("the max value in the tree is: %d\n", findMax(root));
	printf("the hight of the binary tree is: %d\n", maxHight(root));
	levelOrderTraversal(root);
	int arr[4] = { 0, 0, 0, 0 };
	int* res = isPresent(root, arr);
	for(int i = 0; i < 4; i++){
		printf("%d\n",res[i]);
	}
	//head = deleteNode(root);
	return 0;
}
