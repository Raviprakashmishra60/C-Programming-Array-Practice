// Problem 6: Find the second largest element in an array.

#include <stdio.h>
int main() {
    int arr[5];
    int largest, secondLargest;
    printf("Enter 5 numbers:\n");
    // Input array elements
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    largest = arr[0];
    secondLargest = -2147483648;
    // Find second largest
    for(int i = 1; i < 5; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == -2147483648) {
        printf("Second largest element does not exist");
    }
    else {
        printf("Second largest element = %d", secondLargest);
    }
    return 0;
}
