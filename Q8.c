// Problem 8: Find the missing number in an array.
#include <stdio.h>
int main() {
    int arr[4];
    int sum = 0;
    int n = 5;
    printf("Enter 4 numbers:\n");
    // Input array elements
    for(int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculate array sum
    for(int i = 0; i < 4; i++) {
        sum = sum + arr[i];
    }
    // Calculate expected sum
    int total = n * (n + 1) / 2;
    // Find missing number
    int missing = total - sum;
    printf("Missing number = %d", missing);
    return 0;
}
