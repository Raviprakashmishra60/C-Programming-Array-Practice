//Problem 10: Sort an array in ascending order.

#include <stdio.h>

int main() {
    int arr[5];
    int temp;

    printf("Enter 5 numbers:\n");

    // Input array elements
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting in ascending order
    for(int i = 0; i < 5 - 1; i++) {

        for(int j = 0; j < 5 - i - 1; j++) {

            if(arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

            }
        }
    }

    // Display sorted array
    printf("Array in ascending order:\n");

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
