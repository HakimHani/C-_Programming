#ifndef BST_H
#define BST_H

struct BSTNODE {

	struct BSTNODE* left;
	struct BSTNODE* right;
	int data;
};

struct BSTNODE* deleteNode(struct BSTNODE* root);
void leverlOrderTraversal(struct BSTNODE* root);
struct BSTNODE *createNode(int data);
struct BSTNODE *insertNode(struct BSTNODE* root, int data);
_Bool searchNode(struct BSTNODE* root, int value);
int findMax(struct BSTNODE* root);
int maxHight(struct BSTNODE* root);
#endif 
