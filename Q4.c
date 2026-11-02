// Problem 4: Delete a specific integer from an array.

#include <stdio.h>
int main() {
    int arr[5];
    int n = 5;
    int num, found = 0;
    printf("Enter 5 numbers:\n");
    // Input array elements
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to delete: ");
    scanf("%d", &num);
    // Search and delete element
    for(int i = 0; i < n; i++) {
        if(arr[i] == num) {
            found = 1;
            for(int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            break;
        }
    }
    if(found == 1) {
        printf("Array after deletion:\n");

        for(int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("Element not found!");
    }
    return 0;
}
