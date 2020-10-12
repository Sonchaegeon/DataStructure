#include <stdio.h>
#include <stdlib.h>

typedef struct Node* NodePointer;
typedef struct Node {
	int data;
	NodePointer link;
}Node;
NodePointer top = NULL;

void push(int value);
int pop();
int isEmpty();

int main() {
	//테스트를 위한 공간
	push(1);
	push(2);
	printf("%d %d\n", top->data, top->link->data);
	printf("%d\n", pop());
	printf("%d\n", pop());
}

int isEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

void push(int value) {
	NodePointer temp = (NodePointer)malloc(sizeof(Node));
	temp->data = value;
	temp->link = top;
	top = temp;
}

int pop() {
	if (!isEmpty()) {
		NodePointer temp = top;
		int item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
	else return printf("Stack is empty!");
}
