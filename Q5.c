// Problem 5: Print all repeated numbers in an array with their frequency.

#include <stdio.h>
int main() {
    int arr[5];
    int n = 5;
    printf("Enter 5 numbers:\n");
    // Input array
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Repeated numbers:\n");
    // Find repeated elements
    for(int i = 0; i < n; i++) {
        int count = 1;
    int alreadyCounted = 0;
        // Check if element appeared before
        for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyCounted = 1;
                break;
            }
        }
        if(alreadyCounted == 1) {
            continue;
        }
        // Count frequency
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count > 1) {
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    return 0;
}
