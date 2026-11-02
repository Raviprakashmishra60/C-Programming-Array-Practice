// Problem 13: Find the common elements in two arrays.

#include <stdio.h>

int main() {
    int a[5], b[5];

    printf("Enter 5 elements of first array:\n");

    // Input first array
    for(int i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 5 elements of second array:\n");

    // Input second array
    for(int i = 0; i < 5; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common elements are:\n");

    // Find common elements
    for(int i = 0; i < 5; i++) {

        int found = 0;

        for(int j = 0; j < 5; j++) {

            if(a[i] == b[j]) {
                found = 1;
                break;
            }
        }

        if(found == 1) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
