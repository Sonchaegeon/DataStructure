#include <stdio.h>
#include <string.h>
#define MAX 10
#pragma warning (disable:4996)

int main() {
	int arr[MAX] = { 10, 9, 2, 3, 4, 1, 6, 5, 7, 8 };
	int i, j, temp = 0;

	for (i = MAX - 1; i > 0; i--) {
		for (j = 0; j < i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (i = 0; i < 10; i++) printf("%d ", arr[i]);
}
