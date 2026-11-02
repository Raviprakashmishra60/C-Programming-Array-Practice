//Problem 3: Put even and odd elements of an array into 2 separate arrays.

#include <stdio.h>
int main() {
    int arr[5];
    int even[5], odd[5];
    int e = 0, o = 0;
    printf("Enter 5 numbers:\n");
    // Input original array
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    // Separate even and odd elements
    for(int i = 0; i < 5; i++) {
        if(arr[i] % 2 == 0) {
            even[e] = arr[i];
            e++;
        }
        else {
            odd[o] = arr[i];
            o++;
        }
    }
    // Display even elements
    printf("Even elements: ");
    for(int i = 0; i < e; i++) {
        printf("%d ", even[i]);
    }
    // Display odd elements
    printf("\nOdd elements: ");
    for(int i = 0; i < o; i++) {
        printf("%d ", odd[i]);
    }
    return 0;
}
