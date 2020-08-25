#ifndef H_SLL
#define H_SLL

struct Node {
	int data;
	struct Node* next;
};

struct Node* reverseListRec(struct Node* head);
struct Node* insertNode(struct Node* head, int x);
void printList(struct Node* head);
void printRecursively(struct Node* head);
struct Node* createNode(int vlaue);
struct Node* insertAtPosition(struct Node* head, int data, int pos);
struct Node* deleteNode(struct Node* head, int pos);
struct Node* reverseList(struct Node* head);
#endif //H_SLL
