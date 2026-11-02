// Problem 9 – Find the largest and smallest element in an array.

#include <stdio.h>

int main() {
    int arr[5];
    int largest, smallest;

    printf("Enter 5 numbers:\n");

    // Input array elements
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Initially assume first element is largest and smallest
    largest = arr[0];
    smallest = arr[0];

    // Find largest and smallest
    for(int i = 1; i < 5; i++) {

        if(arr[i] > largest) {
            largest = arr[i];
        }

        if(arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    printf("Smallest element = %d\n", smallest);

    return 0;
}
