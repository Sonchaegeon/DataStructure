#include <stdio.h>
#pragma warning(disable:4996)

typedef struct Node* TreePointer;
typedef struct Node {
	TreePointer left;
	int data;
	TreePointer right;
}Node;
TreePointer search(TreePointer ptr, int key);

int main() {
	Node node1 = { NULL, 1, NULL };
	Node node3 = { NULL, 3, NULL };
	Node node2 = { &node1, 2, &node3 };
	Node node5 = { NULL, 5, NULL };
	Node node4 = { &node2, 4, &node5 };
	
	printf("%d\n", &node3);
	printf("%d", search(&node4, 3));
	return 0;
}

TreePointer search(TreePointer ptr, int key) {
	if (!ptr) return NULL;
	if (ptr->data == key) return ptr;
	if (key < ptr->data) search(ptr->left, key);
	else search(ptr->right, key);
}
