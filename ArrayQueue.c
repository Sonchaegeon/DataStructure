#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 10
int front = -1, rear = -1;

int delq(int* queue) {
	if (front == rear) return printf("QUEUE is NULL!");
	else queue[++front] = NULL;
}

int addq(int* queue, int value) {
	if (rear >= MAX - 1) return printf("QUEUE is FULL!");
	else queue[++rear] = value;
}

int main() {
	int arr[MAX];
	for (int i = 0; i < MAX; i++) addq(arr, i);
	for (int i = 0; i < 5; i++) delq(arr);
	for (int i = 0; i < MAX; i++) printf("%d ", arr[i]);
	printf("REAR: %d", rear);
}
