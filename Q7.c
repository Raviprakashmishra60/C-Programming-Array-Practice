// Problem 7: Merge two arrays into a third array.

#include <stdio.h>

int main() {
    int a[3], b[3], c[6];

    printf("Enter 3 elements of first array:\n");

    for(int i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 elements of second array:\n");

    for(int i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    // Copy first array into third array
    for(int i = 0; i < 3; i++) {
        c[i] = a[i];
    }

    // Copy second array into third array
    for(int i = 0; i < 3; i++) {
        c[i + 3] = b[i];
    }

    printf("Merged array:\n");

    for(int i = 0; i < 6; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}
