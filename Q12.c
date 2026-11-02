// Question 12: Find the second smallest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int arr[5];
    int smallest, secondSmallest;

    printf("Enter 5 numbers:\n");

    // Input array elements
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    secondSmallest = INT_MAX;

    // Find second smallest
    for(int i = 1; i < 5; i++) {

        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX) {
        printf("Second smallest element does not exist");
    }
    else {
        printf("Second smallest element = %d", secondSmallest);
    }

    return 0;
}
