
#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 10
int front = -1, rear = -1;

int delq(int* queue) {
	if (front == rear) return printf("QUEUE is empty");
	else queue[++front] = -1;
}

int addq(int* queue, int value) { 
	if (rear >= MAX - 1) {
		if (front == -1) return printf("QUEUE is FULL!");
		for (int i = front + 1; i <= rear; i++) queue[i - front - 1] = queue[i];
		rear = rear - front -1;
		front = -1;
		queue[++rear] = value;
	}
	else queue[++rear] = value;
}

int main() {
	int arr[MAX];
	for (int i = 0; i < 10; i++) addq(arr, i);
	for (int i = 0; i < 5; i++) delq(arr);

	for (int i = 0; i < MAX; i++) printf("%d\n", arr[i]);
	printf("REAR: %d", rear);
}
