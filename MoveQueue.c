#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 10
int front = -1, rear = -1;

int delq(int* queue) {
	return queue[++front] = -1;
}

int addq(int* queue, int value) {
	if (rear >= MAX - 1) {
		if (front == -1) return printf("QUEUE is FULL!");
		for (int i = front + 1; i <= rear; i++) {
			queue[i - front - 1] = queue[i];
			queue[i] = -1;
		}
		rear = rear - front - 1;
		front = -1;
		queue[++rear] = value;
	}
	else queue[++rear] = value;
}

int main() {
	int arr[MAX] = { 0, };
	for (int i = 0; i < 10; i++) addq(arr, i);
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	delq(arr);
	delq(arr);
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\nrear: %d", rear);
	printf("\nfront: %d\n", front);
	addq(arr, 10);
	for (int i = 0; i < 10; i++) printf("%d ", arr[i]);
	printf("\n");
	printf("rear: %d front: %d", rear, front);

}
