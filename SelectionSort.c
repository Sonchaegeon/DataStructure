#include <stdio.h>
#include <string.h>
#define MAX 10
#pragma warning (disable:4996)

int main() {
	int arr[MAX] = { 10, 9, 2, 3, 4, 1, 6, 5, 7, 8 };
	int i, j, temp = 0, min = 0;

	for (i = 0; i < MAX - 1; i++) {
		min = i;
		for (j = i + 1; j < MAX; j++) {
			if (arr[min] > arr[j]) min = j;
		}

		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}

	for (i = 0; i < 10; i++) printf("%d ", arr[i]);
}
