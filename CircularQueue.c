#include <stdio.h>
#pragma warning(disable:4996)
#define MAX 10
int front = -1, rear = -1;

int delq(int* queue) {
	if (front == rear) return printf("QUEUE is NULL");
	front++;
	front = front % MAX;
	return queue[front] = -1;
}

int addq(int* queue, int value) {
	if ((rear + 1) % MAX == front) return printf("QUEUE is FULL!");
	rear++;
	rear = rear % MAX;
	queue[rear] = value;
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
